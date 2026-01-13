#include<iostream>
using namespace std;
float calculatePercentage(int m1,int m2,int m3,int m4,int m5)
{
	float total=m1+m2+m3+m4+m5;
	float percentage=(total/500)*100;
	return percentage;
}
void displayResult(float percentage)
{
	cout<<"Percentage = "<<percentage<<"%"<<endl;
	if(percentage>=90)
	  cout<<"Grade = A+"<<endl;
	else if(percentage>=80)
	  cout<<"Grade = A"<<endl;
	else  if(percentage>=70)
	  cout<<"Grade = B"<<endl;
	else  if(percentage>=60)
	  cout<<"Grade = C"<<endl;
	else
	  cout<<"Grade = Fail"<<endl;
}
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	cout<<"Enter marks for 5 subjects: ";
	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	float percentage=calculatePercentage(sub1,sub2,sub3,sub4,sub5);
	displayResult(percentage);
	return 0;
}
