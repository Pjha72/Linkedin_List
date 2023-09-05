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
// T.C = O(n) S.C = O(1)
Node * insertAtPosition(Node *head, int x,int position){
    Node *temp = new Node(x);
    if(position==1){
        temp->next = head;
        return temp;
    }
    Node * curr = head;
    for(int i = 0;i<position-1 && curr!=NULL;i++){
        curr = curr->next;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertAtPosition(head,10,1);
    head = insertAtPosition(head,20,2);
    head = insertAtPosition(head,30,3);
    head = insertAtPosition(head,40,4);
    return 0;
}