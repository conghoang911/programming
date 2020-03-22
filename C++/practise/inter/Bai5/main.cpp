#include<iostream.h>
#include<conio.h>
using namespace std;

int kiemTra(int n){
	int soTam=n, soNghich=0, tongChuSo=0, soDu=0;
	while(soTam!=0){
		soDu=soTam%10;
		soNghich = soNghich*10 + soDu;
		tongChuSo+=soDu;
		soTam/=10;	
	}
	if(soNghich==n && tongChuSo%10==0)return 1;
	return 0;
}

int main(){
	int dem=0;
	for(int i=100000;i<=999999;i++){
		if(kiemTra(i)){
			cout<<i<<" ";
			dem++;
			if(dem==5){
				dem=0; cout<<endl;
			}
		}
	}
	cout<<endl;
	getch();
	return 0;
}