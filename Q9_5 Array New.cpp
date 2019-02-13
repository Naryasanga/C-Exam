#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int ArraySize=5;
	int array[ArraySize];
	for(int i=0; i<ArraySize; i++){
		cin>>array[i];
	}
		for(int i=0; i<ArraySize; i++){
			cout<<array[i]<<'\t';
		}
}
