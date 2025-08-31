#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a<b&&a<c){
        if(b<c){
            cout<< "The Number is Larger :"<<c;
        }
        else if(b>c){
            cout<< "The Number is Larger :"<<b;
        }
    }
    else {
           cout<< "The Number is Larger :"<<a;
    }
}