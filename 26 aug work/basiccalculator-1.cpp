#include<iostream>
using namespace std;
int main(){
    cout<<"Please Enter the given number to do operation";
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtrction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;

     int operation;
    
      cin>>operation; 

      int a,b;
      if(operation<5){
        cout<<"Enter Value1:"<<endl;
        cin>>a;
        
        cout<<"Enter Value2:"<<endl;
        cin>>b;
}
        if(operation==1){
            cout<<"Value1+Value2 : "<<a+b<<endl;
        }
        else if(operation==2){
            cout<<"Value1-Value2 : "<<a-b<<endl;
        }
        else if(operation==3){
            cout<<"Value1*Value2 : "<<a*b<<endl;
        }
        else if(operation==4){
            if (b>0){
            cout<<"Value1/Value2 : "<<a/b<<endl;
        }
            else{
                cout<<"the solution is not defined"<<endl;
            }
        }
        else{
        cout<<"Thank For Using"<<endl;
        }
      
    return 0;
}