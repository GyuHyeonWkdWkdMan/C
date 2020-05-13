#include<stdio.h>
#include <stdlib.h>
#include "linearqueue.h"





int main()
{
	queue *sample;

	init_queue(&sample);
	queue_print(&sample);
	enque(&sample, 1);
	queue_print(&sample);
	enque(&sample, 2);
	queue_print(&sample);
	enque(&sample, 3);
	queue_print(&sample);
	enque(&sample, 4);
	queue_print(&sample);
	enque(&sample, 5);
	queue_print(&sample);
	deque(&sample);
	queue_print(&sample);
	deque(&sample);
	queue_print(&sample);
	deque(&sample);
	queue_print(&sample);
	free(sample);
}