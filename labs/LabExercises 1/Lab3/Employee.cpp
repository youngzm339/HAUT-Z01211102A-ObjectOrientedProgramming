// Lab 3: Employee.cpp
// Copyright: Brian Yang 2022/12/29
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string FirstName, string LastName, int MonthlySalary = 0) {
  setFirstName(FirstName);
  setLastName(LastName);
  setMonthlySalary(MonthlySalary);
}

/* Define a set function for the first name data member. */
void Employee::setFirstName(string name) {
  FirstName = name; // store FirstName
}
/* Define a get function for the first name data member. */
string Employee::getFistName() {
  return FirstName; // get FirstName
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name) {
  LastName = name; // store LastName
}
/* Define a get function for the last name data member. */
string Employee::getLastName() {
  return LastName; // get LastName
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int salary) {
  if (salary < 0) {
    MonthlySalary = 0;
  } else {
    MonthlySalary = salary;
  }
}
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary() {
  return MonthlySalary; // get MonthlySalary
}