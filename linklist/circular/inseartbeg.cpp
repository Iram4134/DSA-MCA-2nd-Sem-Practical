#include <iostream>
using namespace std;

struct Node
{
  int data;
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
  insertBeginning();
  insertBeginning();
  display();
}