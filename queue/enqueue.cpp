
#include <iostream>
using namespace std;

int main() {
    int queue[100], front = -1, rear = -1;
    int n, value;

    cout << "Enter size of queue: ";
    cin >> n;

    cout << "How many elements to insert: ";
    int m;
    cin >> m;

    for(int i = 0; i < m; i++) {
        cout << "Enter value: ";
        cin >> value;

        if(rear == n - 1) {
            cout << "Queue Overflow\n";
            break;
        }

        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
    }

    cout << "Queue elements:\n";
    for(int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    return 0;
}