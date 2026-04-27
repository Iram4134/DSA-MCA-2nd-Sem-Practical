#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push(int value)
{
  if (top != MAX - 1)
    stack[++top] = value;
}

void peek()
{
  if (top == -1)
  {
    cout << "Stack is empty\n";
    return;
  }

  cout << "Top element: " << stack[top] << endl;
}

int main()
{
  push(5);
  push(15);
  push(25);

  peek();
}