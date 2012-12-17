
// Stack test program demo (Yoshii)

#include <iostream>
using namespace std;
#include "stackdemo.h" 


// To compile this, g++ stackdemo.C stacktest.C
// To run, ./a.out

int main ()
{

  cout << "************** STACK test program *************" << endl;
  cout << "This program tests an integer stack ADT implemented as" << endl;
  cout << "an array.  " << endl;
  cout << "It displays the entire stack whenever it is modified." << endl;
  cout << "***********************************************" << endl;

  stack S;  // this is the S object we need to work with
  
  int toadd; //this is the number the user wants to add to the S
  
  int selection; // selection will represent the choice of what the user
                 // wants to do

  int erased; // erased is going to be the number removed from the S


  do
    {

      cout << endl << "These are your options: " << endl << endl;
      cout << "   (1) Push a number  " << endl;
      cout << "   (2) Display the entire stack  " << endl;
      cout << "   (3) Pop the top element" << endl;
      cout << "   (4) Display the top element" << endl;
      cout << "   (5) Check to see if is it empty" << endl;
      cout << "   (6) Check to see if is it full" << endl;
      cout << "    Enter ( 0 ) to quit " << endl;
      cout << "===>";
      cin >> selection;

   
      switch (selection) {


      case 1:  // the Push choice
	if (!S.isFull())
	  {
	    cout << "Enter a positive integer to be added : ";
	    cin >> toadd;
	    S.push(toadd);
	    cout << "The current contents of the stack are:  ";
	    S.displayAll();
	    cout << endl;
	  }
	else
	  { cout << "Stack is already full" << endl;
	  }
	break;
	
      case 2: // the Display choice
	cout << endl;
        cout << "The current contents of the the S are: " << endl;
	S.displayAll();  // this is needed
	break;
	
      case 3:  // The pop choice
	S.pop(erased);		     
	cout << erased << " has been removed" << endl;
	if (!S.isEmpty())
	  { 
	    cout << "The new elements in the stack are: ";
	    S.displayAll();
	    cout << endl; 
	  }
	else cout << "The stack is empty." << endl;
	break;
	
	
      case  4:  // the top element case to be completed
        break;
	
      case 5:   // the check-empty case
	if (S.isEmpty())
	  cout << "Stack is empty right now." << endl;
	else
	  cout << "Stack has some elements." << endl;
	break;
	
      case 6:   // the check-full case
	if (S.isFull())
	  cout << "Stack is full right now." << endl;
	else
	  cout << "Stack has more room." << endl;
	break;
	
	
      }   // end of switch statement
      
      
    }while(selection!=0);
  
  cout << "bye bye" << endl;
  
}// end of main

