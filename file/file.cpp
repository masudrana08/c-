#include <iostream>
#include <fstream>
using namespace std;

int main(){
   // ofstream MyFile("hello.txt");
   // MyFile << "awesome";

   string mytext;
   ifstream MyReadFile("hello.txt");
   getline (MyReadFile, mytext);
   cout << mytext << endl;
  
   return 0;
}