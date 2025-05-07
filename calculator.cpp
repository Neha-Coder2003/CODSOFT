# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;
  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;
  switch(op) {

    case '+':
      cout <<"Addition="<< num1 + num2;
      break;

    case '-':
      cout <<"Subtraction="<< num1 - num2;
      break;

    case '*':
      cout <<"Multiplication=" << num1 * num2;
      break;

    case '/':
      cout <<"Division="<< num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}