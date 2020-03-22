#include<iostream>
#include<conio.h>
using namespace std;

int arr[20];

int tangDan(int arr[], int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>=arr[i+1])return 0;
	}
	return 1;
}

int giamDan(int arr[], int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]<=arr[i+1])return 0;
	}
	return 1;
}

void lietKe(int arr[], int n){
	int demLe=0, demChan=0, dem;
	while(n!=0){
		arr[dem]=n%10;
		if(arr[dem]%2==0)demChan++;
		else demLe++;
		dem++;
		n/=10;
	}
	cout<<demChan<<" chan, "<<demLe<<" le"<<endl;
	if(tangDan(arr, dem))cout<<"giamDan"<<endl;
	else if(giamDan(arr, dem))cout<<"tangDan"<<endl;	//vi mang luu nguoc chu so
	else cout<<"khong tang khong giam"<<endl;
}

int main(){
	int n;
	cin>>n;
	lietKe(arr, n);
	return 0;
}