#include <iostream>
#include "Queue.cpp"
using namespace std;

int main() {

	Queue<int> q;
	int choice = 0 , n;
	do {
		cout << " 1- Enqueue \n 2- Dequeue \n 3- Clear \n 4- Get first \n 5- Print \n 6- Exit " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter the number you want to enqueue: \t \t (enter -1 to stop)" << endl;
			do{
				cin >> n;
				if (n == -1)
					break;
				q.enqueue(n);
			} while (true);
			cout << "Is enqueued!" << endl;
			break;
		case 2:
			q.dequeue();
			cout << "Is dequeued!" << endl;
			break;	
		case 3:
			q.clear();
			cout << "Is cleared!" << endl;
			break;
		case 4:
			cout << "The first is " << q.getFirst() << endl;
			break;
		case 5:
			q.print();
			break;
		case 6:
			cout << "Is leaving.....!" << endl;
			break;
		default:
			cout << " You entered invalid input! \n Please enter valid input: " << endl;
			break;
		}

	} while (choice!=6);


	return 0;
}