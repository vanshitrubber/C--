#include <iostream>
using namespace std;

struct node {
  int data;
  struct node *next;
};

struct node *head = NULL;

void printList() {
  struct node *p = head;
  cout << "\n[";
  while (p != NULL) {
    cout << " " << p->data << " ";
    p = p->next;
  }
  cout << "]";
}

void insertatbegin(int data) {
  struct node *lk = (struct node *)malloc(sizeof(struct node));
  lk->data = data;
  lk->next = head;
  head = lk;
}

int main() {
  insertatbegin(12);
  insertatbegin(22);
  insertatbegin(30);
  insertatbegin(44);
  insertatbegin(50);
  cout << "Linked List: ";
  printList();
}
