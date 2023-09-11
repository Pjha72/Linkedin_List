#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
// Time Complexity: O(n) // twice traversal
// Method-1 : Count the node and divide by 2 and traverse till that node
void middleNode(Node *head){
    int cnt = 0;
    Node *curr;
    for(curr = head;curr!=NULL;curr=curr->next){
        cnt++;
    }
    curr = head;
    for(int i=0;i<cnt/2;
    i++){
        curr = curr->next;
    }
    cout<<curr->data;
}
// Time Complexity: O(n) // single traversal
// Method-2 : Use two pointer slow and fast. Slow pointer move by one and fast pointer move by two. When fast pointer reach at end then slow pointer reach at middle.
int MiddleElement(Node *head){
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        return head->data;
    }
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}