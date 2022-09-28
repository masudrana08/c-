#include <iostream>
#include <stdio.h>

using namespace std;
 
int main() {
    string employee;
    double salary, sales, totalSalary;
    salary=sales=totalSalary=0;

    cin >> employee >> salary >> sales;
    totalSalary = salary + (sales*0.15);
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}