/*
 * @lc app=leetcode id=15 lang=javascript
 *
 * [15] 3Sum
 */

// @lc code=start
/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function (nums) {
	nums.sort((a, b) => a - b);

	let low, high, sum;

	let solution = [];
	console.log(nums);
	for (let i = 0; i < nums.length - 2; i++) {
		if (i === 0 || (i > 0 && nums[i] !== nums[i - 1])) {
			low = i + 1;
			high = nums.length - 1;
			sum = 0 - nums[i];
			while (low < high) {
				if (nums[low] + nums[high] === sum) {
					solution.push([nums[low], nums[high], nums[i]]);
					// because with the same i, the same low/high will require the same high/low which result in a duplicate triplet
					while (low < high && nums[low] === nums[low + 1]) low++;
					while (low < high && nums[high] === nums[high - 1]) high--;
					// to get the last one of the duplicates
					low++;
					high--;
				} else if (nums[low] + nums[high] > sum) high--;
				else low++;
			}
		}
	}

	return solution;
};
// @lc code=end
