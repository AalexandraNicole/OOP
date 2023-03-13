#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fstream>
#include <cstring>

/*// #EX 1. 
int myAtoi(char* str)
{
    int rez = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int cifra = (int) str[i];
        rez = rez * 10 + (cifra - '0');
    }
    return rez;
}
int main(void) {
    FILE* input;

    int sum = 0;
    char sir[100] = { '0' };
    
    input = fopen("in.txt", "r");
    if (input == NULL) {
        printf("\nFile not found!\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        int i = 0;
        while (true) {
            int k = fscanf(input, "%s", &sir);
            if (k != 1) break;
            sum = sum + myAtoi(sir);
            i += 1;
        }
       
 
    }
    fclose(input);
    printf("Suma este: %d\n", sum );
    return EXIT_SUCCESS;
}
 */

//# EX 2.
int lungime(char* sir)
{
    int lun = 0;
    for (int i = 0; sir[i] != '\0'; i++)
        lun++;
    return lun;

};

void bubblesort(int sir[100], int numar_de_elemente, char sirCuvinte[100][30])
{
    bool sortat;
    do
    {
        sortat = true;
        for (int i = 0; i <= numar_de_elemente; i++)
        {
            if (sir[i-1] > sir[i])
            {
                int aux = sir[i - 1];
                sir[i - 1] = sir[i];
                sir[i] = aux;
                char aux2[30];
                strcpy(aux2, sirCuvinte[i - 1]);
                strcpy(sirCuvinte[i - 1], sirCuvinte[i]);
                strcpy(sirCuvinte[i], aux2);
                sortat = false;
            }
        }
    } while (!sortat);
};

void aceeasiLungime(int sir[100], int numar_de_elemente, char sirCuvinte[100][30])
{
    for (int i = 0; i < numar_de_elemente; i++)
    {
        for (int j = 0; j <= numar_de_elemente; j++)
        {
            if (sir[i] == sir[j])
            {
                if (strcmp(sirCuvinte[i], sirCuvinte[j]) > 0)
                {
                    char aux[30];
                    strcpy(aux, sirCuvinte[i]);
                    strcpy(sirCuvinte[i], sirCuvinte[j]);
                    strcpy(sirCuvinte[j], aux);
                }
            }
        }
    }
};


int main(void) {
    char sir1[100][30] = { '\0' };
    int lungime_cuvinte[100] = { 0 };
    FILE* input;
    int i = 0;
    int numar_cuvinte = 0;
    input = fopen("in.txt", "r");
    if (input == NULL) {
        printf("\nFile not found!\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for (int i = 0; i >= 0; i++) {
            int k= fscanf(input, "%s", &sir1[i]);
            if (k != 1) break;
            lungime_cuvinte[i] = lungime(sir1[i]);
            numar_cuvinte++;

        }
    }
    bubblesort(lungime_cuvinte, numar_cuvinte, sir1);
    aceeasiLungime(lungime_cuvinte, numar_cuvinte, sir1);
    for (int i=numar_cuvinte; i >= 0; i--)
    {
        printf("%s\n", sir1[i]);
    }
    fclose(input);
    return EXIT_SUCCESS;
    
    
}