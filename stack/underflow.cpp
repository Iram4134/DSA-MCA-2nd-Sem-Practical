#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX];
int top = -1;

void checkUnderflow()
{
  if (top == -1)
    cout << "Stack Underflow\n";
  else
    cout << "Stack has elements\n";
}

int main()
{
  checkUnderflow();
}