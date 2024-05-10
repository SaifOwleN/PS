// SOLVED

/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number[]}
 */
var kthSmallestPrimeFraction = function(arr, k) {
  let fractions = []
  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      fractions.push({ numerator: arr[i], denominator: arr[j], frac: arr[i] / arr[j] })
    }
  }
  fractions.sort((a, b) => a.frac - b.frac)
  console.log(fractions)
  return [fractions[k - 1].numerator, fractions[k - 1].denominator]
};
