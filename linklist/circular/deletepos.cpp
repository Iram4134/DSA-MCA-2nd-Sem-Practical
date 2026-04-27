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

  Node *temp, *last;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter value: ";
    cin >> value;

    Node *newNode = new Node();
    newNode->data = value;

    if (head == NULL)
    {
      head = newNode;
      newNode->next = head;
      last = newNode;
    }
    else
    {
      newNode->next = head;
      last->next = newNode;
      last = newNode;
    }
  }
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

void deletePosition()
{
  int pos;
  cout << "Enter position: ";
  cin >> pos;

  if (head == NULL)
    return;

  if (pos == 1)
  {
    Node *temp = head;
    Node *last = head;

    while (last->next != head)
      last = last->next;

    if (head->next == head)
    {
      delete head;
      head = NULL;
      return;
    }

    head = head->next;
    last->next = head;
    delete temp;
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

  Node *delNode = temp->next;

  if (delNode == head)
  {
    cout << "Invalid position\n";
    return;
  }

  temp->next = delNode->next;
  delete delNode;
}

int main()
{
  create();
  display();

  deletePosition();

  cout << "After deletion:\n";
  display();
}