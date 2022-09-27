#include <iostream>
 
using namespace std;
int checkPrime(int n){
   int i=3;
   if(n==2) return 1;
   if(n%2 ==0) return 0;
   while(i < n){
      if(n%i == 0){
         return 0;
      }
      i+=2;
   }
   return 1;
}
int main() {
   int n;
   int arr[100]={};
   cin >> n;
   // Take input
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }

   // Check prime
   for(int i=0; i<n; i++){
      if(checkPrime(arr[i])){
         cout << arr[i] << " eh primo" << endl;
      }else{
         cout << arr[i] << " nao eh primo" << endl;
      }
   }
   return 0;
}