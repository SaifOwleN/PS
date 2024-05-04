// SOLVED

/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function (word, ch) {
	const index = word.indexOf(ch);
	const substring = word.slice(0, index + 1);
	const reversedSub = substring.split("").reverse().join("");
	return word.replace(substring, reversedSub);
};

console.log(reversePrefix("index", "d"));
