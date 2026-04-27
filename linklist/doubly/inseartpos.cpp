#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

Node *head = NULL;

void insertPosition()
{
  int value, pos;
  cout << "Enter value and position: ";
  cin >> value >> pos;

  Node *newNode = new Node();
  newNode->data = value;

  if (pos == 1)
  {
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
      head->prev = newNode;

    head = newNode;
    return;
  }

  Node *temp = head;

  for (int i = 1; i < pos - 1; i++)
  {
    if (temp == NULL)
    {
      cout << "Invalid position\n";
      return;
    }
    temp = temp->next;
  }

  if (temp == NULL)
  {
    cout << "Invalid position\n";
    return;
  }

  newNode->next = temp->next;
  newNode->prev = temp;

  if (temp->next != NULL)
    temp->next->prev = newNode;

  temp->next = newNode;
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
  insertPosition();
  insertPosition();
  display();
}