/*
 * @lc app=leetcode id=7 lang=javascript
 *
 * [7] Reverse Integer
 */

// @lc code=start
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
	let string = x.toString();
	let y = 0;
	let i = 0,
		ans = "";
	if (x < 0) {
		y = 1;
		ans += "-";
	}
	for (; i < string.length - y; i++) {
		if (i === 0 && string[string.length - i - 1] === "0") continue;
		ans += string[string.length - i - 1];
	}
	if (ans > Math.pow(2, 31) - 1 || ans < Math.pow(-2, 31)) ans = 0;
	return ans || 0;
};
// @lc code=end
