//at()
#include<iostream>
using namespace std;
int main(){
	string str="welcome to coding world";
	cout<<"string contains:"<<"\n";
	for(int i=0;i<str.length();i++){
		cout<<str.at(i);
	}
	return 0;
}
