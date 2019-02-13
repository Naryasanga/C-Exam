#include <iostream>
#include <conio.h>
using namespace std;
int Maximum(int, int, int);
main(){
	int a,b,c;
	cout<<"Please Enter 3 Integer: "<<'\n';
	cin>>a>>b>>c;
	cout<<"The Max Is: "<<'\n'<<Maximum(a,b,c);
}
int Maximum(int a, int b, int c){
	int max;
	max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}

