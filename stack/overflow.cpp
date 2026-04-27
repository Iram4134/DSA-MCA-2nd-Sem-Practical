#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void checkOverflow()
{
  if (top == MAX - 1)
    cout << "Stack Overflow\n";
  else
    cout << "Space available\n";
}

int main()
{
  checkOverflow();
}