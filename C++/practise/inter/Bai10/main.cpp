#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int isPrime(int n){
	if(n<2)return 0;
	if(n==2||n==3)return 1;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}

void lietKeNguyenTo(int n){
	int dem=0;
	for(int i=2;;i++){
		if(isPrime(i)){
			cout<<i<<" ";
			dem++;
		}
		if(dem==n)break;
	}
	cout<<endl;
}

void lietKeFibonaci(int n){
	int f1=0, f2=1, fn=0;
	for(int i=1;i<=n;i++){
		if(i==1)cout<<"0 ";
	    else if(i==2)cout<<"1 ";
	    else{
	    	fn=f1+f2;
	    	cout<<fn<<" ";
	    	f1=f2; f2=fn;
    	}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	lietKeNguyenTo(n);
	lietKeFibonaci(n);
	return 0;
}