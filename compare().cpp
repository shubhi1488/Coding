//compare()
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	/*
	string str1="hello";
	string str2="welcome to gla university";
	output:- both are unequal
	*/
	string str1="welcome to gla university";
	string str2="welcome to gla university";
	int i=str1.compare(str2);
	if(i==0){
		cout<<"both string are equal";
	}
	else{
		cout<<"both are unequal";
	}
	return 0;
}
