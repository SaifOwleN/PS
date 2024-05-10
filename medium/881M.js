// SOLVED

/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function (people, limit) {
	people.sort((x, y) => x - y);
	let left = 0;
	let right = people.length - 1;
	let ans = 0;

	while (left <= right) {
		if (people[left] + people[right] <= limit) {
			left++;
			right--;
		} else {
			right--;
		}
		ans++;
	}
	return ans;
};
