#include <iostream>
using namespace std;

struct LinkedList
{
    int data;
    LinkedList *next;
};
// struct LinkedList *head;//declared globally
LinkedList *Insert(LinkedList *head, int x)
{
    LinkedList *ll = new LinkedList();
    ll->data = x;
    ll->next = head;
    head = ll;
    return head;
}

void Print(LinkedList *head)
{
    cout << "List is: ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    LinkedList *head = NULL;
    int n, num;
    cout << "Enter Number of Elements: " << endl;
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cin >> num;
        head = Insert(head, num);
        Print(head);
    }

    return 0;
}