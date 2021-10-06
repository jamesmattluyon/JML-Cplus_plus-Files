#include<iostream.h>
#include<stdio.h>
struct Student
{
char Name[30];
char Student Number[15];
char Major[20];
float TestScores[5];
float TestAverage;
char TestGrade;
};
Student Cs1;
void FillInfo(int &Num, Student &S)
{ int Test Total=0; cout<<"Enter student name: "; gets(Name); cout<<"Enter student number: "; gets(S.StudentNumber; “; cout<<”Enter student major: “; gets(S.Major); cout<<”How many test score are there(1-5)?: “;
cin>>Num;
for(int i=1;j<=Num;i++)
{
cout<<"Enter test score no."<<i<<" :;  	cin>>S.TestScores[i];  	TestTotal+=S.TestScores[i];
}

if(S.TestAverage<60)
S.Test Grade="F";
if(S.TestAverage>=60&&S.TestAverage<70)
S.Test Grade="D"; i
f(S.TestAverage>=70&&S.TestAverage<80)
S.Test Grade="C";
if(S.TestAverage>=80&&S.TestAverage<90)
S.Test Grade="B";
if(S.TestAverage>=0&&S.TestAverage<100)
S.Test Grade="A";
}

void DisplayInfo(int Num, Student S)
{
cout<<"\nStudent Name: "<<S.Name<<"\n\tStudent Number: "<<S.StudentNumber<<"\n\tMajor: "<<S.Major <<"\n\tTestScore: "; for(int 1=1;i<=Num;++i) coput<<TestScores[i]<<" " cout<<"\n\tTest Average : "<<S.TestAverage<<"\n\tTest Grade : "<<S.TestGrade<<endl;
}

void main()
{
int Number=0;
FillInfo(Number,CS1);
getch();
}

