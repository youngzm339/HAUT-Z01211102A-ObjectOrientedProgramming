// Lab 2: GradeBook.h
// Copyright: Brian Yang 2022/12/29
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook {
public:
  // constructor initializes course name and instructor name
  GradeBook(string, string);
  void setCourseName(string); // function to set the course name
  string getCourseName();     // function to retrieve the course name
  /* write code to declare a get function for the instructor's name */
  string getInstructorName();
  /* write code to declare a set function for the instructor's name */
  void setInstructorName(string);
  void displayMessage(); // display welcome message and instructor name
  void changeMessage();

private:
  string courseName;     // course name for this GradeBook
  string instructorName; // instructor name for this GradeBook
};                       // end class GradeBook
