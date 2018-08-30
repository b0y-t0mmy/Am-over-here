#include <iostream>
using namespace std;

int main()
{
   int score;
   cout << "Please input score\n";
   cin >> score;

   if(score <= 100 && score >= 80)
     {cout << "A\n";
      cout << "Excellent";
     }
   if(score <= 79 && score >= 70)
     {cout << "B\n";
      cout << "Very Good";
     }
   if(score <= 69 && score >= 60)
     {cout << "C\n";
      cout << "Good";
     }
   if(score <= 59 && score >= 55)
     {cout << "D\n";
      cout << "Pass";
     }
   if(score <= 54 && score >= 50)
     {cout << "E\n";
      cout << "Credit";
     }
   if(score <= 49)
     {cout << "F\n";
      cout << "Fail";
     }
 
     return 0;
}
       