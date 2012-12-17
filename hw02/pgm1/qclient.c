#include <iostream>
using namespace std;
#include "jqueue.h"

/*******************************************************
 * by Jeremy Villegas
 * CS 311 Fall 07
 * HW02 Pgm1 
 * 
 * Purpose: Re-write the queue class so that it now 
            uses a vector instead of an array.
            There is no maximum size now.
            The queue starts out having no slots and 
            it will grow as elements are added.
 *
 ******************************************************/

int main() {
	jqueue myLine; // myLine is a new queue object
	/* Add five elements to the queue */
	myLine.add('A');
	myLine.add('B');
	myLine.add('C');
	myLine.add('D');
	myLine.add('E');

	/* Remove four elements from the queue */
	myLine.remove();
	myLine.remove();
	myLine.remove();
	myLine.remove();

	/* Display queue */
	myLine.displayAll();

	/* Add three elements to the queue */
	myLine.add('F');
	myLine.add('G');
	myLine.add('H');

	/* Display queue */
	myLine.displayAll();

	return 0;
}

