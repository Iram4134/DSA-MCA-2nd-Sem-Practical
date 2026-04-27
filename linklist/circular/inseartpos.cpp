#include <iostream>
using namespace std;

struct Node
{
  int data;
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
    if (head == NULL)
    {
      head = newNode;
      newNode->next = head;
      return;
    }

    Node *temp = head;
    while (temp->next != head)
      temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
    return;
  }

  Node *temp = head;

  for (int i = 1; i < pos - 1; i++)
  {
    if (temp->next == head)
    {
      cout << "Invalid position\n";
      return;
    }
    temp = temp->next;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void display()
{
  if (head == NULL)
    return;

  Node *temp = head;
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);

  cout << "(head)\n";
}

int main()
{
  insertPosition();
  insertPosition();
  display();
}