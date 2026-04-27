#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

Node *head = NULL;

void insertBeginning()
{
  int value;
  cout << "Enter value: ";
  cin >> value;

  Node *newNode = new Node();
  newNode->data = value;
  newNode->prev = NULL;
  newNode->next = head;

  if (head != NULL)
    head->prev = newNode;

  head = newNode;
}

void display()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " <-> ";
    temp = temp->next;
  }
  cout << "NULL\n";
}

int main()
{
  insertBeginning();
  insertBeginning();
  display();
}