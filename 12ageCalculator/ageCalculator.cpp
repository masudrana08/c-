#include <iostream>
 
using namespace std;
 
int main() {
 
   int year, month, day;
   year = month = day = 0;
   cin >> day;

   if(day >= 365){
      year = day / 365;
      day -= year * 365;
   }
   if(day >= 30){
      month = day / 30;
      day -= month * 30;
   }
   	
   cout << year << " ano(s)"<< endl;
   cout << month << " mes(es)"<< endl;
   cout << day << " dia(s)"<< endl;
   return 0;
}