//sort algorithm
//selection sort
var a =[0,5,4,1,9,6];
var min;
var i,num;
let len=a.length;
for(let j=0;j<len;j++){
    min=a[j];
    for( i=j;i<len;i++){
        
        if(min>a[i]){
            num=min;
            min=a[i];
            a[i]=num;
            
        }
        
        
    }     
    a[j]=min;
 
            
        
}
for(i=0;i<len;i++){
        document.write(a[i]);
}
