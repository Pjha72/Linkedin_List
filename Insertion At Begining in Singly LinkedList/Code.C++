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
Node *insertBegining(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int main(){
    Node* head = NULL;
    head = insertBegining(head,5);
    head  = insertBegining(head,10);
    
    return 0;
}