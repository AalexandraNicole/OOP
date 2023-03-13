#include "FunctiGlobale.h"

int CmpMathGrade(Student s1, Student s2)
{
	int gradeS1 = s1.GetMathGrade(), gradeS2 = s2.GetMathGrade();
	if (gradeS1 == gradeS2) {
		cout << "Studenti cu medi egale" << endl;
		return 0;
	}
	if (gradeS1 > gradeS2) {
		cout << "Studentul " << s1.GetName() << " are media mai mare" << endl;
		return 1;
	}
	if (gradeS1 < gradeS2)
	{
		cout << "Studentul " << s2.GetName() << " are media mai mare" << endl;
		return -1;
	}

};

int CmpHistoryGrade(Student s1, Student s2)
{
	int gradeS1 = s1.GetHistoryGrade();
	int gradeS2 = s2.GetHistoryGrade();
	if (gradeS1 == gradeS2) {
		cout << "Studenti cu medi egale" << endl;
		return 0;
	}
	if (gradeS1 > gradeS2) {
		cout << "Studentul " << s1.GetName() << " are nota mai mare" << endl;
		return 1;
	}
	if (gradeS1 < gradeS2)
	{
		cout << "Studentul " << s2.GetName() << " are nota mai mare" << endl;
		return -1;
	}

};

int CmpEnglishGrade(Student s1, Student s2)
{
	int gradeS1 = s1.GetEnglishGrade();
	int gradeS2 = s2.GetEnglishGrade();
	if (gradeS1 == gradeS2) {
		cout << "Studenti cu medi egale" << endl;
		return 0;
	}
	if (gradeS1 > gradeS2) {
		cout << "Studentul " << s1.GetName() << " are nota mai mare" << endl;
		return 1;
	}
	if (gradeS1 < gradeS2)
	{
		cout << "Studentul " << s2.GetName() << " are nota mai mare" << endl;
		return -1;
	}

};

int CmpGrade(Student s1, Student s2)
{
	int gradeS1 = s1.MediaAritmetica();
	int gradeS2 = s2.MediaAritmetica();
	if (gradeS1 == gradeS2) {
		cout << "Studenti cu medi egale" << endl;
		return 0;
	}
	if (gradeS1 > gradeS2) {
		cout << "Studentul " << s1.GetName() << " are media mai mare" << endl;
		return 1;
	}
	if (gradeS1 < gradeS2)
	{
		cout << "Studentul " << s2.GetName() << " are media mai mare" << endl;
		return -1;
	}

}

int CmpName(Student s1, Student s2)
{
	string Stud1 = s1.GetName();
	string Stud2 = s2.GetName();
	if((Stud1.compare(Stud2))==0)
		return 0;
	if ((Stud1.compare(Stud2)) > 0)
		return 1;
	if ((Stud1.compare(Stud2)) < 0)
		return -1;
}