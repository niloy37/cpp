class FullQueue{};
class EmptyQueue{};

template<class ItemType>
class QueType{
public:
	QueType();
	QueType(int max);
	~QueType();
	void makeEmpty();
	bool isFull();
	bool isEmpty();
	void Enqueue(ItemType);
	void Dequeue(ItemType&);

private:
	int front;
	int rear;
	ItemType *item;
	int maxQue;
};
