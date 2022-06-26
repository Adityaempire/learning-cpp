#include <iostream>
using namespace std;
int main(){

    string username = "adityaempire03";
    string password = "79799@aditya";
    string userinput1;
    string userinput2;


    cout << "Please enter your username:"<<endl;

    getline(cin,userinput1);

    if (userinput1 == username) {
        cout << "Enter your password:" <<endl;

        getline(cin,userinput2);

        if (userinput2 == password){
            cout << "WELCOME!" <<endl;


        }
        else {
            cout << "Wrong password!" <<endl;

        }
    }
  else {
    cout<< "Wrong username!"<<endl;
  }
  return 0;

}
