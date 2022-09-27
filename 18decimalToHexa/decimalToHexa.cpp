#include <iostream>
using namespace std;

 
int main() {
   int decimal;
   int x;
   cin >> decimal;
   
   char arr[16] = {'0','1', '2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   string hexa="";
   string reverseHexa="";

   while(x != 0){
      x = decimal / 16;
      hexa += arr[decimal - x*16];

      decimal = x;
   };
   
   for(int i=hexa.length()-1; i>=0; i--){
      reverseHexa += hexa[i];
   };
   cout << reverseHexa<<endl;
   return 0;
}