#include "Queue.h"

template<class T>
Queue<T>::Queue()
{
	first = 0;
}

template<class T>
bool Queue<T>::isEmpty()
{
	return stack1.empty();
}

template<class T>
void Queue<T>::clear()
{
	while (!stack1.empty()) {
		stack1.pop();
	}

	first = 0;
}

template<class T>
T Queue<T>::getFirst()
{
	return first;
}

template<class T>
void Queue<T>::enqueue(T item)
{
	if (stack1.empty())
		stack1.push(item);
	else{
		while (!stack1.empty()) {
			stack2.push(stack1.top());
			stack1.pop();
		}
		stack1.push(item);
		while (!stack2.empty()) {
			stack1.push(stack2.top());
			stack2.pop();
		}
	}
	first = stack1.top();
}

template<class T>
void Queue<T>::dequeue()
{
	if (stack1.empty())
		cout << "Cannot pop the queue is empty!" << endl;
	else {
		stack1.pop();
	}
	first = stack1.top();
}

template<class T>
void Queue<T>::print()
{
	if (stack1.empty())
		cout << "The queue is empty!" << endl;
	else {
		cout << "[ ";
		while (!stack1.empty()) {
			cout << stack1.top() << " ";
			stack2.push(stack1.top());
			stack1.pop();
		}
		cout << "]" << endl;
		while (!stack2.empty()) {
			stack1.push(stack2.top());
			stack2.pop();
		}
	}
}
