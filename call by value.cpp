//call by value
#include<iostream>
using namespace std;
void change(int data){
	data=5;
}
int main(){
	int data=3;
	cout<<data;
}
