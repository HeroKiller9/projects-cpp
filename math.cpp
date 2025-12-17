#include <iostream>
#include <cmath>
using namespace std;


int main()
{

  int A;
  int B;


  cout << "Please enter the first Number A?" << endl;
  cin >> A;

  cout << "Please enter the second Number B?" << endl;
  cin >> B;

  cout << A << " + " << B << " = "  << A + B  << endl;
  cout << A << " - " << B << " = " << A - B << endl;
  cout << A << " * " << B << " = " << A * B << endl;
  cout << A << " / " << B << " = " << A / B << endl;
  cout << A << " % " << B << " = " << A % B << endl << endl;

  cout << "Relational Operators\n\n";
   
  cout << A << " = " << B << " is " << (A == B) << endl;
  cout << A << " != " << B << " is " << (A != B) << endl;
  cout << A << " > " << B << " is " << (A > B) << endl;
  cout << A << " < " << B << " is " << (A < B) << endl;
  cout << A << " >= " << B << " is " << (A >= B) << endl;
  cout << A << " <= " << B << " is " << (A <= B) << endl;


  /* sqrt c++ */
  double x;

  cout << "enter number sqrt" << endl;
  cin >> x;

  cout << "Square root value of " << sqrt(x)  << endl;

  /* round c++   */
  double C;

  cout << "enter number round?" << endl;
  cin >> C;

  cout << "the round value of " << round(C) << endl;

  cout << "the value of sqrt: " << round(sqrt(50)) << endl;

  cout << "pow / power" << pow (5, 0) << endl;
  cout << pow(5, 1) << endl;


  cout << ceil(2.9) << endl;
  
  cout << floor(2.9) << endl;

  cout << ceil(-2.9) << endl;
  cout << floor(-2.9) << endl;

 
  cout << "Absolute value of -10: " << abs(-10) << endl;
  cout << "Absolute value of 10: " << abs(10) << endl;















  return 0;
}
