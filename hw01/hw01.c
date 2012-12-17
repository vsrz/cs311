#include <iostream>

using namespace std;

void tot(int);

main() {
  for (int x=0;x>=0;x++) {
    tot(x);
    cout << " ";
  }
  return 0;
}

void tot(int total) {
  int digit, tmp;
  digit = total % 3;
  tmp = total / 3;
  if (tmp > 0) tot(tmp-1);
  switch(digit) {
    case 0: cout << "A"; break;
    case 1: cout << "B"; break;
    case 2: cout << "C"; break;
  }
}
