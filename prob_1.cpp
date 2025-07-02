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

    // cout << temp->val << endl;

    // print_linked_list(temp->next);
}

void count_size(Node* head1, Node* head2)
{
    int count1 = 0;
    int count2 = 0;
    while(head1 != NULL)
    {
        head1 = head1->next;
        count1++;
    }

    while(head2 != NULL)
    {
        head2 = head2->next;
        count2++;
    }
    if(count1 == count2)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    int count1 = 0;
    while(cin >> n)
    {
        if(n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
        count1++;
    }

    // print_linked_list(head);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int m;
    int count2 = 0;

    while(cin >> m && m != -1)
    {
        insert_at_tail(head2, tail2, m);
        count2++;
    }

    count_size(head, head2);

    // if(count1 == count2)
    // {
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }




    return 0;
}