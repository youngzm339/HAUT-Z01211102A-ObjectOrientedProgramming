// PieceWorker.cpp
// Copyright Brian Yang 2023/01/02
#include "PieceWorker.h"
#include "Employee.h"
// Define PieceWorker Class
// Constructor
PieceWorker::PieceWorker(int ID, double wage, int pieces) : Employee(ID) {
  this->wage = wage;
  this->pieces = pieces;
};
// Functions
double PieceWorker::getWage() { return wage; };
int PieceWorker::getPieces() { return pieces; };
void PieceWorker::setWage(double wage) { this->wage = wage; };
void PieceWorker::setPieces(int pieces) { this->pieces = pieces; };
// double PieceWorker::earning() { return wage * pieces; };