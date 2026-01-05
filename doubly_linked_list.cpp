#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    
    DoublyLinkedList(){
        head = nullptr;
    }

    void printLinkedList(){
        Node* temp = head;

        while(temp!= nullptr){
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    void addNode(int data){
        Node* newNode = new Node(data);

        if(head == nullptr){
            head = newNode;
        }else{
            Node* temp = head;

            while(temp->next != nullptr){
                temp = temp ->next;
            }
            temp->next = newNode;
            newNode->prev = temp;

        }
    }

    void deleteNode(int data){
        NOde* temp = head;

        if(temp!= nullptr && temp->data == data){
            head= temp ->next;
            if(head != nullptr){
                head->prev = nullptr;
            }
            head->prev = nullptr;
            
        }else{

            while(temp != nullptr && temp->data != data){
                temp = temp->next;
            }
            if(temp == temp->next){
                cout<<"Aranan deger listede bulunamadi."<<endl;
            }else{
                temp->prev->next = temp->next;

                if(temp->next != nullptr){
                    temp ->next->prev = temp->prev;
                }
            }
        }
        delete temp;
    }
};

int main(){

}