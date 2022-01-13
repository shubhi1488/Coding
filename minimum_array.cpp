//printing minimum number from array
#include<iostream>
using namespace std;
void minimum(int arr[5]){
	int min=arr[0];
	for(int i=0;i<5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"minimum element is:"<<min<<"\n";
}
int main(){
	int arr1[5]={10,30,2,40,70};
	int arr2[5]={40,3,1,100,5};
	minimum(arr1);
	minimum(arr2);
}
