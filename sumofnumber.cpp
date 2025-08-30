#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"please enter the number:";
   cin>> num ;
   int sum=0;
   for(int i =1;i <= num;i++){
    sum+=i;
   }
    cout<<"the sum of number"<<num<<":"<<sum<<endl;



    return 0;
}
