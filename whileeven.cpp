#include<iostream>
using namespace std;

int main(){
    int number;
    int i=0;

    cout<<"Please enter maximum value until which you want the even number="<<endl;
    cin>> number;


    cout<<"The even numbers are="<<endl;
    while(i<=number)
{
    cout<< i <<" "<<endl;
    i=i+2;


}
return 0;
}
