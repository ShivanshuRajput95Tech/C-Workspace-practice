#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"enter number of element :"<<endl;
  cin>>n;
    int arr1[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr1[i];
    }
    int max_val = 0;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        if(max_val<arr1[i]){
            max_val=arr1[i];
        count ++;
        }  
        cout<<"update happen"<< count <<"."<<max_val<<endl;
    }
    cout<<"The Max Value in array:"<<max_val<<endl;

    return 0;
}