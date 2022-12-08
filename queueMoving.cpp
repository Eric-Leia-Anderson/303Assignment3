#include "queueMoving.h"

/*Default conmstructor that pushes numbers on the queue. */
QueueMoving::QueueMoving() {
	Queue.push(1);
	Queue.push(2);
	Queue.push(3);
	Queue.push(4);
	Queue.push(5);
	Queue.push(6);
	Queue.push(7);
	Queue.push(8);
}

/*Function that will move the front element to the back if the queue is not empty.*/
void QueueMoving::move_to_rear()
{
	if (!Queue.empty()) {
		cout << "Front element before moving: " << Queue.front() << endl;
		int frontElement = Queue.front();
		Queue.pop();
		Queue.push(frontElement);
		cout << "Front element after moving: " << Queue.front() << endl;
	}

}