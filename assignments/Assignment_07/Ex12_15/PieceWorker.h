// PieceWorker.h
// Copyright Brian Yang 2023/01/02
#ifndef PW
#define PW
#include "Employee.h"
// Declare PieceWorker Class
class PieceWorker : public Employee {
public:
  PieceWorker(int ID, double wage, int pieces);
  double getWage();
  int getPieces();
  void setWage(double wage);
  void setPieces(int pieces);
  virtual double earning() { return wage * pieces; };

private:
  int ID;
  double wage;
  int pieces;
};
#endif