#include <iostream>
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




  return 0;
}
