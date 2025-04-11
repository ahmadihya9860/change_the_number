#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    int number3;

    cout<<"enter number 1"<<endl;
    cin>>number1;
    cout<<"enter number 2"<<endl;
    cin>>number2;

    number3 = number1;
    number1 = number2;
    number2 = number3;


    cout<<"changes this numbers ..........."<<endl;
    cout<<"number 1 is :"<< number1 << endl;
    cout<<"number 2 is :"<< number2<<endl;
}