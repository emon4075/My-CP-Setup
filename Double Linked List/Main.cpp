class Node
{
public:
    int Value;
    Node *Next;
    Node *Previous;
    Node(int Value)
    {
        this->Value = Value;
        this->Next = NULL;
        this->Previous = NULL;
    }
};
