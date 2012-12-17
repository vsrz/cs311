#include <vector>
#include <iostream>
using namespace std;
#include "jqueue.h"

/**************************************************/
// Stack Implementation file (Yoshii)
// By Jeremy Villegas

// Implementation of jqueue.h
/**************************************************/

// constructor
jqueue::jqueue() {
	count=0; 
	rear=-1;   // rear is -1 to begin with
}

// Is the queue empty? 
bool jqueue::isEmpty() {
	return (el.size()==0);   // Is size == 0?
}

// Add element "ch" to the queue
void jqueue::add(char ch) {
	el.insert(el.begin(), ch);
}

// Remove the next element in the queue
void jqueue::remove() {
	if (el.size()==0) return;
	for(int x=0;x<el.size()-1;x++)
		el[x]=el[x+1];
	el.erase(el.begin()+(int)el.size()-1);
}

// Resets the queue completely
void jqueue::removeAll() {
	while (el.size()!=0) 
		remove();
}

// Returns the size of the queue
int jqueue::getSize() {
	return el.size(); 
}

// Displays the entire queue (in order)
void jqueue::displayAll() {
	if (el.size()==0) {
		cout << "[empty]" << endl;
		return;
	} 
	else {
		cout << "[";
		int x=0;
		for(int x=0;x<(int)el.size();x++)
			cout << " " << el[x];
		cout << " ]" << endl;
	}
}

// Return the next element in the queue
char jqueue::getNext() {
	if (el.size()==0) return ' '; 
	return el[1];
}
