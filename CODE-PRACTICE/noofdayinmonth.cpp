#include<iostream>
using namespace std;
int main(){
    int year,month;
    cout<<"Enter YEAR :";
    cin>>year;
    cout<<"Enter MONTH (in digit):";
    cin>>month;
    int day;
    bool isleap = (year%400==0 ||year%100==0||year%4==0);
    switch(month){
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        day = 31;
        break;
    case 4:case 6: case 9:case 11:
         day = 30;
         break;
    case 2:
    day=(isleap ? 29:28);
       break;    
    default:
     cout<<"Invalid month number!";
     return 0;
    }
    cout<<"Number of the days in month"<<"of year"<<year<<"is :"<<day<<endl;

    return 0;
}