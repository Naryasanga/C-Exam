#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int ArraySize=0, Pass=0, Fail=0;
	cout<<"please Enter The Number Of Student: "<<'\n';
	cin>>ArraySize;
	int Array[ArraySize];
		cout<<"Please Enter The Gradius Of Student: "<<'\n';
	for(int i=0; i<ArraySize; i++){
		cin>>Array[i];

	if(Array[i]>=10 && Array[i]<=20){

	Pass+=1;
		}
	else if(Array[i]>=0 && Array[i]<10){

	Fail+=1;
		}
	else{
		cout<<"Wrong !!!!!!!"<<'\n';
	}
		}
		cout<<"Pass Is: "<<Pass<<'\t'<<"fail Is: "<<Fail;
}
