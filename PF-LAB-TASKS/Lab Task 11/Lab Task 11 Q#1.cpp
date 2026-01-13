#include<iostream>
using namespace std;
int main()
{
	int arr[5],sum=0;
	cout<<"Enter 5 numbers:\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"Sum of the 5 numbers = "<<sum<<endl;
	return 0;
}
