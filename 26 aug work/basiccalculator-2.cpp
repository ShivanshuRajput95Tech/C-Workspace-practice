#include<iostream>
using namespace std;
int main(){
  int choice;
  cout<<"Please Enter the given number to do operation";
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtrction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
   cin>>choice;
   if(choice ==5){
    cout<<"The Program is over"<<endl;
    return 0;
   }
   int a,b;
   cout<<"Enter Value1:"<<endl;
   cin>>a;
   cout<<"Enter Value2:"<<endl;
   cin>>b;
   switch(choice){
    case 1:  
    cout << "Value1 + Value2 = " << a + b << endl;
     break;
     case 2:  
    cout << "Value1 - Value2 = " << a - b << endl;
     break;
     case 3:  
    cout << "Value1 * Value2 = " << a * b << endl;
     break;
     case 4:
     if (b == 0) {
                cout << "Error: Division by zero is not allowed!" << endl;
            } else {
                cout << "Value1 / Value2 = " << static_cast<double>(a) / b << endl;
            }
            break;
        default:
            cout << "Invalid option!" << endl;
    }





    return 0;
}