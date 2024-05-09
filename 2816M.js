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
	let x = "";
	let current = head
	while (current != null) {
		x += current.val;
		current = current.next
	}

	x = x * 2;
	let newCurrent = head;
	let digits = []
	while (x > 0) {
		const element = x % 10;
		digits.push(element)
		x = Math.floor(x / 10)
	}
	for (let i = 0; i < digits.length; i++) {
		newCurrent.val = digits[i];
		if (newCurrent.next == null && x[i + 1]) {
			newCurrent.next = new ListNode()
		}
		newCurrent = newCurrent.next;
	}
	return newCurrent
};
