#include <iostream>

struct node
{
    int data;
    node *next;
};

node *add_to_head(node *p, int x)
{
    return new node{x, p};
}

node *double_odds(node *p)
{

    while (p)
    {
        if (p->data % 2 != 0)
        {
            p->next = new node{p->data, p->next};
            p = p->next;
            p = p->next;
        }
        p = p->next;
    }
    return p;
}

void print(node *p)
{
    while (p)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}

int main()
{
    node *list = nullptr;
    list = add_to_head(list, 2);
    list = add_to_head(list, 1);
    list = add_to_head(list, 6);
    list = add_to_head(list, 5);

    std::cout << "Original list= ";
    print(list);

    double_odds(list);

    std::cout << "Double odds= ";
    print(list);

    return 0;
}
