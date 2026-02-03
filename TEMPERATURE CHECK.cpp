#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temperature in celcius: ";
	cin>> temp;
	 if(temp>=40){
	 	cout<<"it's a very hot! Stay indoors."<<endl;
	 }
	 else if(temp>=30 && temp<=39){
	 	cout<<"Drink water and stay cool. it's hot outside."<<endl;
	 }
	 else if (temp>=20 && temp<=29){
	 	cout<<"Nice weather. You can go outside."<<endl;
	 }
	 else
	 { 
	 cout<<"It's cold. Wear warm clothes."<<endl;
	}
	 return 0;
}
