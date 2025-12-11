#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;


int main()
{
   cout << "the data type" << endl << endl;
   
   cout << "int for Numbers\n";
   cout << "Example: int Age = 10\n\n";
   cout << "float for floating-Point\n";
   cout << "Example: float Number = 3.4\n\n";
   cout << "double for double floating-Point\n";
   cout << "Example: double Number = 1.99999999999999999999999\n\n";
   /* this types for Numbers */
 

   cout << "string for words\n";
   cout << "Example: string name = Hero Killer\n\n";
   cout << "char for letter\n";
   cout << "Example: char Gender = 'M' OR 'F'\n\n";
   cout << "bool for a true or false / 0/1 \n";
   cout << "Example: bool nyaa = true\n\n";
   /*  this for a letter and words */




   cout << "the size of the data type" << endl << endl;

   cout << "The size of bool data type is " << sizeof(bool) << " byte\n";
   cout << "The size of char data type is " << sizeof(char) << " byte\n";
   cout << "The size of short data type is " << sizeof(short int) << " byte\n";
   cout << "The size of int data type is " << sizeof(int) << " byte\n";
   cout << "The size of int long data type is " << sizeof(long) << " byte\n";
   cout << "The size of int long long data type is " << sizeof(long long) << " byte\n";
   cout << "The size of float data type is " << sizeof(float) << " byte\n";
   cout << "The size of double data type is " << sizeof(double) << " byte\n\n";

   cout << "The range of the data type" << endl << endl;
   cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
   cout << "unsigend char Range: (" << 0 << ", " << UCHAR_MAX << ")\n";

   cout << "short int Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
   cout << "unsigend short int Range: (" << 0 << ", " << USHRT_MAX << ")\n";

   cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
   cout << "unsigend int Range: (" << 0 << ", " << UINT_MAX << ")\n";
   cout << "long int Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
   cout << "unsigend long int Range: (" << 0 << ", " << ULONG_MAX << ")\n";

   cout << "long long int Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
   cout << "unsigend long long int Range: (" << 0 << ", " << ULLONG_MAX << ")\n";
   
   cout << "float Range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
   cout << "float(negative) Range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

   cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
   cout << "double(negative) Range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n";



   return 0;
}
