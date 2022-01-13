//passing array to function
#include<iostream>
using namespace std;
void array(int arr[5]){
	cout<<"printing the elements of array"<<"\n";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"\n";
	}
}
int main(){
	int arr1[5]={10,20,30,40,50};
	int arr2[5]={60,70,80,90,100};
	array(arr1);
	array(arr2);
}
