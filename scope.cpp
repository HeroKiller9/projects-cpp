#include <iostream>
using namespace std;

int x = 5001; // Global Variables  //

void myfun1() {

int x = 500; // Variable scope / Local  //

 cout << "The value x inside function is: " << x << endl;
}

int main() {

 int x = 100; // Variable scope / Local // 

 cout << "The value of x inside Main is: " << x << endl;
 myfun1();



 cout << "The Global value of x is: " << ::x << endl;

 return 0;
}
