#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    // bool visited;
    Node(int x){
        data = x;
        next = NULL;
        // visited = false;
    }
};
// Naive Solution : T.C = O(N) S.C = O(N)
bool detectLoop(Node *head){
    if(head==NULL || head->next==NULL) return false;
        Node* curr = head;
        while(curr!=NULL && curr->next!=NULL){
            Node* temp = curr->next;
            Node* prev = head;
            while(prev!=NULL && prev->next!=NULL){
                if(prev == temp){
                    return true;
                }
                prev = prev->next;
            }
            curr = curr->next;
        }
        return false;
}

// Efficient Solution : T.C = O(N) S.C = O(1)
// This approach is mark as visited if we visited first time then return back and check if lastnode of next address is same as starting of the node or not if yes then mark as visited false;

// Method-3 : without Modification of Linkedlist structure : changes reference/Pointer of the linkedlist
// S-1 : Create a dummy Node
// S-2 : Traverse The Linkedlist and point the curr->nextto dummy node
// S-3 : After pointing the dummy node , check the curr->next is pointing to dummy node or not if yes then return true else false
//T.C = O(N) S.C = O(1)
bool detectLoop(Node *head){
    Node* curr = head;
    Node *dummy = new Node(-1);
    while(curr!=NULL){
        if(curr->next == NULL){
            return false;
        }
        if(curr->next == dummy){
            return true;
        }
        Node *currNext = curr->next;
        curr->next = dummy;
        curr = currNext;
    }
    return false;
}

// Method-4 : Using Hashing : T.C = O(N) S.C = O(N)
// T.C = O(N) S.C = O(N)
bool Loop(Node *head){
    unordered_set<Node *>s;
    Node *curr = head;
    while(curr!=NULL){
        if(s.find(curr) != s.end()){
            return true;
        }
        s.insert(curr);
        curr = curr->next;
    }
    return false;
}