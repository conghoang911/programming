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

int check(long n){
	int soDu=0, soDuCu=10, tong=0;
	long soTam=n;
	while(soTam!=0){
		soDu=soTam%10;
		if(soDu>soDuCu)return 0;
		soDuCu=soDu;
		tong+=soDu;
		soTam/=10;
	}
	if(isPrime(tong)){
		if(isPrime(n))return 1;
	}
	return 0;
}

int main(){
	for(long i=1000000;i<=9999999;i++)if(check(i))cout<<i<<endl;
	getch();
	return 0;
}