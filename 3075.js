// SOLVED

/**
 * @param {number[]} happiness
 * @param {number} k
 * @return {number}
 */
var maximumHappinessSum = function(happiness, k) {
	let sum = 0;
	happiness.sort((a, b) => a - b)
	for (let i = 0; i < k; i++) {
		const hap = happiness[happiness.length - 1] - i
		sum += hap > 0 ? hap : 0;
		happiness.pop()
	}
	return sum

};
