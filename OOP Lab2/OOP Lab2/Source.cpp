// EX 2
#include "Student.h"
#include "FunctiGlobale.h"
#include <iostream>

using namespace std;

int main()
{
	Student S1, S2;
	S1.SetName("Alin Constantin");
	string Numes1= S1.GetName();
	cout << Numes1 << endl;
	S1.SetEnglishGrade(10);
	S1.GetEnglishGrade();
	S1.SetMathGrade(10);
	S1.GetMathGrade();
	S1.SetHistoryGrade(9);
	S1.GetHistoryGrade();
	S1.MediaAritmetica();
	S2.SetName("Marian Bobutin");
	string Numes2 = S2.GetName();
	cout << Numes2 << endl;
	S2.SetEnglishGrade(10);
	S2.GetEnglishGrade();
	S2.SetMathGrade(6);
	S2.GetMathGrade();
	S2.SetHistoryGrade(9);
	S2.GetHistoryGrade();
	S2.MediaAritmetica();
	CmpGrade(S1, S2);

}