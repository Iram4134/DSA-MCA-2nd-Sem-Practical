#include <iostream>
using namespace std;

int main() {
    int queue[100], front = 0, rear, n;

    cout << "Enter number of elements: ";
    cin >> n;

    rear = n - 1;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> queue[i];
    }

    // Display
    if(front > rear) {
        cout << "Queue is empty";
    } else {
        cout << "Queue elements:\n";
        for(int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }

    return 0;
}