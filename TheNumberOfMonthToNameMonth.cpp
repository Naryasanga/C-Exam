#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int TheNumberOfMonth;
		string TheNameOfMonth;
		cout<<"please Enter An Number: "<<'\n';
			cin>>TheNumberOfMonth;
				switch(TheNumberOfMonth){
					case 1:
					TheNameOfMonth="january";
					break;
					case 2:
					TheNameOfMonth="February";
					break;
					case 3:
					TheNameOfMonth="March";
					break;
					case 4:
					TheNameOfMonth="April";
					break;
					case 5:
					TheNameOfMonth="May";
					break;
					case 6:
					TheNameOfMonth="June";
					break;
					case 7:
					TheNameOfMonth="July";
					break;
					case 8:
					TheNameOfMonth="August";
					break;
					case 9:
					TheNameOfMonth="September";
					break;
					case 10:
					TheNameOfMonth="October";
					break;
					case 11:
					TheNameOfMonth="November";
					break;
					case 12:
					TheNameOfMonth="December";
					break;
					default:
					TheNameOfMonth="Wrong!!!";
	}
	cout<<"MonthName is: "<<'\n'<<TheNameOfMonth<<'\n';
}
