#include <iostream>
using namespace std;
#include "queue.h"

// Stack Implementation file (Yoshii)

// Please add good comments to this file.
// Edit to match my Notes-1

// constructor
queue::queue()
{
	front=0;
        count=0; 
        rear=-1;   // rear is -1 to begin with
}
queue::~queue()
{
}
bool queue::isFull()
{
	if (count == QUEUE_SIZE) return true;
	else return false;
}
bool queue::isEmpty()
{
	if (count == 0) return true;
	else return false;
}
//1st check to see if the queue is full. If so display error message and return.
//2nd check to see where the rear is at the end of the queue. If it's at the end of the queue then you add the element to the front of the queue and return.
void queue::add(el_t n)
{
	if (isFull())
	{
		cout << "Queue is full!" << endl;
		return;
	}
	else  
	{
	count++;
	cout << "count " << count << endl;
	rear++;
	cout << "rear " << rear << endl;
	cout << "n " << n << endl;
	el[rear]=n;
	return;
	}
}
//		if (rear < QUEUE_SIZE-2)
//		{
//			count++; rear++;
//			el[rear]=n;
//			return;
//		}
//		else 
//		{
//			count++;
//			rear=0;
//			el[rear]=n;
//			return;
//		}
//	}
//}
//1st check to see if the queue is empty. If so display error message and return.
//2nd check to see if removing the value will make the queue empty. If so reset all values for count, front, rear and return.
//3rd check to see if front is at the end of the queue. If so then make front equal to the beginning of the queue, decrease count and return.
//If all 3 checks fail, then increase front by 1 and decrease count by one and return.
//No need to remove the value at el[rear] since you just need to move the "pointer to rear" 
void queue::remove(char&)
{
	if (isEmpty())
	{
		cout << "Queue is Empty!" << endl;
		return;
	}
	else
	{
		if (count--==0)
		{
			front=0;
			rear=-1;
			count=0;
			return;
		}
		if (front == QUEUE_SIZE-1)
		{
			front=0;
			count--;	
			return;
		}
		else
		{
			front++;
			count--;	
		}
	}

}
void queue::removeAll() {
  front=0;
  rear=-1;
  count=0;
  return;
}


void queue::getFront(char&)
{
        if (isEmpty())
        {
                cout << "Queue is Empty!" << endl;
                return;
        }
	else
	{
		cout << el[front] << endl;	
	}
}
void queue::goToBack()
{
	if (isEmpty())                                                                                            
        {
                cout << "Queue is Empty!" << endl;                                                                
                return;                                                                                           
        }
	if (front == rear)
		return;
	else
	{
		 front = rear;
	}
}
int queue::getSize()
{
	cout << "The size of the queue is " << count << " elements in size." << endl;
 
}
void queue::displayAll()
{
	if (count==0)
	{
		cout << "[empty]" << endl;
		return;
	}
	else 
	{
		cout << "[";
		int x=front;
		while (x !=rear)
		{
			cout << el[x];
			//Check to ee if x is at the end of Queue if so move it to the beginning
			if (x++ == QUEUE_SIZE-1)
				x=0;
			else x++;
			
		}
		cout << el[rear] << "]" << endl;
	}
}

