#include <iostream>
using namespace std;

class Animal{
   public:
      string animalSound(){
         return "Animal sound";
      }
};

class Pig: public Animal{
   public:
   string animalSound(){
      return "Wee wee";
   }
};
class Dog: public Animal{
   public:
   string animalSound(){
      return "Bow Bow";
   }
};

int main(){
   Animal myAnimal;
   Dog myDog;
   Pig myPig;

   cout << myAnimal.animalSound() << endl;
   cout << myDog.animalSound() << endl;
   cout << myPig.animalSound() << endl;
   return 0;
}