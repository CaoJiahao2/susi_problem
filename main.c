#include <stdio.h>
#include "string.h"

int main() {
    int count=0;
    char s[20],buf[99];
    scanf("%s",s);
    for (int abc = 111; abc < 1000; abc++) {
        for (int de = 11; de < 100; de++) {
            int x=abc*(de%10),y=abc*(de/10),z=abc*de,ok=1;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
            for(int i=0;i< strlen(buf);i++)
                if(strchr(s,buf[i])==NULL){ok=0;break;}
            if(ok){
                printf("<%d:>",++count);
                printf("\n%5d\nX%4d\n-----\n%5d\n%4d \n-----\n%5d\n",abc,de,x,y,z);
            }
        }
    }
    printf("the number of solution is %d",count);
    return 0;
}
