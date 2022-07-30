/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int i=0;
		ListNode* current = head; 
		ListNode* prev = current;

		if(head->next==NULL)
			return NULL;

		while(head != nullptr)
        {
			++i;
			head = head->next;
		}
		
        if(i-n==0)
        {
			return current->next;
		}
		for(int a=1;a<=i;a++)
        {
			if(a==i-n)
				current->next=current->next->next;
			else
				current=current->next;
		}

		return prev;
    }
    
    
};