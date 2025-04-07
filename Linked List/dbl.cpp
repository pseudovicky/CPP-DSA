#include <iostream>
using namespace std;


struct Node
{
    Node *previous;
    int data;
    Node *link;
};

int main()
{
    Node *temp = nullptr, *head = nullptr, *tail = nullptr;
    int choice = 1;
    cout << "Press 1 to enter data or 0 to exit: \n";

    while (choice == 1)
    {
        temp = new Node;
        cout << "Enter your data: ";
        cin >> temp->data;
        temp->previous = nullptr;
        temp->link = nullptr;

        if (head == nullptr)
        {
            tail = head = temp;
        }
        else
        {
            temp->link = head;
            head->previous = temp;
            head = temp;
        }
        cout << "Continue? (1 for yes, 0 for no): ";
        cin >> choice;
    }


    temp = head;
    cout << "Your data is: ";
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->link != nullptr)
            cout << " -> ";
        temp = temp->link;
    }


    return 0;
}