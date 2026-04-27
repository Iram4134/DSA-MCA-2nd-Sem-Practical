#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

// Create list
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

// Display
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

// Delete beginning
void deleteBeginning()
{
  if (head == NULL)
  {
    cout << "List is empty\n";
    return;
  }

  Node *temp = head;
  head = head->next;
  delete temp;
}

int main()
{
  create();
  cout << "Before deletion: ";
  display();

  deleteBeginning();

  cout << "After deletion: ";
  display();

  return 0;
}