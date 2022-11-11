// calculator using CPP concept Switch Case statement
# include <iostream>
using namespace std;

int main() {

  char op; // operator variable
  float num1, num2; // calculation variables

  cout << "Enter operator: +, -, *, /: ";
  cin >> op; // entering operators

  cout << "Enter two operands: ";
  cin >> num1 >> num2; // entering the numbers for calculations

  // switch case implementation
  switch(op) {
    // if op is + then perform addition
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    
    // if op is - then perform  subtraction
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    
    // if op is * then perform multiplication
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

     // if op is - then perform divison
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
