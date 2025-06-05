#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        next = NULL;
    }

    };

    // stack class
    class stack{
        private:
        Node *top; // Pointer to the node og the stack

        public:
        stack(){
            top = NULL; // Intilize the stack with a null to pointer
        }
    
    // Push operation :insert an element onto the top of the stack
        int push(int value)
        {
            Node *newNode = new Node(); // 1. Allocate memory for the node
        
            newNode -> data = value; // 2. assign value
            newNode -> next = top; // 3. set the next pointer of the new node to the current
        }
    };