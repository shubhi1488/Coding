#include<iostream>
using namespace std;
class Factorial1{
	public:
		static int Fact(int n){
			if(n==1){
				return 1;
			}
			int recans=Fact(n-1);
			int myans=recans*n;
			return myans;
		}
};
int main(){
	Factorial1 f2;
	cout<<f2.Fact(3);
	return 0;
}
