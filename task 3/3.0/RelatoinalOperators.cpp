#include <iostream>
using namespace std;
int main() {
int a = 21;
int b = 10;
int c;

if(a == b){
cout << "Line 1 - a is equal to b"<<endl;
}else{
cout << "Line 1 - a is not equal to b"<<endl;
}

if(a<b){
    cout << "Line 2 - a is less than b"<<endl;
}else {
    cout << "Line 2 - a is not less than b"<<endl;
}

if(a > b){
    cout << "Line 3 - a greater than b"<<endl;
}else{
    cout << "Line 3 - a greater than b"<<endl;
}

/*Lets change the values of a and b*/

a = 5;
b = 20;

if( a <= b){
    cout << "Line 4 - a is either less than or equal to b"<<endl;
}

if( a >= b){
    cout << "Line 4 - a is either greater than or equal to b"<<endl;
cout << "Line 4 - Value of c is : " <<c<<endl;
}

return 0;
}