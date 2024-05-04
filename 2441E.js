// SOLVED

/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxK = function (nums) {
	let x = -1;
	nums.forEach((num) => {
		if (num > x && nums.includes(-1 * num)) {
			x = num;
		}
	});
	return x;
};
