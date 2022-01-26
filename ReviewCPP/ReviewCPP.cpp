// ReviewCPP.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <iomanip>
#include <iostream>
using namespace std;

void test_string(string test_string, const char *letter_map) {
  string res;
  for (int i = 0; i < test_string.size(); i++) {
    if ('A' <= test_string[i] && test_string[i] <= 'Z') {
      res.push_back(test_string[i]);
    } else {
      res.push_back(letter_map[test_string[i]]);
    }
  }

  cout << test_string << " " << res << '\n';
}

// A non-recursive version of Euclid's algorithm
int gcd(int a, int b) {
  int temp;
  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return (a);
}

int main() {
  /*const string str1 = "abcdefghijklmnopqrstuvwxyz0123456789";
  const string str2 = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

  char letter_map[150]{0};

  for (int i = 0; i < str1.size(); i++)
  {
    letter_map[str1[i]] = str2[i];
  }

  test_string("acMNmn39", letter_map);
  test_string("vwXYZ0123", letter_map);*/

  // the first for-loop will handle the rows
  for (int i = 0; i < 6; i++) {
    // the second for loop will handle the columns
    for (int j = 0; j < 4; j++)
      // setw(int) sets the column width
      cout << setw(17) << "Hello World!";
    // this  next line is a part of the first for loop
    // and causes the new line
    cout << endl;
  }

  // set up cout to right-align
  cout << std::setiosflags(ios::left);
  // std::cout.setf(ios::left); // same as above
  // the first for loop will handle the rows
  for (int i = 0; i < 6; i++) {
    // the second for loop will handle the columns
    for (int j = 0; j < 4; j++)
      // setw(int) sets the column width
      cout << setw(17) << "Hello World!";
    // this  next line is a part of the first for loop
    // and causes the new line
    cout << endl;
  }

  int input_var = 0;
  // Enter the do while loop and stay there until either
  // a non-numeric is entered, or -1 is entered.  Note that
  // cin will accept any integer, 4, 40, 400, etc.
  // do {
  //  cout << "Enter a number (-1 = quit): ";
  //  // The following line accepts input from the keyboard into
  //  // variable input_var.
  //  // cin returns false if an input operation fails, that is, if
  //  // something other than an int (the type of input_var) is entered.
  //  if (!(cin >> input_var)) {
  //    cout << "Please enter numbers only." << endl;
  //    cin.clear();
  //    cin.ignore(10000, '\n');
  //  } else if (input_var != -1) {
  //    cout << "You entered " << input_var << endl;
  //  }
  //} while (input_var != -1);
  // cout << "All done." << endl;

  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << i * c << '\t';
    }
    cout << endl;
  }

  int random_number, guess;

  // Initialize random seed.
  srand(time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  // cout << "Your random number:" << random_number << endl;
  // cout << "Guess our number (1 to 100) ";
  // if (!(cin >> guess)) {
  //  cout << "Please enter only numbers" << endl;
  //} else {
  //  if (random_number < guess)
  //    cout << "The secret number is lower than " << guess << endl;
  //  else if (random_number > guess)
  //    cout << "The secret number is higher than" << guess << endl;
  //  else
  //    cout << "You guessed it: " << random_number << endl;
  //}
  // cout << "random: " << random_number << endl;

  // int x, y;
  // cout << "Enter two integers: ";
  // if (!(cin >> x >> y)) {
  //  cout << "Please enter only integers" << endl;
  //} else {
  //  cout << "gcd(" << x << ", " << y << ") = " << gcd(x, y) << endl;
  //}

  string g("abc abc abd abc");
  cout << g.replace(4, 1, "ijk", 3) << endl;

  string h("abc abc abd abc");
  cout << h.replace(4, 6, "ijk", 3) << endl;

  string k("abc abc abd abc");
  cout << k.replace(4, 3, "ijk", 3) << endl;

  string l("abc abc abd abc");
  cout << k.replace(12, 1, "xyz", 3) << endl;

  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  string str3 = str1.substr(6, 12);
  cout << "str1: " << str1 << " \nstr2" << str2 << " \nstr3 " << str3 << '\n';
  str1.insert(32, str2);
  cout << str1.find("to be", 0) << '\n';
  cout << str1.find("that", 0) << '\n';
  str1.replace(str1.find("to be", 0), 5, "to jump");
  str1.erase(9, 4);
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++) cout << str3[i];
  cout << endl;

  return 0;
}
