#include <iostream>
using namespace std;
#include "stackdemo.h"

// Stack Implementation file (Yoshii)

// Please add good comments to this file.
// Edit to match my Notes-1


// constructor
stack::stack()
{
  top = -1;   // top is -1 to begin with
}


// destructor
stack::~stack() {
  /* nothing to do. */ 
}


//comment
void stack::stackError(char* msg)
{ cout << msg << endl; exit(1); }


//comment
void stack::push( el_t n )  
{
  if (isFull())  stackError("Fatal Error - stack overflow");
  else
    {
      top++;
      el[ top ] = n;
    }
}

//comment
void stack::pop(el_t& n) 
{
  if (isEmpty()) stackError("Fatal Error - stack underflow");
  else 
    {
      n = el[ top ];
      top--;
    }
}


//comment
void stack::topElem(el_t& n) 
{
  if (isEmpty()) stackError("Fatal Error - stack underflow");
  else 
    {
      n = el[ top ];  // the element is not removed
    }
}


//comment
bool stack::isEmpty() {
  return top == -1;
}


//comment
bool stack::isFull() {
  return top == (MAX-1);
}


//comment
void stack::displayAll() 
{
  if (isEmpty()) cout << "[ empty ]" <<endl;
  else
    for (int i = top; i >= 0; i--)
      {  cout << el[i] << endl; }
}


void stack::clearIt()
{
  // while not empty, keep popping
}



