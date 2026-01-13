#include<iostream>
using namespace std;
int main()
{
	int popA,popB,years=0,choice;
	float rateA,rateB;
	cout<<"Enter population of Town A: ";
	cin>>popA;
	cout<<"Enter growth rate of Town A (%): ";
	cin>>rateA;
	cout<<"Enter population of Town B: ";
	cin>>popB;
	cout<<"Enter growth rate of Town B (%): ";
	cin>>rateB;
	cout<<"\nChoose loop type:\n";
	cout<<"1. For Loop\n";
	cout<<"2. While Loop\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	if(choice==1)
	{
		for(;popA<popB;years++)
		{
			popA+=popA*rateA/100;
			popB+=popB*rateB/100;
		}
	}
	else if(choice==2)
	{
		while(popA<popB)
		{
			popA+=popA*rateA/100;
			popB+=popB*rateB/100;
			years++;
		}
	}
	else
	{
		cout<<"Invalid choice!";
		return 0;
	}
	cout<<"\nAfter "<<years<<" years:\n";
	cout<<"Population of Town A = "<<popA<<endl;
	cout<<"Population of Town B = "<<popB<<endl;
	return 0;
}
