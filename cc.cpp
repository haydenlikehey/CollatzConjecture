#include <iostream>
#include <string>
using namespace std;

long long cc(long long seed, long long seedlimit) {

  int repCount = 0;
  long long highscore = 0;

  while (seed < seedlimit) {

    if (seed == 1) {
      repCount++;
    }

    if (seed % 2 == 0) {
      seed /= 2;
    }

    if (seed % 2 != 0) {
      seed = seed * 3 + 1;
    }

    if (highscore < seed) {
      highscore = seed;
    }

    if (repCount == 3) {
      repCount = 0;
      cout << "New High Score: " << highscore << endl;
    }
  }

  return highscore;
}



int main() {

  cout << "Please enter a seed (long long): " << endl;
  long long userseed = 0;
  long long upperlimit = 0;
  cin >> userseed;

  cout << "Please enter an upper limit (long long): ";
  cin >> upperlimit;

  userseed = cc(userseed, upperlimit);

  cout << "Final peak: " << userseed << endl << "Impressed? 😏";

  

  return 0;
}
