#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct Student
{
char Name[30];
char StudentNumber[15];
char Major[20];
float TestScores[5];
float TestAverage;
char TestGrade;
};
Student Cs1;
void FillInfo(int &Num, Student &S)
{
 int TestTotal=0;
 cout<<"Enter student name: ";
 gets(S.Name);
 cout<<"Enter student number: ";
 gets(S.StudentNumber);
 cout<<"Enter student major: ";
 gets(S.Major);
 cout<<"How many test score are there(1-5)?: ";
 cin>>Num;
 for(int i=1;i<=Num;i++)
 {
  cout<<"Enter test score no."<<i<<" :";
  cin>>S.TestScores[i];
  TestTotal+=S.TestScores[i];
  S.TestAverage = ((TestTotal)/Num);
 }
 if(S.TestAverage<60)
 S.TestGrade='F';
 if(S.TestAverage>=60&&S.TestAverage<70)
 S.TestGrade='D';
 if(S.TestAverage>=70&&S.TestAverage<80)
 S.TestGrade='C';
 if(S.TestAverage>=80&&S.TestAverage<90)
 S.TestGrade='B';
 if(S.TestAverage>=90&&S.TestAverage<=100)
 S.TestGrade='A';
}
void DisplayInfo(int Num, Student S)
 {
 cout<<"\nStudent Name: "<<S.Name<<"\n\tStudent Number: "<<S.StudentNumber<<"\n\tMajor: "<<S.Major<<"\n\tTestScore: ";
 for(int i=1;i<=Num;++i)
 cout<<S.TestScores[i]<<" ";
 cout<<"\n\tTest Average : "<<S.TestAverage<<"\n\tTest Grade : "<<S.TestGrade<<endl;
 }
void main()
 {
 clrscr();
 int Number=0;
 FillInfo(Number,Cs1);
 DisplayInfo(Number,Cs1);
 getch();
}