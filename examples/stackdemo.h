
// Stack header file (Yoshii)

int const MAX = 6;   // The MAX number of elements for the stack

typedef int el_t;    // the el_t type is integer for now


class stack
  { 

   private: // to be hidden from the client

        el_t     el[MAX];    // need an array of el_t's
        int      top;        // need to access the top
	void stackError(char*); // utility function

   public: // prototypes to be used by the client

      	stack(); // constructor
      	~stack(); // destructor

        // if not full, enters an el_t at the top
        // otherwise, calls an emergency exit routine
        void push(el_t);
        // if not empty, removes and gives back the top el_t
        // otherwise, calls an emergency exit routine
        void pop(el_t&);
         // if not empty, gives the top el_t
        void topElem(el_t&);

        // ************ add good comments here *********************  
        // This is for Client Programmers as well.
      	bool isEmpty();
      	bool isFull();
        void displayAll();
        void clearIt();
        
  };  

// Note: semicolon is needed at the end of the header file

