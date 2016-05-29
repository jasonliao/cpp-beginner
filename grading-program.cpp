/*
 *
 * Requires:
 * variables, data types, and numerical operators
 * basic input/output
 * logic (if statements, switch statements)
 *
 * Write a program that allows the user to enter the grade scored in a programming class (0-100).
 * If the user scored a 100 then notify the user that they got a perfect score.
 * ★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A
 * ★★ Modify the program so that it will notify the user of their letter grade
 * 0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
 *
 */

#include <iostream>

using namespace std;

int main()
{
  int scored;
  char scores[] = {'F', 'D', 'C', 'B', 'A'};
  cout << "place enter the grade score in a programming class(0-100): " << endl;

  while (cin >> scored) {
    if (scored > 100 || scored < 0) 
      cout << "score must between 0 to 100" << endl;
    else
      break;
  }

  if (scored == 100) {
    cout << "congratulations, you got an perfect A" << endl;
  } else if (scored >= 60){
    cout << "you scored a " << scores[(scored - 50) / 10] << endl;
  } else {
    cout << "you scored a " << scores[0] << endl;
  }
  return 0;
}
