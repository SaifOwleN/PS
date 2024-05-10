// SOLVED

/**
 * @param {Function[]} fun
 * @return {Function}
 */
var compose = function(funs) {
	return (x) => {
		funs.reverse().forEach((fun) => { x = fun(x) })
		return x
	}
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
