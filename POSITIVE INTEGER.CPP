#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"\nEnter an integer number: ";
	cin>>number;
	if(number>0)
	{
		cout<< " The number is POSITIVE."<<endl;
	}
	else if(number<0)
	{
		cout<<" The number is NEGATIVE."<<endl;
	}
	else
	{
		cout<<" The number is ZERO."<<endl;
	}
	return 0;
}
