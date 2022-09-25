#include <iostream>
#include <string>
using namespace std;

class Employee {     // The class
  private:
    int salary;
  public:
    void setSalary(int x){
      salary = x;
    }
    int getSalary(){
      return salary;
    }
};

int main() {
  Employee masud;
  masud.setSalary(2000);

  cout << masud.getSalary();

  return 0;
}