#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter The Numbers"<<endl;
    cin>>number;
    if(number>0){
        cout<<"Number is Positive"<<endl;
    }
    else if(number== 0){
        cout<<"Number is Zero"<<endl;
    }
    else{
        cout<<"NUmber is Negative"<<endl;
    }
    return 0;
    
}