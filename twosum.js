var twoSum = function (nums, target) {
    let len = nums.length;
    let n = {};
    for (let i = 0; i < len; i++) {
        if (n[target - nums[i]] !== undefined) {
            return [n[target - nums[i]], i];
        }
        n[nums[i]] = i;
    }
};
const nums=[3,3];
const target=6
console.log(twoSum(nums,target));
