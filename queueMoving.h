#ifndef QUEUE_MOVING_H
#define QUEUE_MOVING_H
#include <queue>
#include <iostream>
using namespace std;

class QueueMoving {
private:
	queue<int> Queue;
public:
	QueueMoving();
	void move_to_rear();
};


#endif
