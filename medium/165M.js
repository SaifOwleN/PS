// SOLVED

/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function (version1, version2) {
	const ver1 = version1.split(".");
	const ver2 = version2.split(".");
	let x = 0;
	let index = Math.max(ver1.length, ver2.length);

	for (let i = 0; i < index; i++) {
		const v1 = parseInt(ver1[i]);
		const v2 = parseInt(ver2[i]);
		console.log("v1", v1, "v2", v2);

		if (v1 > v2 || (isNaN(v2) && v1 != 0)) {
			x = 1;
			break;
		} else if (v1 < v2 || (isNaN(v1) && v2 != 0)) {
			x = -1;
			break;
		}
	}
	return x;
};
