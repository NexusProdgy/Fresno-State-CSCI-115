
#include <iostream>
using namespace std;
#define MAX 10

class Stack {
    int top;

public:
    int a[MAX]; // Max size of stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into the stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

// Driver program
int main()
{
    class Stack s;
    s.push(20);
    s.push(40);
    s.push(60);
    cout << s.pop() << " Popped from the stack\n";
    //prints stack :
    cout << "Elements in the stack are : ";
    while (!s.isEmpty())
    {
        // print top number
        cout << s.peek() << " ";
        // remove top number
        s.pop();
    }
    return 0;
}
