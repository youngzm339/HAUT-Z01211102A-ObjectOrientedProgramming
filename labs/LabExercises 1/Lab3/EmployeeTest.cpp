// Lab 3: EmployeeTest.cpp
// Copyright: Brian Yang 2022/12/29
// Create and manipulate two Employee objects.
#include <iostream>
#include <vector>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main() {
  vector<Employee> person;
  /* Create two Employee objects and assign them to Employee variables. */
  Employee Ma("Ma", "Ding", 123);
  person.push_back(Ma);
  Employee Yang("Yang", "Brian", -1);
  person.push_back(Yang);
  /* Output the first name, last name and salary for each Employee. */
  for (auto i = person.begin(); i != person.end(); i++) {
    cout << "Employee " << i - person.begin() + 1 << ":" << i->getFistName()
         << " " << i->getLastName() << " ";
    cout << "Yearly Salary :" << i->getMonthlySalary() * 12;
    cout << endl;
  }
  /* Give each Employee a 10% raise. */
  cout << "Increasing employee salaries by 10%" << endl;
  for (auto i = person.begin(); i != person.end(); i++) {
    i->setMonthlySalary(i->getMonthlySalary() * 1.1);
  }
  /* Output the first name, last name and salary of each Employee again. */
  for (auto i = person.begin(); i != person.end(); i++) {
    cout << "Employee " << i - person.begin() + 1 << ":" << i->getFistName()
         << " " << i->getLastName() << " ";
    cout << "Yearly Salary :" << i->getMonthlySalary() * 12;
    cout << endl;
  }
} // end main
