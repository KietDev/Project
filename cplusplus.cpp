#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *pNext;
};
struct List {
    Node *pHead;
    Node *pTail;
};
void Init(List &l) {
    l.pHead=NULL;
    l.pTail=NULL;
}
Node *getNode(int value) {
    Node *p=new Node;
    if(p==NULL) return NULL;
    p->data=value;
    p->pNext = NULL;
    return p;
}
void add(List &l, Node *p) {
    if(l.pHead=NULL) {
        l.pHead=l.pTail=p;
    } else {
        l.pTail->pNext=p;
        l.pTail=p;
    }
}

int main() {
    List l;
    Init(l);
    int n, value;
    for(int i=0;i<n;i++) {
        cin>>value;
        Node *p=getNode(value);
        add(l, p);
    }
    return 0;
}