#include <iostream>
#include <string>

using namespace std;

int main()
{
  double numberSetOne;
  double numberSetTwo;
  double final;
  string method = "";
  cout << "Im a calculator! Enter numbers so I can calculate!\nEnter your first number:";
  cin >> numberSetOne;
  cout << "Great! What's your second number?";
  cin >> numberSetTwo;
  cout << "Awesome! What method do you choose?\n[Add, Subtract, Multiply, Divide]";
  cin >> method;
  if (method == "add" or method == "Add" or method == "ADD")
  {
    final = numberSetOne + numberSetTwo;
    cout << "The number calculates out to: " << final;
  }
  if (method == "substract" or method == "Subtract" or method == "SUBTRACT")
  {
    final = numberSetOne - numberSetTwo;
    cout << "The number calculates out to: " << final;
  }
  if (method == "Multiply" or method == "MULTIPLY" or method == "multiply")
  {
    final = numberSetOne * numberSetTwo;
    cout << "The number calculates out to: " << final;
  }
  if (method == "Divide" or method == "DIVIDE" or method == "divide")
  {
    final = numberSetOne / numberSetTwo;
    cout << "The number calculates out to: " << final;
  }
}
