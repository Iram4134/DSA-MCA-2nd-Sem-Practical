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

void deleteEnd()
{
  if (head == NULL)
    return;

  if (head->next == head)
  {
    delete head;
    head = NULL;
    return;
  }

  Node *temp = head;

  while (temp->next->next != head)
    temp = temp->next;

  delete temp->next;
  temp->next = head;
}

int main()
{
  create();
  display();

  deleteEnd();

  cout << "After deletion:\n";
  display();
}