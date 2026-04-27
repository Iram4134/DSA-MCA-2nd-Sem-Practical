#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void push()
{
  int value;
  cout << "Enter value: ";
  cin >> value;

  if (top == MAX - 1)
  {
    cout << "Stack Overflow\n";
    return;
  }

  top++;
  stack[top] = value;
  cout << "Pushed successfully\n";
}

void display()
{
  for (int i = top; i >= 0; i--)
    cout << stack[i] << endl;
}

int main()
{
  push();
  push();
  display();
}