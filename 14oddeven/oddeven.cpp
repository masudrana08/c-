#include <iostream>

using namespace std;

int main()
{
   int n;
   int arr[10000] = {};
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < n; i++)
   {
      int x = arr[i];
      if (x == 0)
      {
         cout << "NULL" << endl;
      }
      else
      {
         if (x % 2 == 0)
         {
            // Even
            if (x >= 0)
            {
               cout << "EVEN POSITIVE" << endl;
            }
            else
            {
               cout << "EVEN NEGATIVE" << endl;
            }
         }
         else
         {
            // Odd
            if (x >= 0)
            {
               cout << "ODD POSITIVE" << endl;
            }
            else
            {
               cout << "ODD NEGATIVE" << endl;
            }
         }
      }
   }

   return 0;
}