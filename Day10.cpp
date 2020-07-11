//problem link:- https://leetcode.com/explore/featured/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3386/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        stack<Node*>st;
        Node *curr=head;
        while(curr!=NULL){
            if(curr->child==NULL){
                if(curr->next==NULL and !st.empty()){
                    if(st.top())
                        st.top()->prev=curr;
                    curr->next=st.top();
                    st.pop();
                }
            }
            else{
                st.push(curr->next);
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=NULL;
            }
            curr=curr->next;
        }
        return head;
    }
};
