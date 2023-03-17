#include<iostream>
using namespace std;
string intToRoman(int num){
    string ans;
    int len,x=num,d,i=0,m=0;
    while(x){
        x = x/10;
        len++;
    }
    for(int j=0;i<len-1;j++){
        int add;
        if(d/10==0){
            if(d%5==0){
                switch(m){
                    case 0:
                        ans.at(i)="V";
                    case 1:
                        ans.at(i)="L";
                    case 2:
                        ans.at(i)="D";
                }
            }
            else if(d==4){
                switch(m){
                    case 0:
                        ans.at(i)="IV";
                    case 1:
                        ans.at(i)="XL";
                    case 2:
                        ans.at(i)="CD";
                }
            }
            else{
                switch(m){
                    case 0:
                        ans.at(i)="I";
                    case 1:
                        ans.at(i)="X";
                    case 2:
                        ans.at(i)="C";
                    case 3:
                        ans.at(i)="M";
                }
            }
            i++;
            m=0;
        }
        d = d/10;
        m++;
        
    }
    
    return ans;
}
int main(){
    int num;
    cin >> num;
    cout << intToRoman(num);
}