#include <stdio.h>

int main()
{
    char x[10];
    char *p, *q;
    int maxCount = 0;
    char maxChar;
    
    for (int i=0; i<10; i++){
        scanf("%c", &x[i]);
    }
    
    for (char *p=x; p<x+10; p++){
        int count=0;
        
        for (char *q=x; q<x+10; q++){
            if (*p==*q){
                count++;
            }
        }
        
        if (count > maxCount){
            maxCount = count;
            maxChar = *p;
        }
    }
    
    printf("%c %d\n", maxChar, maxCount);
    
    return 0;
}
