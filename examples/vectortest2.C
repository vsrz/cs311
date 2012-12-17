#include <vector>
#include <iostream>
using namespace std;


// This demonstrates how to remove front of the vector - Yoshii

int main()
{

  vector<int> myvec;
  vector<int>::iterator it;
  // it is an iterator that can move through a vector
  // at any point, *it is the element at the it location

  myvec.push_back(10);
  myvec.push_back(20);
  myvec.push_back(30);

  cout << "The front element is " << myvec.front() << endl;

  myvec.erase(myvec.begin()); // erase the front element found at begin()

  cout << "The front element is " <<  myvec.front() << endl;

  cout << "All elements: " << endl;
  // from beginning to end  ; end() is one beyond the end
  for (it = myvec.begin(); it != myvec.end(); it++)
            cout << *it << endl;

  myvec.erase(myvec.begin()); // erase the front element

  cout << "The front is now " << myvec.front() << endl;

  myvec.erase(myvec.begin()); // erase the front element

  if (myvec.empty()) cout << "It is now empty" << endl;

}

  
