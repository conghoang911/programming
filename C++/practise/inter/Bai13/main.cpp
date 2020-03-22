#include<iostream>
#include<conio.h>
using namespace std;

int check(long n){
	int soDu=0, tong=0;
	long soTam=n, soNghich=0;
	while(soTam!=0){
		soDu=soTam%10;
		if(soDu==0||soDu==6||soDu==8){
			tong+=soDu;
			soNghich=soNghich*10+soDu;
			soTam/=10;
		}
		else return 0;
	}
	if(tong%10==0 && soNghich==n)return 1;
	return 0;
}

int main(){
	for(long i=1000000;i<=999999999;i++)if(check(i))cout<<i<<endl;
	getch();
	return 0;
}