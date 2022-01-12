//if-else-if ladder 
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"enter your marks \n";
	cin>>marks;
	if(marks<0 || marks>100){
		cout<<"Invalid marks";
	}
	else if(marks>=0 && marks<=50){
		cout<<"fail";
	}
	else if(marks>=51 && marks<=60){
		cout<<"D grade";
	}
	else if(marks>=61 && marks<=70){
		cout<<"C grade";
	}
	else if(marks>=71 && marks<=80){
		cout<<"B grade";
	}
	else{
		cout<<"A grade";
	}
	return 0;
}
