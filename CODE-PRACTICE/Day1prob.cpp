#include<iostream>
using namespace std;
int main(){
    cout<<"the proj";
    cout<<"Hello World"<<endl;//Q1.print Hello World
    //Q2.take two int as input and print
    int a,b;
    cout<<"Enter two numbers";
    cin>>a;
    cin>>b;
    cout<<"Sum of Numbers"<<a+b<<"\n";//sum of the input
    //Q3. Swap two Number without using third variables
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<"b:"<<b<<endl;// swapping two number
    //Q4.calculate the area of circle
    int radius;
    cout<<"Please enter radius";
    cin>>radius;
    float area;
    area = 3.14*radius*radius;
    cout<<"Area of Circle :"<<area<<endl;//area of circle
    //Q5.Finf the large of two number
    if (a>b)
    {
      cout<<"The Greatest Number is A :"<<a<<endl;
    }
    else if(a==b)
    {
        cout<<"Both are Equal A & B:"<<a<<endl;
    }
    else{
        cout<<"The Greatest Number is B:"<<a<<endl;
    }//find the largest
    //Q6.check the number is even or add
    cout<<"Enter the Number:";
    int number;
    cin>>number;
    if(number%2==0){
        cout<<"Given Number is Even"<<endl;
    }
    else if (number == 0){
        cout<<"Given Number is Zero"<<endl;
     }
    else{
        cout<<"Number is Odd"<<endl;
    }
    //Q7. Convert the tempreture from celcius to Fehrenheit
    float c;
    cout<<"Enter the temoerature(Ceicius)"<<endl;
    cin>>c;
    float f = (c*9/5)+32;
    cout<<f<<endl;
    // cout<<c*(9/5)+32; changes the functionality and data type to need to store data we have to store first then enter to get favourable output
    // Q8. Calculate the simple intrest calculator
    float P,R,T;
    cout<<"Enter the Principal Amount";
    cin>>P;
    cout<<"Enter the Rate(in %)";
    cin>>R;
    cout<<"Enter the Time(in Years)";
    cin>>T;
    float si = (P*R*T)/100;
    cout<<"Simple Intrest :"<<si<<endl;
    
    return 0;  //boiler plate
}