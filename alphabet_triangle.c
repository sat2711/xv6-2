#include"types.h"    
#include"user.h"  
int main(int argc, char *argv[]){  
    int ch=65;
    int n = atoi(argv[1]);    
    int i,j,k,m;      
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }    
return 0;  
}  
