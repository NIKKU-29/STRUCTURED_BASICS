#include <iostream>
using namespace std;

// Node structure for linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* compromiseGroceryList(int nums[], int n) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {  // Product to buy
            ListNode* newNode = new ListNode(nums[i]);
            if (!head) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        } else {  // Return
            if (tail && tail->val == -nums[i]) {
                // If the last item in the list matches the return, remove it
                if (head == tail) {
                    delete head;
                    head = tail = nullptr;
                } else {
                    ListNode* temp = head;
                    while (temp->next != tail) {
                        temp = temp->next;
                    }
                    temp->next = nullptr;
                    delete tail;
                    tail = temp;
                }
            } else {
                // Add return as a new node
                ListNode* newNode = new ListNode(nums[i]);
                if (!head) {
                    head = tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }
    }

    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Test case 1: 1, 2, 3, -3, -2
    int nums1[] = {1, 2, 3, -3, -2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    ListNode* result1 = compromiseGroceryList(nums1, n1);
    printList(result1);  // Output: 1

    // Test case 2: 1, 2, -3, 3, 1
    int nums2[] = {1, 2, -3, 3, 1};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    ListNode* result2 = compromiseGroceryList(nums2, n2);
    printList(result2);  // Output: 3 1

    return 0;
}
