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

// Method-5 : Using floyd cycle detection algorithm
// T.C = O(n) S.C = O(1)

// Algorithm
// 1. Two pointers slow = head, fast = head
// 2. Move slow by one step and fast by two steps
bool isCyclePersent(Node *head){
    Node* slow = head;
    Node *fast = head;
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

// Note : 
// 1. fast will enter into the loop before(or at same time as slow)
// 2. let fast be k distance ahead of slow, when slow enter the loop where k>=0
// 3. The distance keeps on increasing by one in every movement of both pointer
// 4. when distance becomes length of cycles, they must on same node