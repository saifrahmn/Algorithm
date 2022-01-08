//sort algorithm
//bubble sort
var a =[12,8,2,1,5,4];
var num;
for(var j=0;j<6;j++){
    for(var i=0;i<6;i++){
    
        if(a[i]>a[i+1]){
            num=a[i+1];
            a[i+1]=a[i];
            a[i]=num;
        }
    }
}
for(var i=0;i<6;i++){
    document.write(a[i]);
}
