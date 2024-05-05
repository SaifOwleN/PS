// SOLVED

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

var removeNodes = function(head) {

	// let indexb4 = 0
	let reversedHead = reverseNodes(head);
	let valb4 = reversedHead.val
	let current = reversedHead.next;
	let currentb4 = reversedHead;

	while (current != null) {
		if (valb4 > current.val) {
			console.log(valb4, current.val)
			currentb4.next = current.next
		} else {
			valb4 = current.val
			currentb4 = current
		}
		current = current.next
	}
	return reverseNodes(reversedHead)

};

const reverseNodes = (head) => {
	let current = head;
	const arr = []
	while (current != null) {
		arr.push(current.val)
		current = current.next
	}
	let xdd = head;
	while (xdd != null) {
		xdd.val = arr[arr.length - 1]
		arr.pop()
		xdd = xdd.next
	}
	return head
}
