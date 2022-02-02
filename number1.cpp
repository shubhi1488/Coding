#include<iostream>
using namespace std;
class Number{
	public:
		 void print(int n){
			if(n<=0){
				return;
			}
			
			
			cout<<n<<"\n";
			print(n-1);
		
		}
};
int main(){
	Number n1;
	n1.print(5);
	return 0;
}
