#include <iostream>
using namespace std;

struct Node
{
  int data;
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
    newNode->next = NULL;

    if (head == NULL)
      head = newNode;
    else
    {
      Node *temp = head;
      while (temp->next != NULL)
        temp = temp->next;
      temp->next = newNode;
    }
  }
}

void display()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL\n";
}

// Delete at position
void deletePosition()
{
  int pos;
  cout << "Enter position: ";
  cin >> pos;

  if (head == NULL)
  {
    cout << "List is empty\n";
    return;
  }

  if (pos == 1)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node *temp = head;

  for (int i = 1; i < pos - 1; i++)
  {
    if (temp->next == NULL)
    {
      cout << "Invalid position\n";
      return;
    }
    temp = temp->next;
  }

  if (temp->next == NULL)
  {
    cout << "Invalid position\n";
    return;
  }

  Node *delNode = temp->next;
  temp->next = delNode->next;
  delete delNode;
}

int main()
{
  create();
  cout << "Before deletion: ";
  display();

  deletePosition();

  cout << "After deletion: ";
  display();

  return 0;
}