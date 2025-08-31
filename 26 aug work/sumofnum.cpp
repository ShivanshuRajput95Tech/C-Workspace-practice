#include<iostream> 
using namespace std;
int main(){ 
    int y; 
    cout << "Enter MY Number: "; // Corrected output statement
    cin >> y; 
    int sum; 
    sum = y * (y + 1) / 2; 
    cout << "The sum of Given Number : " << sum << std::endl; 
    return 0; 
}