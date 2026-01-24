#pragma once
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* createNode(int data);
void insertAtBeginning(Node** head, int data);
void insertAtEnd(Node** head, int data);
void insertAtPosition(Node** head, int data, int position);
void deleteAtBeginning(Node** head);
void deleteAtEnd(Node** head);
void deleteAtPosition(Node** head, int position);
void printListForward(Node* head);
void printListReverse(Node* head);


