#include <iostream>
#include <cmath>

enum class operation { Add, Subtract, Multiply, Divide ,Squareroot};

struct Calculator {
operation op;
Calculator(operation operation) { op = operation; }

int calculate(int a, int b) {
switch (op) {
case operation::Add: {
return a + b;
} break;
case operation::Subtract: {
return a - b;
} break;
case operation::Multiply: {
return a * b;
} break;
case operation::Divide: {
return a / b;
} break;

case operation::Squareroot:{

return sqrt(a);
default: {
std::cout << "Error: invalid!\n";
return 0;
}

}
}
}
};

int main() {
int num1, num2;
std::string operation;
std::cout << "Please the first integer.\n";
std::cin >> num1;
std::cout << "Please provide the second integer(If using Squareroot, then please use same as first integer).\n";
std::cin >> num2;
std::cout << "What type of operation do you want to perform? (Add, Subtract, Multiply, Divide, or Squareroot)\n";
std::cin >> operation;

operation op{};

if (operation == "Add") {
op = operation::Add;
} else if (operation == "Subtract") {
op = operation::Subtract;
} else if (operation == "Multiply") {
op = operation::Multiply;
} else if (operation == "Divide") {
op = operation::Divide;

}else if (operation == "Squareroot" ){

op = operation::Squareroot;
}

Calculator calc(op);
auto answer = calc.calculate(num1, num2);
std::cout << answer << "\n";
}