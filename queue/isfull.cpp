#include <iostream>
using namespace std;

int main() {
    int rear, n;

    cout << "Enter size of queue: ";
    cin >> n;

    cout << "Enter current rear index: ";
    cin >> rear;

    if(rear == n - 1) {
        cout << "Queue is full";
    } else {
        cout << "Queue is not full";
    }

    return 0;
}