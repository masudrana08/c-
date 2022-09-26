#include <iostream>
using namespace std;
int main() {
   double arr[6] = {};
   int count=0;

   for(int i=0; i<6; i++){
      cin >> arr[i];
   };

   for(int i=0; i<6; i++){
      if(arr[i] >= 0){
         count += 1;
      }
   };
   
   cout << count << " valores positivos"<<endl;
    return 0;
}