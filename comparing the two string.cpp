//to compare the two string -if the string matches then the program will stop running....
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char key[]="mango";
	char buffer[50];
	do{
		cout<<"favourite fruit";
		cin>>buffer;
	}while(strcmp(key,buffer)!=0);
	cout<<"Answer is correct"<<"\n";
	return 0;
}
