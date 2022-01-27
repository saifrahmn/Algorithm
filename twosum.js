


var twoSum = function(nums, target) {
    for(var i=0;i<4;i++){
        var rem=target-nums[i];
        for(var j=0;j<4;j++){
            if(rem==nums[j]){
                return [i,j];
            }
        }
    }
};
