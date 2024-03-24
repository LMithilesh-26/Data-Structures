#include "iostream"
using namespace std;

class Node
{
        public:
                int data;
                Node *next;
        
                Node(int value)
                {
                        data = value;
                        next = NULL;
                }
};
class Stack
{
        private:
                Node *head;
                int count;
        public:
                Stack()
                {
                        head = NULL;
                        count = 0;
                }
                void push(int value)
                {
                        Node *temp = new Node(value);
                        temp->next = head;
                        head = temp;
                        ++count;
                }
                bool empty()
                {
                        if(head == NULL) return true;

                        return false;
                }
                int top()
                {
                        if(!empty()) return head->data;

                        else cout << "No Elements in the Stack.";
                        return -1;
                }
                void pop()
                {
                        if(!empty())
                        {
                                head = head->next;
                                --count;
                        }
                        else cout << "No Elements to pop()." << "\n";
                }
                int size()
                {
                        return count;
                }
};
int main()
{
        Stack St;
        cout << "Size : " << St.size() << endl;     // 0
        cout << St.top() << endl;                   // Stack is Empty
        St.pop();                                   // Stack is Empty

        St.push(10); // 10
        St.push(20); // 20 10
        St.push(30); // 30 20 10
        St.push(40); // 40 30 20 10
        St.push(50); // 50 40 30 20 10
        St.push(60); // 60 50 40 30 20 10

        cout << "Size : " << St.size() << endl; // 6

        cout << St.top() << endl;       // 60
        St.pop();                       // 50 40 30 20 10
        cout << St.top() << endl;       // 50
        St.pop();                       // 40 30 20 10
        cout << St.top() << endl;       // 40
        St.pop();                       // 30 20 10

        cout << "Size : " << St.size() << endl; // 3

        return 0;
}
