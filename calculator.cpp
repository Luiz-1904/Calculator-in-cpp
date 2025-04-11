/*
  Simple C++ Calculator
  Author: Luiz Machado (Trone)
  Description: Performs basic arithmetic operations (sum, subtraction,
               multiplication, division) with input validation and looping.
*/
#include <iostream> // Include standard library
bool isRunning = true; // Verify if the calculator is running

// Function to calculate the sum of two numbers
double sum(double v1, double v2){
  return v1 + v2;
}

// Function to calculate the difference between two numbers
double sub(double v1, double v2){
  return v1 - v2;
}

// Function to calculate the product of two numbers
double mult(double v1, double v2){
  return v1 * v2;
}

// Function to calculate the division of two numbers
double div(double v1, double v2){
  return v1 / v2;
}

// Function to ask the user if they want to calculate again
void playAgain() {
  // res is a char variable that stores the user's response
    char res;
    // while loop to keep asking until a valid response is given
    while (true) {
        std::cout << "Do you want to calculate again? (Y/N): ";
        std::cin >> res;
        res = toupper(res); // Convert to uppercase for case-insensitive comparison

        // Check if the response is valid
        if (res == 'Y') {
            isRunning = true;
            break;
        } else if (res == 'N') {
            isRunning = false;
            break;
        } else {
            std::cout << "Invalid answer.\n";
            std::cin.clear(); // clean input buffer
            std::cin.ignore(1000, '\n'); // clear input buffer until newline
        }
    }
}

// Function to perform the calculation
static void calculator(double v1, double v2, int op){
  // switch statement to perform the calculation
  switch (op){
    case 1:
      std::cout  << v1 << "+" << v2 << " = " << sum(v1, v2) << std::endl;
      break;
    case 2:
      std::cout << v1 << "-" << v2 << " = " << sub(v1, v2) << std::endl;
      break;
    case 3:
      std::cout << v1 << "*" << v2 << " = " << mult(v1, v2) << std::endl;
      break;
    case 4:
      if(v1 == 0 or v2 == 0){
        std::cout << "ERROR: Division by zero. \n";
        break;
      }
      std::cout << v1 << "/" << v2 << " = " << div(v1, v2) << std::endl;
      break;
    default:
      std::cout << "Invalid operation\n";
      std::cin.clear(); // clear input buffer
      std::cin.ignore(1000, '\n');
      break;
  }
  playAgain();
}

double readNumber(const std::string& prompt) {
  double value;
  while (true) {
    std::cout << prompt;
    std::cin >> value;
    if (std::cin.fail()) {
      std::cout << "Invalid number, type again.\n";
      std::cin.clear();
      std::cin.ignore(1000, '\n');
    } else {
      std::cin.ignore(1000, '\n');
      return value;
    }
  }
}

// Function to display the interface
static void interface(){
  double v1, v2;
  int op;
  v1 = readNumber("Type the first number: ");
  v2 = readNumber("Type the second number: ");

  while(true){
    std::cout << "Choose an operation (1 = +, 2 = -, 3 = *, 4 = /): ";
    std::cin >> op;
    if(std::cin.fail() || op > 4){
      std::cout << "Invalid operator, type again \n";
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      continue;
    }
    break;
  }

  calculator(v1, v2, op);
}

 // Main Function
int main() {
  while (isRunning) {
    interface();
  }
}
