#include<iostream.h>
#include<conio.h>
using namespace std;

int kiemTra(int a, int b){
	while(a!=b){
		if(a>b)a-=b;
		else b-=a;
	}
	if(a==1)return 1;
	return 0;
}

int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int j=i+1;j<=b;j++)if(kiemTra(i, j))cout<<i<<" "<<j<<endl;
	}
	getch();
	return 0;
}