#include "Student.h"

int Student::GetEnglishGrade()
{
	cout << "Nota la engleza este " << EnglishGrade << endl;
	return EnglishGrade;
}
int Student::GetHistoryGrade()
{
	cout << "Nota la istorie este " << HistoryGrade << endl;
	return HistoryGrade;
}
int Student::GetMathGrade()
{
	cout << "Nota la matematica este " << MathGrade << endl;
	return MathGrade;
}

string Student::GetName()
{
	return Name;
}

void Student::SetEnglishGrade(int grade)
{
	if (grade > 0 && grade <=10)
		EnglishGrade = grade;
}
void Student::SetHistoryGrade(int grade)
{
	if (grade > 0 && grade <=10)
		HistoryGrade = grade;
}
void Student::SetMathGrade(int grade)
{
	if (grade > 0 && grade <=10)
		MathGrade = grade;
}
void Student::SetName(string name)
{
	Name = name;
}
float Student::MediaAritmetica()
{
	float mediaAritmetica;
	mediaAritmetica = (float)(MathGrade + EnglishGrade + HistoryGrade) / 3;
	return (mediaAritmetica);

}