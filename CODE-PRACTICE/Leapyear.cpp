#include<iostream>
using namespace std;
int main (){
cout<<"Check Wheather the Year is LEAP OR NOT ";
int year;
cin>>year;
if(year%400==0 || year%100==0 ||year%4==0){
    cout<<"YEAR '"<<year<<"' LEAP YEAR with 366 days"<<endl;
}
else{
    cout<<"YEAR"<<year<<"NOT LEAP YEAR with 365 days"<<endl;
}
cout<<"Hope SO You Enjoy THE YEAR :-}";
    return 0;
}