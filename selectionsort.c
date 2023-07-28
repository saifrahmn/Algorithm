#include<stdio.h>

int main(){
int a[] ={0,5,4,1,9,6};
int min;
int i,j,num;
int len=sizeof(a)/sizeof(a[0]);
for( j=0;j<len;j++){
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
        printf("%d",a[i]);
}
}
//the code contains error
