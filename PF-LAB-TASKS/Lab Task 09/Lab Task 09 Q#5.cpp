#include<iostream>
using namespace std;
int main()
{
	float temp,sum=0,average;
	float highest;
	for(int day=1;day<=7;day++)
	{
		cout<<"Enter temperature for day "<<day<<": ";
		cin>>temp;
		sum+=temp;
		if(day==1)
		{
			highest=temp;
		}
		else if(temp>highest)
		{
			highest=temp;
		}
	}
	average=sum/7;
	cout<<"\nAverage temperature of the week = "<<average<<endl;
	cout<<"Highest temperature of the week = "<<highest<<endl;
	return 0;
}
