#include <iostream>
#include <conio.h>
using namespace std;
int increment();
main(){
	cout<<increment()<<'\n';
	cout<<increment()<<'\n';
	cout<<increment()<<'\n';
	cout<<increment()<<'\n';
	
}
int increment(){
	static int a=0;
		return ++a;
}
