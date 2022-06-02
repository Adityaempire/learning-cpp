//variables=Variables are containers for storing data values.

//types of variables is c++
/*there are different types of variables (defined with different keywords)

int - stores integers (whole numbers), without decimals, such as 123 or -123

double - stores floating point numbers, with decimals, such as 19.99 or -19.99

char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

string - stores text, such as "Hello World". String values are surrounded by double quotes

bool - stores values with two states: true or false*/

//Declaring variables
//Syntax - Data type variable_name =value;

//CODE
#include <iostream>
using namespace std;
int main(){
int variable1 = 20;
double variable2 = 27.8874;
char variable3 = 'a';
string variable4 = "Aditya";
bool variable5 = true;


//cout(in python like "print") is used for printing any value
//double coat ke andar wala value as it is print krwane ke liye krte hai
//<< use hota hai line continuation ke liye (just like comma)



cout <<  "variable 1 value ="<< variable1 << endl;
cout << "variable 2 value ="<< variable2 << endl;
cout << "variable 3 value ="<< variable3 << endl;
cout << "variable 4 value ="<< variable4 << endl;
cout <<"variable 5 value ="<< variable5 << endl;
return 0;}
