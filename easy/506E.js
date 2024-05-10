// SOLVED

/**
 * @param {number[]} score
 * @return {string[]}
 */
var findRelativeRanks = function(score) {
	let answer = score.slice()

	score.sort().reverse()

	score.forEach((value, index) => {
		console.log(answer, score)
		const xdd = answer.findIndex((aloo) => aloo === value)
		if (index == 0) {
			answer[xdd] = "Gold Medal"
		} else if (index == 1) {
			answer[xdd] = "Silver Medal"
		} else if (index == 2) {
			answer[xdd] = "Bronze Medal"
		} else {
			answer[xdd] = String(index + 1)
		}
	})
	return answer
};
