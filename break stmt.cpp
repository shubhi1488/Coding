//break statement-the program will continue to print untill the given condition is satisfied
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<10;i++){
		if(i==5)
		{
			break;
		}
		cout<<i<<"\n";
	}
}
