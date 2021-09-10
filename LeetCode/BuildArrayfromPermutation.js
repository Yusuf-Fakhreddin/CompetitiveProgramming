/**
 * @param {number[]} nums
 * @return {number[]}
 */
var buildArray = function (nums) {
	let ans = [];
	for (let index = 0; index < nums.length; index++) {
		const element = nums[nums[index]];
		ans.push(element);
	}
	return ans;
};
