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
    tail->next = newnode;
    tail = newnode;
}

int print_linkedlist(Node* head)
{
    Node* temp = head;

    int cnt1 = 0;

    while(temp != NULL)
    {
        cnt1++;
        // cout << temp->val << " ";
        temp = temp->next;
    }
    return cnt1;

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
        insert_at_tail(head , tail, val);
        // cout << "Incerting..." << endl;
    }
    int cnt = print_linkedlist(head);

    Node* head1 = NULL;
    Node* tail1 = NULL;
    while(cin >> val)
    {
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    int cnt1 = print_linkedlist(head1);

    if(cnt == cnt1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}