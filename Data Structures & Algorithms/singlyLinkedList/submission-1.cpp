class Node {
    public:
        int value;
        Node* next;
        Node(int val): value(val), next(nullptr) {}
        Node(int val, Node* next): value(val), next(next){}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        int i = 0;
        Node* curr = head;

        while (curr != nullptr) {
            if (i == index) {
                return curr->value;
            } 
            curr = curr->next;
            i++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node* nnn = new Node(val);
        nnn->next = head;
        head = nnn;

        if (tail == nullptr) {
            tail = head;
        }
    }
    
    void insertTail(int val) {
        Node* nnn = new Node(val);
        if (head == nullptr) {
            head = nnn;
            tail = nnn;
            return;
        }
        tail->next = nnn;
        tail = nnn;
    }

    bool remove(int index) {

        if (head == nullptr || index < 0) return false;

        int i = 0;
        Node* curr = head;
        Node* prev = nullptr;

        if (index == 0) {
            Node* tmp = head;
            head = tmp->next;
            if (head==nullptr) tail = nullptr;
            delete tmp;
            return true;
        }

        while (curr != nullptr) {
            if (i == index) {
                prev->next = curr->next;
                if(curr == tail) tail = prev;
                delete curr;
                return true;
            } else {
                prev = curr;
                curr = curr->next;
                i++;
            }
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> values;
        Node* curr = head;
        while(curr != nullptr) {
            values.push_back(curr->value);
            curr = curr->next;
        }
        return values;
    }
};
