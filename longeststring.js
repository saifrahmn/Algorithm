var lengthOfLongestSubstring = function(s) {
var p=0,count=1,out=0;
let b=[];
let size=[];
for(var i=0;i<s.length;i++){
    b[i]=s[i];
    for(var j=0;j<=i;j++){
    if(b[j]==s[i+1]){
        size[p]=count;
        break;
    }

    }
     
        count++;
    p++;
}
for(var i=0;i<size.length;i++){
    if(out<size[i]){
        out=size[i];
    }

}
return out;
};
//these code is incorrect hence output wouldn't be as you wish.
