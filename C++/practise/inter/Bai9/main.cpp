#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int arr[20];

int isPrime(int n){
	if(n<2)return 0;
	if(n==2||n==3)return 1;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}

void lietKe(int n){
	int dem1, dem2;
	if(n==1){
		cout<<"uoc so: 1, khong co uoc nguyen to";
		return;
	}else{
		cout<<"uoc so: 1, "<<n<<", ";
		dem1=2; dem2=0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				dem1++;
				cout<<i<<", ";
				if(isPrime(i)){
					arr[dem2]=i;dem2++;
				}
			}
		}
		if(isPrime(n)){
			arr[dem2]=n;dem2++;
		}
		cout<<endl<<"co "<<dem1<<" uoc so"<<endl;
		if(dem2==0){
			cout<<"khong co uoc nguyen to";
		}
		else{
			cout<<"uoc nguyen to: ";
			for(int i=0;i<dem2;i++)cout<<arr[i]<<" ";
			cout<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	lietKe(n);
	return 0;
}