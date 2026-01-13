#include<iostream>
using namespace std;
int main()
{
	int n,i=1;
	long long fact=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	 }
	 cout<<"Factorial of "<<n<<" = "<<fact<<endl;
	 return 0; 
}
