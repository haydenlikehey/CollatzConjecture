#include <iostream>
#include <string>
using std::cout, std::cin, std::string, std::endl;

unsigned long long cc(unsigned long long seed) {

  unsigned long long highscore = 0;
  unsigned long long carrier = seed;

  while (true) {

    if (carrier == 4) {
          cout << "Conjecture true for seed " << seed << "\n";
          break;
    }

    if (carrier % 2 == 0) {
      carrier /= 2;
    }

    if (carrier % 2 != 0) {
      carrier = carrier * 3 + 1;
    }

    if (highscore < carrier) {
      highscore = carrier;
    }

  }

  return highscore;
}



int main() {

 start:
  cout << "Please enter a seed (long long): ";
  unsigned long long userseed = 0;
  cin >> userseed;

  userseed = cc(userseed);

  cout << "\nFinal peak: " << userseed << "\n\n";

  cout << "Repeat the process with a new seed? Yes or No." << endl;
  string response;
  cin >> response;

  if (response == "y" || response == "Y" || response == "yes" || response == "Yes") {
    goto start;
  }

  return 0;

}
