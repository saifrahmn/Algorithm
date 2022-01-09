//sort algorithm
//insertion algorithm
var a =[12,8,2,1,5,4,100,54];
let l=a.length;
var num;
//first iteration
    for(var i=0;i<l;i++){
    
        if(a[i]>a[i+1]){
            num=a[i+1];
            a[i+1]=a[i];
            a[i]=num;
            
            
        }
//second iteration
        for(var j=i;j>=0;j--){
            if(a[j]>a[j+1]){
                num=a[j+1];
                a[j+1]=a[j];
                a[j]=num;
            }
        
        }
    }

for(var i=0;i<l;i++){
    document.write(a[i],"<br>");
}
