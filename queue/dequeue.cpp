#include <iostream>
using namespace std;

int main() {
    int queue[100], front = 0, rear, n;

    cout << "Enter number of elements: ";
    cin >> n;

    rear = n - 1;   // IMPORTANT FIX

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> queue[i];
    }

    // Dequeue
    if(front > rear) {
        cout << "Queue Underflow";
    } else {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }

    // Display
    cout << "Queue after deletion:\n";
    for(int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    return 0;
}