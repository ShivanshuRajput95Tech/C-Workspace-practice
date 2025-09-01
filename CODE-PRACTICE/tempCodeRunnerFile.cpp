// while(no!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
// //     rev = rev*10+no%10;
// //     no=no/10;
// //  }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int number1,revarm=0,temp;
 cout<<"Q4. Armstrong Number vheck (3-digit)"<<endl;
 cin>>number1;
 temp = number1;
 while(temp!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
    int digit = temp%10;
    revarm +=pow(digit,3);
    temp/=10;
 }
 cout<<(revarm == number1 ? "Armstrong" : "Not Armstrong")<<endl;
 return 0;
}