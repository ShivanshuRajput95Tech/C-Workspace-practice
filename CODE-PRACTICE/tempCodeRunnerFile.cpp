// while(no!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
// //     rev = rev*10+no%10;
// //     no=no/10;
// //  }
#include<iostream>
#include<cmath>
using namespace std;
int main(){
//  int number1,revarm=0,temp;
//  cout<<"Q4. Armstrong Number vheck (3-digit)"<<endl;
//  cin>>number1;
//  temp = number1;
//  while(temp!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
//     int digit = temp%10;
//     revarm +=pow(digit,3);
//     temp/=10;
//  }
//  cout<<(revarm == number1 ? "Armstrong" : "Not Armstrong")<<endl;
//  int fact;
//  cout<<"The Factorial of number:";
//  cin>>fact;
//  for(int i=1;i*i<(fact);i++){
//     if(fact%i == 0){
//         cout<<i<<"\t";
    
//     if(i!=fact/i){
//         cout<<""<<fact/i<<"\t"<<endl;
//     }
//     }
//  
int a,b;
cin>>a;
cin>>b;
// cout<<"GCD"<<endl;
// int gcd;
// while(b!=0){
//    gcd = b;
//    b = a%b;
//    a = gcd;
// }
// cout<<a<<endl;
int ans = 1;
int x=min(a,b);
for(int i=1 ; i*i<=x;i++){
   if(a%i==0 && b%i==0){
        ans = max(ans,i);
      }     
      if(x/i != i && a%(x/i) && b%(x/i)){
       ans = max(ans,x/i);
      }
}
   cout<<ans<<endl;
return 0;
}