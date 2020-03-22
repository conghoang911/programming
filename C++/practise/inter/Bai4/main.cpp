#include<iostream.h>
#include<conio.h>
using namespace std;

int main(){
	int h;
	cin>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<h-i-1;j++)cout<<"  ";
		for(int j=0;j<2*i+1;j++)cout<<"* ";
		cout<<endl;
	}
	getch();
	return 0;
}