#include <iostream>
using namespace std;
// menue driven singly linked list 

int main() {
    struct Node {
        int data;
        struct Node* link;
    };

    struct Node *temp, *head = nullptr, *tail = nullptr,*extra;;
    int choice,target;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Push Front
            temp = new Node;
            cout << "Enter the data: ";
            cin >> temp->data;
            temp->link = head;
            head = temp;

            if (tail == nullptr) 
                tail = temp;
            break;

        case 2: 
            temp = new Node;
            cout << "Enter the data: ";
            cin >> temp->data;
            temp->link = nullptr;
            if (tail != nullptr) {
                tail->link = temp;
                tail = temp;
            } else { 
                head = tail = temp;
            }
            break;

        case 3: 
            if (head == nullptr) {
                cout << "The list is empty.\n";
            } else {
                temp = head;
                cout << "Data in the list:\n";
                while (temp != nullptr) {
                    cout << temp->data << " ";
                    temp = temp->link;
                }
                cout << endl;
            }
            break;
            case 4:
            cout<<"enter the position after you want to insert"<<endl;
            cin>>target;
            temp=new Node;
            cout<<"enter the data: "<<endl;
            cin>>temp-> data;
            extra=head;
            while(extra->data!=target&&extr!=nullptr){
                {
                    extra=extra->link;
                }
                if(extra->data==target){
                    temp->link=extra->link;
                    extra->link=temp;
                }
            }
        case 5: 
            cout << "Exiting...\n";
            return 0;

        default: 
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}