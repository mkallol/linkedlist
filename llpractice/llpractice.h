#ifndef llpractice_h
#define llpractice_h

class list
{
private:
    typedef struct node
    {
        int data;
        node* next;
    } *nodeptr;

    
    nodeptr head;
    nodeptr curr;
    nodeptr temp;
    
    
public:
    list();
    void push(int add_data);
    void deleteNode (int delete_data);
    void display();
};

#endif
