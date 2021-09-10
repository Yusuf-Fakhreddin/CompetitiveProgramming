/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
	let number = "";
	for (let i = 0; i < digits.length; i++) {
		number += digits[i];
	}
	let integerNumber = BigInt(number);
	integerNumber++;
	let result = String(integerNumber)
		.split("")
		.map((num) => {
			return Number(num);
		});
	return result;
};
console.log(plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]));
