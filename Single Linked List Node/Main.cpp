class Node
{
public:
    int Value;
    Node *Next;
    Node(int Value)
    {
        this->Value = Value;
        this->Next = NULL;
    }
};
