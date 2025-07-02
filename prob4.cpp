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
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* &head, int idx, int num)
{
    Node *newnode = new Node(num);
    Node *temp = head;
    Node *temp2 = head;

    int count = 0;

    while (temp2 != NULL)
    {
        count++;
        temp2 = temp2->next;
    }
    // cout << count << endl;

    if (count >= idx)
    {
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        
    }
    else{
        cout << "Invalid";
    }

    count = 0;
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int idx, num;
        cin >> idx >> num;

        print_linked_list(head, idx, num);
    }

    return 0;
}