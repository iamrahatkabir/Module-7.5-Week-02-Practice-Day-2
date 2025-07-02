#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    // Node* temp = head;
    // while(temp != NULL)
    // {
    //     temp - temp->next;
    // }
    // temp->next = newnode

    //Optimized way;
    tail->next = newnode;
    tail = newnode;

}

void print_linked_list(Node* head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        return;
    }

    
    print_linked_list(temp->next);
    cout << temp->val << endl;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    while(cin >> n)
    {
        if(n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }

    print_linked_list(head);



    return 0;
}