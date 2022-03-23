#include <iostream>

enum class Operation { Add, Subtract, Multiply, Divide ,Squareroot };

struct Calculator {
Operation op;
Calculator(Operation operation) { op = operation; }

int calculate(int a, int b) {
switch (op) {
case Operation::Add: {
return a + b;
} break;
case Operation::Subtract: {
return a - b;
} break;
case Operation::Multiply: {
return a * b;
} break;
case Operation::Divide: {
return a / b;
} break;

case Operation::Squareroot:{

return a*b;
default: {
std::cout << "Error: invalid operation!\n";
return 0;
}

}
}
}
};

int main() {
int num1, num2;
std::string operation;
std::cout << "Please provide an integer.\n";
std::cin >> num1;
std::cout << "Please provide another integer.\n";
std::cin >> num2;
std::cout << "What type of operation do you want to perform? (Add, Subtract, Multiply, Divide)\n";
std::cin >> operation;

Operation op{};

if (operation == "Add") {
op = Operation::Add;
} else if (operation == "Subtract") {
op = Operation::Subtract;
} else if (operation == "Multiply") {
op = Operation::Multiply;
} else if (operation == "Divide") {
op = Operation::Divide;

}else if (operation == "Squareroot" ){

op = Operation::Squareroot;
}

Calculator calc(op);
auto answer = calc.calculate(num1, num2);
std::cout << answer << "\n";
}