#include <iostream>

using namespace std;

class Stack
{
    int *array;
    int top;
    int size;
 
public:
    Stack()
    {
        size = 10;
        array = new int[size];
        top = -1;
    }

    Stack(int size)
    {
        this -> size = size;
        array = new int[size];
        top = -1;
    }

    void push(int value)
    {
        if(top == size - 1)
            cout << "Stack Overflow" << endl;
        else
            array[++top] = value; 
    }

    int peek(int position)
    {
        if(top == -1) // if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
            return array[position];
    }

    int pop()
    {
        if(top == -1) // if(isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
           int temp = array[top];
           array[top] = 0;
            --top;
            return temp;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
            return true;
        else 
            return false;
    }

    
    
    
    //////////////// Advnace features /////////////////
void display()
{
    int temp = top -1;
    cout << "All values in the Stack" << endl;
    while(temp > -1)
        cout << array[temp--] << " ";
        cout << endl;
}

void change (int position, int value)
    {
        array[position] = value;
        cout << "value sucessfully changed at location " << position << endl;
    }

    void traverse()
    {
        int temp = top - 1;

        if(top == -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "Top of stack is : " << array[top] << endl;

            if(temp > -1)
                cout << "Other : ";

            while(temp > -1)
                cout << array[temp--] << " ";

            cout << endl;
        }
    }
};

int main()
{
    Stack stack(5);

    for(int i = 0; i < 6; i++)
    {
        stack.push(i);
    }

    stack.traverse();

    for(int i = 0; i < 6; i++)
    {
        stack.pop();
    }

    return 0;
}

/* Output

    Stack Overflow
    Top of stack is : 4
    Other : 3 2 1 0
    Stack Underflow

*/
