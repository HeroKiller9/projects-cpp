#include <iostream>
#include <cmath>

using namespace std;

int ReadTotalSales() 
{
  int TotalSales;

  cout << "Please enter a total Sales? " << endl;
  cin >> TotalSales;

  return TotalSales;
}

float GetComisionPercentage(float TotalSales) {

  if (TotalSales >= 1000000)
    return 0.01;
  else if (TotalSales >= 500000)
    return 0.03;
  else if (TotalSales >= 100000)
    return 0.03;
  else if (TotalSales >= 50000)
    return 0.05;
  else
    return 0.00;
}

float CalculateTotalComission(float TotalSales) {

  return GetComisionPercentage(TotalSales) * TotalSales;

}

int main() {

  float TotalSales = ReadTotalSales();

  cout << "Comision Percentage = " << GetComisionPercentage(TotalSales) << endl;
  cout << "Total Comision = " << CalculateTotalComission(TotalSales) << endl;

  return 0;
}
