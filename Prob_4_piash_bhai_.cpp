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

void insert_at_any(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;

    for(int i = 0; i < idx-1; i++) // Je index e insert korbo tar ager index eii code stop korbo;
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int size_liked_list(Node* head)
{
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;

}



void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val)
    {
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // print_linked_list(head);

    int idx;
    while(cin >> idx >> val) // For Operations
    {
        // cout << idx << " " << val << endl;
        int sz = size_liked_list(head);

        if(idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if(idx == sz)
        {
            insert_at_tail(head, tail, val);
        }
        else if(idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else{
            insert_at_any(head, idx, val);
        }
        print_linked_list(head);

         
    }



    return 0;
}