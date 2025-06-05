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
             top = newNode; // 4. update the top pointer to the new node
              cout << "Push value :" << value << endl;
            return value ;

        }
// isEmpty operation : check if the stack is empty
        bool isEmpty(){
            return top == NULL ; // return true if the top pointer is NULL, indicating an empty stack
        }

    void pop(){
            if (isEmpty()){
                cout << "Stack is empty :" << endl;
                return;

            }
            cout << "Popped value :" << top -> data << endl;
            top = top -> next;
        }
    

        void peek(){
            if (isEmpty ()){
                cout << "List is empty:" << endl;
                return; // if the stack is empty, print a messege and return
            }
         else
        {
                Node *current = top;
                while (current !=NULL){
                    cout << current -> data << "" << endl;
                    current = current -> next ;
                }
                cout << endl;

            }
        }
    };

    int main(){
        stack stack;     
         int choice =  0;
         int value;

     while (choice != 4){
            cout << "1. Push\n";
            cout << "2. Pop\n";
            cout << "3. Peek\n";
            cout << "4. Exit\n";
            cout << "Enter your choice:";
            cin >> choice;
     }