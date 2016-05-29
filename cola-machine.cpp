/*
 *
 * Requires:
 * variables, data types, and numerical operators
 * basic input/output
 * logic (if statements, switch statements)
 *
 * Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
 * Then allow the user to choose a beverage by entering a number 1-5.
 * Output which beverage they chose.
 * ★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
 * If instead your program uses a switch statement, modify it to use if/else-if statements.
 * ★★ Modify the program so that if the user enters a choice other than 1-5 then it will output "Error. choice was not valid, here is your money back."
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int choice;
  vector<string> beverages = {"Coke", "Water", "Sprite", "Lemonade", "Soda"};
  for (int i = 0; i != 5;) {
    cout << ++i << ". " << beverages.at(i) << endl;
  }
  cout << "enter 1 - 5 to choose your favorite beverage" << endl;
  cin >> choice;
  if (choice >= 1 && choice <= 5) {
    cout << "Here is your " << beverages.at(--choice) << " :)"<< endl;
  } else {
    cerr << "Error. choice was not valid, here is your money back." << endl;
  }
  return 0;
}
