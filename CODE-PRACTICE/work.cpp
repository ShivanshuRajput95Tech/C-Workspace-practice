#include<iostream>
#include<cmath>
using namespace std;
int main(){

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
      int pair = x/i;  
      if(pair != i && a%(pair)==0 && b%(pair)==0){
       ans = max(ans,x/i);
      }
}
   cout<<ans<<endl;
      cout<<"LCM:"<<a*b/ans;

return 0;
}