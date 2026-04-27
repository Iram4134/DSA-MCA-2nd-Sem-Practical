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

void deleteEnd()
{
  if (head == NULL)
    return;

  if (head->next == NULL)
  {
    delete head;
    head = NULL;
    return;
  }

  Node *temp = head;

  while (temp->next != NULL)
    temp = temp->next;

  temp->prev->next = NULL;
  delete temp;
}

int main()
{
  create();
  display();

  deleteEnd();

  cout << "After deletion:\n";
  display();
}