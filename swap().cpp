//swap()
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	//string str1="Good Morning";
	//string str2="Good Night";
	string str1;
	cout<<"enter first string:";
	cin>>str1;
	string str2;
	cout<<"enter second string";
	cin>>str2;
	cout<<"string 1 before swapping:"<<str1<<"\n";
	cout<<"string 2 before swapping:"<<str2<<"\n";
	
	str1.swap(str2);
	cout<<"string 1 after swapping:"<<str1<<"\n";
	cout<<"string 2 after swapping:"<<str2<<"\n";
	return 0;
}
