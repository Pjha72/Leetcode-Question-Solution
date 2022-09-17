struct Node{
    int key, value, cnt;
    Node* next;
    Node* pre;
    Node(int key_, int val_){
        key = key_;
        value = val_;
        cnt = 1;
    }
};

struct List{
    int size;
    Node* head;
    Node* tail;
    List(){
        head = new Node(0,0);
        tail = new Node(0,0);
        head->next = tail;
        tail->pre = head;
        size = 0;
    }

    void addnode(Node *node){
        Node *temp = head->next;
        node->next = temp;
        node->pre = head;
        head->next = node;
        temp->pre = node;
        size++;
    }

    void deletenode(Node *delnode){
        Node* delprev = delnode->pre;
        Node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->pre = delprev;
        size--;
    }
};

class LFUCache {
    map<int, Node*>keynode;
    map<int, List*> freqlistMap;
    int MaxSizeCache;
    int minFreq;
    int curSize;
public:
    LFUCache(int capacity) {
      MaxSizeCache = capacity;
      minFreq = 0;
      curSize = 0;  
    }
    void updateFreqListMap(Node *node){
            keynode.erase(node->key);
            freqlistMap[node->cnt]->deletenode(node);
            if(node->cnt == minFreq && freqlistMap[node->cnt]->size == 0){
                minFreq++;
            }
            List* nextHigherFreqList = new List();
            if(freqlistMap.find(node->cnt+1) != freqlistMap.end()){
                nextHigherFreqList = freqlistMap[node->cnt + 1];
            }
            node->cnt += 1;
            nextHigherFreqList->addnode(node);
            freqlistMap[node->cnt] = nextHigherFreqList;
            keynode[node->key] = node;
        }

    int get(int key) {
        if(keynode.find(key) != keynode.end()){
            Node* resnode = keynode[key];
            int res = resnode->value;
            updateFreqListMap(resnode);
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(MaxSizeCache == 0){
            return;
        }
        if(keynode.find(key) != keynode.end()){
            Node* existnode = keynode[key];
            existnode->value = value;
            updateFreqListMap(existnode);
        }
        else{
            if(curSize == MaxSizeCache){
                List* list = freqlistMap[minFreq];
                keynode.erase(list->tail->pre->key);
                freqlistMap[minFreq]->deletenode(list->tail->pre);
                curSize--;
            }
            curSize++;
            //new value has to be added who is not there previously
            minFreq = 1;
            List* listfreq = new List();
            if(freqlistMap.find(minFreq) != freqlistMap.end()){
                listfreq = freqlistMap[minFreq];
            }
            Node *node = new Node(key, value);
            listfreq->addnode(node);
            keynode[key] = node;
            freqlistMap[minFreq] = listfreq;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */