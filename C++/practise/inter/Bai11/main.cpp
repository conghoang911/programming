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

int toDo(int n){
	int soDu=0, soTam=n, soNghich=0;
	while(soTam!=0){
		soDu=soTam%10;
		if(soDu==4)return 0;
		soNghich= soNghich*10+soDu;
		soTam/=10;
	}
	if(soNghich==n && isPrime(n))return 1;
	return 0;
}

int main(){
	for(int i=10000;i<=9999999;i++)if(toDo(i))cout<<i<<endl;
	getch();
	return 0;
}