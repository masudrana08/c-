#include <iostream>
using namespace std;

class MyClass{
   protected:
      string name;
};

class OtherClass:public MyClass {
   public:
      int roll;
      string getName(){
         return name;
      };
      void setName(string x){
         name = x;
      }
};
class GrandChildClass:public OtherClass{
   public:
      int age;
};

int main(){
   GrandChildClass masud;
   masud.setName("masud");
   masud.roll = 1;
   masud.age = 19;

   cout << masud.getName() + " " << masud.roll << " " << masud.age;
   return 0;
}