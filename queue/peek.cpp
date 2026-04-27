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

    // Peek (sirf dekhna, delete nahi)
    if(front > rear) {
        cout << "Queue is empty";
    } else {
        cout << "Front element (Peek): " << queue[front];
    }

    return 0;
}