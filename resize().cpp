//resize()-when k is shorter than the actual string....
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str1="javatpoint";
	cout<<"string is:"<<str1<<'\n';
	str1.resize(4);
	cout<<"string after resizing :"<<str1;
	return 0;
}
