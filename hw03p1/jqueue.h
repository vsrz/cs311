#include <vector>

// Simulates a queue using a vector
// Place items in a queue, and remove them in a last in first out order

typedef int el_t;

class jqueue
{

	private:
		vector<char> el; // a character array called el
		int count; // Current Number of Elements
		int rear;  // Index of the last element in the queue
	public:
		jqueue();           // Constructor
		~jqueue(){};        // Destructor (not implemented)
		bool isEmpty();     // Is the queue empty
		void add(char);     // Add element to the queue
		void removeAll();   // Empty the queue
		void remove();      // Remove the next element
		int getSize();      // How big is the queue?
		void displayAll();  // Display the entire contents of the queue (in order)
		char getNext();     // Get the next element in the queue
};
