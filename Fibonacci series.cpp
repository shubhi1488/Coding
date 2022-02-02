//find the fibonacci series using recursive call..........
#include<iostream>
using namespace std;
class Fibonacci{
	public:
		static int Fib(int n){
			if(n==0||n==1){
				return n;
			}
			return Fib(n-1)+Fib(n-2);
		}
};
int main(){
	Fibonacci F1;
	cout<<F1.Fib(1);
	return 0;
}
