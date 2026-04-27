#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

Node *head = NULL;

void insertEnd()
{
  int value;
  cout << "Enter value: ";
  cin >> value;

  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL)
  {
    newNode->prev = NULL;
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;

  temp->next = newNode;
  newNode->prev = temp;
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
  insertEnd();
  insertEnd();
  display();
}