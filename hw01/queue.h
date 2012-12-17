typedef char el_t; // el_t is an alias for char
int const QUEUE_SIZE = 10; // this is the max number of elements
class queue
{

	private:
		// Data members are:
		el_t el[QUEUE_SIZE]; // a character array called el
		//char static_array[QUEUE_SIZE]; // a character array called static_array
		int count; // how many elements do we have right now?
		int front; // where the front element of the queue is.
		int rear; // where the rear element of the queue is.
		// a private utility function for fatal error cases
		// This displays an error messages passed to it and does exit(1);
		//void queueError(char*); 
	public:
		// constructor
		queue();
		//destructor
		~queue();
		// returns true if queue is empty, otherwise false
		bool isEmpty();
		// returns true if queue is full, otherwise false
		bool isFull();
		// if full, calls an emergency exit routine
		// if not full, enters an element at the rear
		void add(el_t);
		// if empty, calls an emergency exit routine
		// if not empty, removes the front element to give it back
		void removeAll();
		// if not empty, removes the front element to give it back
		// if empty, calls an emergency exit routine
		void remove(el_t&);
		// if empty, calls an emergency exit routine
		// if not empty, give back the front element (but does not remove it)
		void getFront(el_t&);
		//if queue has just 1 element, does nothing
		//if queue has more than 1 element, moves the front one to the rear
		void goToBack();
		//returns the current size to make it accessible to the client caller
		int getSize();
		//display everything in the queue from front to rear enclosed in []
		//if empty, displays [ empty ]
		void displayAll();
};
