#include <iostream>
#include "queue.h"

using namespace std;

void tot(int, queue&);

main() {
  queue myLine;
  for (int x=0;x<3;x++) {
    tot(x,myLine);
    myLine.displayAll();
    myLine.removeAll();
  }
  return 0;
}

void tot(int total,queue& myLine) {
  int digit, tmp;
  digit = total % 3;
  tmp = total / 3;
  if (tmp > 0) tot(tmp-1,myLine);
  switch(digit) {
    case 0: myLine.add('A'); break;
    case 1: myLine.add('B'); break;
    case 2: myLine.add('C'); break;
  }
}

