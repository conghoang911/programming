#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int isPrime(long n){
	if(n<2)return 0;
	if(n==2||n==3)return 1;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}

int tongChuSo(int n){
	int tong=0, soTam=n;
	while(soTam!=0){
		tong+=soTam%10;
		soTam/=10;
	}
	return tong;
}

void phanTichNguyenTo(int n){
	int m=n;
	for(int i=2;i<=m/2;i++){
		while(n%i==0){
			n/=i;
			if(n>1)cout<<i<<"*";
			else cout<<i;
		}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	cout<<tongChuSo(n)<<endl;
	if(isPrime(n))cout<<n<<endl;
	else phanTichNguyenTo(n);
	getch();
	return 0;
}