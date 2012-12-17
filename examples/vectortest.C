#include <vector>
#include <iostream>
using namespace std;


// Vector demonstration program by Yoshii

int main()
{
  vector<int> mylist(3);  // 3 slots to begin with
  int num;

  for (int i = 0; i < 3; i++)
  { 
    cout << "Type an element: ";
    cin >> num;
    mylist[i] = num;
  }

  cout << "Entered 3 elements" << endl;
  cout << "Current size: " << mylist.size() << endl;

  cout << "Adding one more (i.e. 100)" << endl;
  mylist.push_back(100);
  cout << "Current size: " << mylist.size() << endl;

  cout << "Adding one more (i.e. 200)" << endl;
  mylist.push_back(200);
  cout << "Current size: " << mylist.size() << endl;

  cout << "Removing one from the end" << endl;
  mylist.pop_back();
  cout << "Current size: " << mylist.size() << endl;


  cout << "Now the entire list is: " << endl;
  for (int i = 0; i < mylist.size(); i++)
  { 
    cout <<  mylist[i]  << endl;
  }

  vector<int> secondlist;   // 0 slots to begin with

  cout << "The second list has size " << secondlist.size() << endl;

  secondlist = mylist;

  cout << "After =mylist, the entire second list is: " << endl;
  for (int i = 0; i < secondlist.size(); i++)
  { 
    cout <<  secondlist[i]  << endl;
  }


  if (mylist == secondlist) cout << "they are the same" << endl;

  secondlist[3] = 200;

  if (mylist < secondlist) cout << "mylist is smaller than the secondd" << endl;

  vector<int> thirdlist(5,2);  // 5 slots all with 2
  cout << "The third list is: " << endl;
  for (int i = 0; i < thirdlist.size(); i++)
  { 
    cout <<  thirdlist[i]  << endl;
  }
  if (mylist < thirdlist) cout << "mylist is smaller than the third" << endl;


}  
