#include<iostream>
using namespace std;
int main()
{
	int n,num;
	int evensum=0,oddsum=0;
	cout<<"Enter numbers you want to input: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter number "<<i<<": ";
		cin>>num;
		if(num%2==0)
		{
			evensum+=num;
		}
		else
		{
			oddsum+=num;
		}
	}
	cout<<"Sum of even numbers = "<<evensum<<endl;
	cout<<"Sum of odd numbers = "<<oddsum<<endl;
	return 0;
}
