class MyCircularDeque {
public:
    int *dq;
    int front;
    int rear;
    int size;
    int capacity;
    MyCircularDeque(int k) {
        this->capacity=k;
        front=0;
        rear=0;
        size=0;
        this->dq=new int[capacity];
    }
    
    bool insertFront(int value) {
        if(isFull())return 0;
       
        front=(front-1+capacity)%capacity;
        dq[front]=value;
        size++;
        return 1;
    }
    
    bool insertLast(int value) {
        if(isFull())return 0;
        dq[rear]=value;
        rear=(rear+1)%capacity;
        size++;
        return 1;
    }
    
    bool deleteFront() {
        if(isEmpty())return 0;
        front=(front+1)%capacity;
        size--;
        return 1;
    }
    
    bool deleteLast() {
        if(isEmpty())return 0;
        rear=(rear-1+capacity)%capacity;
        size--;
        return 1;
    }
    
    int getFront() {
        if(isEmpty())return -1;
        return dq[front];
    }
    int getRear() {
        if(isEmpty())return -1;
        return dq[(rear-1+capacity)%capacity];
        
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */