//
// Created by Havoc on 8/21/2019.
//

#ifndef CLION_BINARYSEARCHTREE_H
#define CLION_BINARYSEARCHTREE_H
template<class ItemType>
        struct TreeNode {
    ItemType info;
    TreeNode* left;
    TreeNode* right;
};
enum OrderType ( PRE_ORDER, IN_ORDER, POST_ORDER);
template<class ItemType>
class TreeType {
public:
    TreeType();
    ~TreeType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void RetrieveItem(ItemType& item, bool& found);
    void InsertItem(ItemType item);
    void DeleteItem(ItemType item);
    void ResetTree(OrderType order);
    void GetNextItem(ItemType& item, OrderType order, bool& finished);
    void Print();
private:
    TreeNode<ItemType>* root;
    QueType<ItemType>preQue;
    QueType<ItemType>inQue;
    QUeType<ItemType>postQue;
};


#endif //CLION_BINARYSEARCHTREE_H
