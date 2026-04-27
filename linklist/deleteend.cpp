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

// Delete end
void deleteEnd()
{
  if (head == NULL)
  {
    cout << "List is empty\n";
    return;
  }

  if (head->next == NULL)
  {
    delete head;
    head = NULL;
    return;
  }

  Node *temp = head;
  while (temp->next->next != NULL)
    temp = temp->next;

  delete temp->next;
  temp->next = NULL;
}

int main()
{
  create();
  cout << "Before deletion: ";
  display();

  deleteEnd();

  cout << "After deletion: ";
  display();

  return 0;
}