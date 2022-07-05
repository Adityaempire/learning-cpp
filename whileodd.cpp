#include<iostream>
using namespace std;

int main(){
    int number;
    int i=1;

    cout<<"Please enter maximum value until which you want the odd number="<<endl;
    cin>> number;


    cout<<"The odd numbers are="<<endl;
    while(i<=number)
{
    cout<< i <<" "<<endl;
    i=i+2;


}
return 0;
}
