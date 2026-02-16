#include <iostream>
using namespace std;


struct stinfo 
{

 int Age;
 bool HasDrivingLicense;
 bool HasRecommendation;

};

stinfo ReadInfo() 
{
 stinfo Info;

 cout << "Please Enter Your Age?" << endl;
 cin >> Info.Age;

 cout << "Do you have driver License?" << endl;
 cin >> Info.HasDrivingLicense;

 cout << "Do you have Recommendation?" << endl;
 cin >> Info.HasRecommendation;

 return Info;
}

bool IsAccepted(stinfo Info) 
{

  if (Info.HasRecommendation) 
  {
    return true;
  }
  else
  {
  return (Info.Age > 21 && Info.HasDrivingLicense);
  }
}

void PrintResult(stinfo Info) 
{

 if (IsAccepted(Info))
   cout << "\n Hired" << endl;
 else
   cout << "\n Rejected" << endl;

}

int main() {


PrintResult(ReadInfo());

  return 0;
}
