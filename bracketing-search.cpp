/*
 *
 * Requires:
 * variables, data types, and numerical operators
 * basic input/output
 * logic (if statements, switch statements)
 * loops (for, while, do-while)
 * psudo random numbers
 * 
 * Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
 * If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
 * The program must let the user continue to guess until the user correctly guesses the number.
 * 
 * ★ Modify the program to output how many guesses it took the user to correctly guess the right number.
 * ★★ Modify the program so that instead of the user guessing a number the computer came up with, the computer guesses the number that the user has secretely decided. The user must tell the computer whether it guesed too high or too low.
 * ★★★★ Modify the program so that no matter what number the user thinks of (1-100) the computer can guess it in 7 or less guesses.
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int main()
//{
//  int secret, guess, times = 1;
//  srand(time(NULL));
//  secret = rand() % 100 + 1;
//
//  do {
//    cout << "Guess a number(1-100): " << flush;
//    cin >> guess;
//    if (secret > guess)
//      cout << "Too low" << endl;
//    else if (secret < guess)
//      cout << "Too high" << endl;
//    else
//      break;
//    times++;
//  } while (1);
//  
//  cout << "Congratulations! You took " << times << " times to get the right number." << endl;
//
//}

int get_random_by_rang(int start, int end)
{
  srand(time(NULL));
  return rand() % (end - start - 1) + start + 1;
}

int binary_guess(int start, int end) {
  return (end - start) / 2 + start;
}

int main()
{
  int guess, start = 1, end = 100;
  char feedback;

  guess = get_random_by_rang(start, end);

  cout << "Keep a secret number in your head(1-100)" << endl;

  do {
    cout << guess << endl;
    cout << "Too high(h), too low(l) or correct(c)? enter 'h', 'l' ro 'c' to tell the computer. " << flush; 
    cin >> feedback;
    if (feedback == 'h') {
      end = guess;
      //guess = get_random_by_rang(start, end);
      guess = binary_guess(start, end);
    } else if (feedback == 'l'){
      start = guess;
      //guess = get_random_by_rang(start, end);
      guess = binary_guess(start, end);
    } else {
      cout << "Yep! I win" << endl;
      break;
    }
  } while (1);
}
