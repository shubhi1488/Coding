//recursion-finding the factorial number
#include<iostream>
using namespace std;
int factorial(int n){
	if(n<0)
	return(-1);
	if(n==0)
	return(1);
	else{
		return(n*factorial(n-1));
	}
	
}
int main(){
	int factorial(int);
	int fact,value;
	cout<<"enter a value"<<"\n";
	cin>>value;
	fact=factorial(value);
	cout<<"factorial is:"<<fact<<"\n";
	return 0;
}
