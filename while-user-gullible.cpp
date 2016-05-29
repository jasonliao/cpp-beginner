/*
 *
 * Requires:
 * variables, data types, and numerical operators
 * basic input/output
 * logic (if statements, switch statements)
 * loops (for, while, do-while)
 *
 * Write a program that ccontinues to asks the user to enter any number other than 5 until the user enters the number 5.
 * Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.
 * ★ Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.
 * ★★ Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must behave accordingly exiting when the user enters the number they were asked not to.)
 *
 */

#include <iostream>

using namespace std;

//int main()
//{
//  int input;
//
//  cout << "Enter what number you want" << endl;
//  while (cin >> input) {
//    if (input != 5) {
//      cout << "Enter what number you want" << endl;
//    } else {
//      cout << "Hey! you weren't supposed to enter 5!" << endl;
//      return 0;
//    }
//  }
//}

//int main()
//{
//  int input, times = 1;
//
//  cout << "Enter what number you want" << endl;
//  while (cin >> input) {
//    if (input != 5) {
//      if (times != 10) {
//        cout << "Enter what number you want" << endl;
//        times++;
//      } else {
//        cout << "Wow, you're more patient then I am, you win." << endl;
//        return 0;
//      }
//    } else {
//      cout << "Hey! you weren't supposed to enter 5!" << endl;
//      return 0;
//    }
//  }
//}

int main()
{
  int input, times = 0;
  
  cout << "Please enter any number orther than " << times << endl;
  while (cin >> input) {
    if (input != times) {
        times++;
        cout << "Please enter any number orther than " << times << endl;
    } else {
      cout << "Oops!" << endl;
      return 0;
    }
  }
}
