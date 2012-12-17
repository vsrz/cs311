// Jeremy Villegas
// CS311 - Fall 07
// HW02 Program 2

// Demonstrate the behavior of a de-referenced pointer

#include <iostream>

main() {
	int *P1, *P2;
	P1 = new int(1);                       // Allocate/assign First Pointer
	std::cout<<"P1: "<<*P1<<std::endl;     // Output value we just assigned
	P2 = new int(2);                       // Allocate/assign Second pointer
	std::cout<<"P2: "<<*P2<<std::endl;     // Output value we just assigned
	delete(P2);                            // Dereference Second pointer
	P2 = P1;                               // Assign value of first pointer to second
	std::cout<<"P2: "<<*P2<<std::endl;     // Output new value of second pointer
	delete(P1);                            // Dereference first pointer
	std::cout<<"P2: "<<*P2<<std::endl;     // Output value of second pointer (garbage)
	return 0;
}
	
