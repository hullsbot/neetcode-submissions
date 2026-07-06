class ListNode{
    public:
    int val;
    ListNode* next;

ListNode(int val) :
val(val),next(NULL){}

ListNode(int val, ListNode* next) : val(val), next(next) {}
};
class LinkedList {
private:
ListNode* head;
ListNode* tail;
public:
    LinkedList() {
        head = new ListNode(-1);
        tail = head;
    }

    int get(int index) {
        ListNode* temp = head->next;
        int i=0;
        while(temp!=NULL){
            if(i==index){
                return temp->val;
            }
            i++;
            temp=temp->next;
        }
        return -1;
    }

    void insertHead(int val) {
        ListNode* NewNode = new ListNode(val);
        NewNode->next = head->next;
        head->next = NewNode;
        if (NewNode->next == NULL) {
            tail = NewNode;
        }
    }
    
    void insertTail(int val) {
        tail->next = new ListNode(val);
        tail=tail->next;
    }

    bool remove(int index) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        int i=0;
        while(curr!=NULL){
            if(i==index){
                if (curr == tail) {
                    tail = prev;
                }
                prev->next=curr->next;
                delete curr;
                return true;
            }
            i++;
            prev = curr;
            curr=curr->next;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> arr;
        ListNode* curr = head->next;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        return arr;
    }
};
