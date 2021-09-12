/*
 * @lc app=leetcode id=1 lang=javascript
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

// O(n) solution
var twoSum = function (nums, target) {
	let index1, index2, otherValue;
	for (let i = 0; i < nums.length; i++) {
		otherValue = target - nums[i];
		index2 = nums.indexOf(otherValue);
		if (index2 !== -1 && index2 !== i) {
			index1 = i;
			return [index1, index2];
		}
	}
};

/*
O(n*n) solution
var twoSum = function (nums, target) {
	let index1, index2;
	for (let i = 0; i < nums.length; i++) {
		for (let j = i + 1; j < nums.length; j++) {
			if (nums[i] + nums[j] === target) {
				index1 = i;
				index2 = j;
			}
		}
	}
	return [index1, index2];
}; */

console.log(twoSum([3, 3], 6));
// @lc code=end
