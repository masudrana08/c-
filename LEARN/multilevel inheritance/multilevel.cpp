#include <iostream>
using namespace std;

class MyClass{
   public:
      string name;
};

class ChildClass:public MyClass{
   public:
      int roll;
};
class GrandChildClass:public ChildClass{
   public:
      int age;
};

int main(){
   GrandChildClass masud;
   masud.name = "masud";
   masud.roll = 1;
   masud.age = 19;

   cout << masud.name + " " << masud.roll << " " << masud.age;
   return 0;
}