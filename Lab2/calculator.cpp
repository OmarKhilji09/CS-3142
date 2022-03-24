//Omar Khilji
//CISC 3142
//Lab 2 

#include <cmath>
#include <iostream>

enum class Operation { Add, Subtract, Multiply, Divide, Squareroot };

struct Calculator {
  Operation op;
  Calculator(Operation operation) { op = operation; }


  int calculate(int a, int b) {
    switch (op) {
    case Operation::Add: {        //here we add the two numbers 
      return a + b;
    } break;
    case Operation::Subtract: {    //here we subtract the two numbers 
      return a - b;
    } break;
    case Operation::Multiply: {  //here we multiply the two numbers
      return a * b;
    } break;
    case Operation::Divide: {  // here we divide the two numbers 
      return a / b;
    } break;

    case Operation::Squareroot: {   // here we take the squareroot action 

      return sqrt(a);
    default: {
      std::cout << "Error: invalid!\n";
      return 0;
    }
    }
    }
  }
};

int main() {                       //main program 
  int num1, num2;
  std::string operation;
  std::cout << "Integer 1.\n";
  std::cin >> num1;
  std::cout << "Integer 2 (Note: Using Squreroot function please keep both "
               "integers value the same.\n";
  std::cin >> num2;
  std::cout << "What type of operation do you want to perform? (Add, Subtract, "
               "Multiply, Divide)\n";
  std::cin >> operation;

  Operation op{};

  if (operation == "Add") {       //checking user operation
    op = Operation::Add;
  } else if (operation == "Subtract") {
    op = Operation::Subtract;
  } else if (operation == "Multiply") {
    op = Operation::Multiply;
  } else if (operation == "Divide") {
    op = Operation::Divide;

  } else if (operation == "Squareroot") {

    op = Operation::Squareroot;
  }

  Calculator calc(op);
  auto answer = calc.calculate(num1, num2);
  std::cout << answer << "\n";
}
