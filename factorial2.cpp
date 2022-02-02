//program to find the factorial using tail recursion.....
#include<iostream>
using namespace std;
class Factorial2{
	public:
		static void factorial(int n,int ans){
			if(n==1||n==0){
				cout<<ans;
				return;
			}
			factorial(n-1,ans*n);
		}
};
int main(){
	Factorial2 f1;
	f1.factorial(4,1);
	return 0;
}
