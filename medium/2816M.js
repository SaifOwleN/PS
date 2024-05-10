/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var doubleIt = function(head) {
	let curr = head;
	const stack = [];
	while (curr != null) {
		stack.push(curr);
		curr = curr.next;
	}

	let xdd = 0;
	let carry = 0;
	while (stack.length > 0) {
		xdd = stack.pop()
		xdd = xdd * 2;
		carry += Math.floor(xdd / 10);


	}



	return curr;
}
