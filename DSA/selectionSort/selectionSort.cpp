#include <iostream>
using namespace std;

int main(){
   int arr[10] = {145, 23, -3432, 343, 9, 34, 553, 922, 13, 1};
   
   for(int i=0; i<10; i++){
      // Find small number
      int smallNumber=arr[i];
      int smallNumberPosition = i;
      for(int j=i; j<10; j++){
         if(smallNumber>arr[j]){
            smallNumber = arr[j];
            smallNumberPosition = j;
         }
      }
      int temp = arr[i];
      arr[i] = arr[smallNumberPosition];
      arr[smallNumberPosition] = temp;

   };
   
   for(int i=0; i<10; i++){
      cout << arr[i] << "\t" ;
   }
   return 0;
}