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

void display()
{
  if (top == -1)
  {
    cout << "Stack is empty\n";
    return;
  }

  cout << "Stack elements:\n";
  for (int i = top; i >= 0; i--)
    cout << stack[i] << endl;
}

int main()
{
  push(1);
  push(2);
  push(3);

  display();
}