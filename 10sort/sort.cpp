#include <iostream>
 
using namespace std;
int arr[3] = {};
int arrCp[3] = {};

int mysort() {
   for(int i=0; i<2; i++){
      if(arr[i]>arr[i+1]){
         int x = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = x;
         mysort();
      }else{
         continue;
      }
   };
   return 0;
};

int copyArr(){
   for(int i=0; i<3; i++){
      arrCp[i]= arr[i];
   };
   return 0;
}
int main() {
   // Taking input
   for(int i=0; i<3; i++){
      cin >> arr[i];
   };

   copyArr();
   mysort();

   // Printing
   for(int i=0; i<3; i++){
      cout << arr[i] << endl;
   };
   cout << endl;
    for(int i=0; i<3; i++){
      cout << arrCp[i] << endl;
   };
   return 0;
}