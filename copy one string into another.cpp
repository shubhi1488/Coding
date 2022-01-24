//copy one string to another....
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[25],str2[25];
	cout<<"enter a string";
	cin.getline(str1,25);
	strcpy(str2,str1);
	cout<<"string one is:"<<str1<<"\n";
	cout<<"string two is:"<<str2<<"\n";
	return 0;
}
