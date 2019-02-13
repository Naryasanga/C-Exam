#include <iostream>
#include <conio.h>
using namespace std;
int Sum(int ,int);
main(){
	int a,b;
	cout<<"please Enter Two Integer: "<<'\n';
	cin>>a>>b;
	cout<<"The Sum Of Two Integer Is: "<<'\n'<<Sum(a,b);
}
int Sum(int x,int y){
	return x+y;
	
}
