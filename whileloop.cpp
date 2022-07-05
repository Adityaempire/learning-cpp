#include<iostream>
using namespace std;
int main(){
    int thenumber = 88;
    int userinput;

    cout<<"please enter the number=" <<endl;

    while (thenumber != userinput) {
        cin>> userinput;

        cout<<"please try again"<<endl;
    }
    cout<<"you have entered the correct number" <<endl;

    return 0;

}
