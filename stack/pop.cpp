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

void pop()
{
  if (top == -1)
  {
    cout << "Stack Underflow\n";
    return;
  }

  cout << "Deleted: " << stack[top] << endl;
  top--;
}

void display()
{
  for (int i = top; i >= 0; i--)
    cout << stack[i] << endl;
}

int main()
{
  push(10);
  push(20);
  push(30);

  display();
  pop();
  display();
}