#include <iostream>
using namespace std;

class Vehicle{
   public:
      int wheel;
      string driver;
};


class Car: public Vehicle{
   public:
      string oil;
};
class Taxi: public Vehicle{
   public:
      string gas;
};

int main(){
   Car toyota;
   Taxi taxi;

   toyota.driver = "masud";
   toyota.oil = "petrol";
   toyota.wheel = 4;

   taxi.driver = "rana";
   taxi.wheel = 3;
   taxi.gas = "cng";

   cout << "Toyota driver: " + toyota.driver + " oil: " + toyota.oil + " wheel: " << toyota.wheel << endl;
   cout << "Taxi driver: " + taxi.driver + " gas: " + taxi.gas + " wheel: " << taxi.wheel << endl;

   return 0;
}