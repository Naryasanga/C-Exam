#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int ArraySize=0 ,total=0;
	cout<<"Please Enter The Number: "<<'\n';
	cin>>ArraySize;
	int array[ArraySize];
	cout<<"plese Enter The Value: "<<'\n';
	for(int i=0; i<ArraySize; i++)
		cin>>array[i];
		cout<<"The Total Of Numbers Is: "<<'\n';
	for(int i=0; i<ArraySize; i++)
		total+=array[i];
		cout<<total;
}
