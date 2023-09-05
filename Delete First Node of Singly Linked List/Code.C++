#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
// T.C = O(1) S.C = O(1)
Node * deleteFirstNode(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head = deleteFirstNode(head);
    return 0;
}