#include<iostream>
using namespace std;
int main(){
  char alphabet;
  cout<<"Enter one Alphabet"<<endl;
  cin>>alphabet;
  if(alphabet == 'a' ||alphabet == 'e'||alphabet == 'i'||alphabet == 'o'||alphabet == 'u' )
  {
    cout<<"Its VOWEL :-}"<<endl;
  }
  else{
    cout<<"Its CONSONENT :-}";
  }



    return 0;
}