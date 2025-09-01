#include<iostream>
#include<cmath>
using namespace std;
int main(){

cout<<"Enter The Number:"<<endl ;
int N ;
cin >> N ;
cout<<"Q1.sum of first N natural NUmber without loop"<<endl;
int sum;
sum =(N*(N+1))/2;//O(1)
cout<<sum<<"\t solution...=(n(n+1)/2)"<<endl;
cout<<"Q2. Wheather a number is Prime"<<endl;
int num;
cin>> num;
bool isprime = (num>1);
for(int i = 2;i*i<=num;i++)//condition always getting false as we are startion from o and 1 to get favourable output we have entered it
{
    if(num%i == 0)
    {
        isprime = false;
    }
}
 cout<<(isprime ? "PRIME":"NOT PRIME")<<endl;//o(sqrt(n)
cout<<"Q3. Reverse the Integer (Handle NegativeNumbers) "<<endl;
int rev=0,no; 
cin>>no;

// while(no!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
//     rev = rev*10+no%10;
//     no=no/10;
//  }
 for(int i=no;i>0;i=i/10){
    rev = rev*10+i%10;
 }
 cout<<"The Reverse Number:"<<rev<<endl;//digit extraction and reconstruction logic
 //Q4. Armstrong Number Check(3-digit)
 int number1,revarm=0,temp;
 cout<<"Q4. Armstrong Number vheck (3-digit)"<<endl;
 cin>>number1;
 temp = number1;
 while(temp!=0){//the Reverse loop will move on as we ARE USING DECREMENT main value
    revarm = revarm+pow(temp%10,3);
    temp/=10;
 }
 cout<<(revarm == number1 ? "Armstrong" : "Not Armstrong");//check the condition precisely with type of coma1rision would you do it
    return 0;
}