#include<iostream.h>
#include<conio.h>
using namespace std;

int main(){
	int width, height;
	cin>>width>>height;
	for(int i=0; i<width; i++){
		if(i==0 || i==width-1){
			for(int j=0; j<height; j++)cout<<"* ";
			cout<<endl;cout<<endl;
		}else{
			for(int j=0;j<height;j++){
				if(j==0 || j==height-1)cout<<"* ";
				else cout<<"  ";
			}
			cout<<endl; cout<<endl;
		}
	}
	getch();
	return 0;
}