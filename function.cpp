//basic function program
#include<iostream>
using namespace std;
void func(){
	static int i=0;
	int j=0;
	i++;
	j++;
	cout<<"i="<<i<<"and j="<<j<<"\n";
	
}
int main(){
	func();
	func();
	func();
}
