#include<iostream>
using namespace std;
int main(){
	string username, password;
	string correctUsername="admin";
	string correctPassword="12345";
	cout<<"Enter Username:  ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;
	if(username == correctUsername && password == correctPassword){
		cout<<"Access Granted." <<endl;
	}else
	if(username == correctUsername && password != correctPassword){
		cout<<"Wrong Password."<<endl;
	}
	else{
		cout<<"User Not Found."<<endl;
	}
	return 0;
}
