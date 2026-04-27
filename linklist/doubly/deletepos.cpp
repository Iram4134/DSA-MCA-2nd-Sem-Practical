#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *prev;
  Node *next;
};

Node *head = NULL;

void create()
{
  int n, value;
  cout << "Enter number of nodes: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL)
      head = newNode;
    else
    {
      Node *temp = head;
      while (temp->next != NULL)
        temp = temp->next;

      temp->next = newNode;
      newNode->prev = temp;
    }
  }
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

void deletePosition()
{
  int pos;
  cout << "Enter position: ";
  cin >> pos;

  if (head == NULL)
    return;

  Node *temp = head;

  if (pos == 1)
  {
    head = head->next;
    if (head != NULL)
      head->prev = NULL;
    delete temp;
    return;
  }

  for (int i = 1; i < pos; i++)
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

  if (temp->next != NULL)
    temp->next->prev = temp->prev;

  if (temp->prev != NULL)
    temp->prev->next = temp->next;

  delete temp;
}

int main()
{
  create();
  display();

  deletePosition();

  cout << "After deletion:\n";
  display();
}