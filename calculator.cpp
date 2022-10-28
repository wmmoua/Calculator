#include "calculator.h"

// CLASS FUNCTION DEFINITIONS GO HERE

Calculator::Calculator() {
  value_ = 0;
}

Calculator::Calculator(double value) {
  value_ = value;
}

double Calculator::value() {
  return value_;
}

void Calculator::set_value(double value) {
  value_ = value;
}

void Calculator::Add(double value) {
  value_ += value;
}

void Calculator::Subtract(double value) {
  value_ -= value;
}

void Calculator::Multiply(double value) {
  value_ *= value;
}

void Calculator::Divide(double value) {
  value_ /= value;
}

void Calculator::Exponent(int value) {
  for (int i = 0; i < value - 1; i++) {
    value_ = value_ * value_;
  }
}

void Calculator::Reset() {
  value_ = 0;
}

string Calculator::ToString() {
  stringstream ss;
  string s;
  ss.setf(std::ios::showpoint | std::ios::fixed);
  ss.precision(4);
  ss << value_;
  s = ss.str();
  return s;
}
