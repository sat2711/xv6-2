#include"types.h"
#include"user.h"
int main(int argc, char *argv[]){
    int ch=65;
    int i,j,k,m, n=atoi(argv[1]);
    for(i=1;i<=5;i++)
    {
        for(j=n;j>=i;j--)
            printf(1, " ");
        for(k=1;k<=i;k++)
            printf(1, "%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf(1, "%c",--ch);
        printf(1, "\n");
        ch=65;
    }
    exit();
}

