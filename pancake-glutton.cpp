/*
 *
 * Requires:
 * variables, data types, and numerical operators
 * basic input/output
 * logic (if statements, switch statements)
 * loops (for, while, do-while)
 * arrays
 *
 * Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
 * Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.
 * ★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.
 * ★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
 *
 * i.e.
 * Person 4: ate 10 pancakes
 * Person 3: ate 7 pancakes
 * Person 8: ate 4 pancakes
 * ...
 * Person 5: ate 0 pancakes
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

#define PERSON_NUMBER 10

using namespace std;

class Person {
  public:
    Person() = default;
    Person(int n, int p) : num(n), pancakes(p) { }
    int num;
    int pancakes;
};

bool
operator<(const Person &lhs, const Person &rhs)
{
  return lhs.pancakes < rhs.pancakes;
}

bool
is_more(const Person &lhs, const Person &rhs)
{
  return lhs.pancakes > rhs.pancakes;
}

int main()
{
  vector<Person> pvec;
  int number = 0, pancakes;

  cout << "How many pancakes you ate in your breakfast" << endl;
  cout << "Person " << ++number << ": " << flush;
  
  while (cin >> pancakes) {
    pvec.emplace_back(number, pancakes);
    if (number == PERSON_NUMBER) {
      break;
    }
    cout << "Person " << ++number << ": " << flush;
  }

  cout << endl;

  auto max = max_element(pvec.begin(), pvec.end());
  auto min = min_element(pvec.begin(), pvec.end());

  cout << "Person " << pvec.at(max - pvec.begin()).num << " ate the most pancakes(";
  cout << pvec.at(max - pvec.begin()).pancakes << ") for breakfast" << endl;

  cout << "Person " << pvec.at(min - pvec.begin()).num << " ate the most pancakes(";
  cout << pvec.at(min - pvec.begin()).pancakes << ") for breakfast" << endl;

  cout << endl;

  stable_sort(pvec.begin(), pvec.end(), is_more);

  for (auto &p : pvec) {
    cout << "Person " << p.num << ": ate " << p.pancakes;
    cout << " pancakes" << endl;
  }

}
