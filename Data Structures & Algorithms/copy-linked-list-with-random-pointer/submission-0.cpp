/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* curr = head;
        Node* navi = new Node(0);
        Node* prev = navi;

        unordered_map<Node*, Node*> mapp;

        while(curr) {
            Node* tmp = new Node(curr->val);
            prev->next = tmp;
            prev = tmp;
            mapp[curr] = tmp;
            curr = curr->next;
        }

        curr = navi->next;
        Node* currOld = head;

        while(curr) {
            curr->random = mapp[currOld->random];
            curr = curr->next;
            currOld = currOld->next;
        }

        return navi->next;
    }
};
