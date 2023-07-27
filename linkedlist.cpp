#include <iostream>

using namespace std;


class Node{
  public:
    int data;
    Node *next;
    
    Node (int data){
        this->data=data;
        this->next= NULL;
    }
};

class LinkedList{
  Node *head;
  public:
    LinkedList(){
        this->head=NULL;
    }
    void insertAtStart(int data){
        Node *newData = new Node(data);
        newData->next=head;
        head=newData;
    }
    void insertAtEnd(int data){
        Node *newData= new Node(data);
        newData->next=NULL;
        if(head==NULL){
            head=newData;
        }
        Node *temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newData;
    }
    
    void pop(){
        if(head==NULL)
            return;
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    void pop_at_end(){
        if(head==NULL)
            return;
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void printList() {  
        Node *temp = head;  
        while (temp != nullptr) {  
            cout << temp->data << " ";  
            temp = temp->next;  
        }   
        cout << endl;  
    }  
};  
    
int main(){
    LinkedList list;  
  
// Insert some nodes at the beginning of the list  
list.insertAtStart(3);  
list.insertAtStart(2);  
list.insertAtStart(1);  
  
// Insert some nodes at the end of the list  
list.insertAtEnd(4);  
list.insertAtEnd(5);  
list.insertAtEnd(6);  
  
// Print the list  
cout << "Original list: ";  
list.printList();  
  
// Delete a node at the beginning of the list  
list.pop();  
  
// Print the List again  
cout << "List after deleting a node at the beginning: ";  
list.printList();  
  
// Delete a node at the end of the list  
list.pop_at_end();  
  
// Print the List again  
cout << "List after deleting a node at the end: ";  
list.printList();  
  
return 0;  
    
}
