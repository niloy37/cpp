//
// Created by Havoc-PC on 7/30/2019.
//

#ifndef UNTITLED1_QUETYPE_H
#define UNTITLED1_QUETYPE_H
class EmptyQueue{};
class FullQueue{};
template<class ItemType>
class QueType {
    struct NodeType{
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;

};


#endif //UNTITLED1_QUETYPE_H
