#include <iostream>
#include <conio.h>
using namespace std;
void swap(int &,int &);
main(){
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<'\n'<<b;
}

void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
