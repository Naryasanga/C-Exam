#include <iostream>
#include <conio.h>
using namespace std;
void print(string, string);
void print(string);
main(){
	string F,L;
	cin>>F>>L;
	print(F,L);
	print(L);
}
void print(string Fname, string Lname){
	cout<<Fname<<'\t'<<Lname<<'\n';
}
void print(string Lname){
	cout<<Lname<<'\n';
}
