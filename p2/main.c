#include <stdio.h>

int main()
{
    int n;
    int a[20], b[20];
    int *p, *q;
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    
    p=a;
    q=b+(n-1);
    
    for (int i=0; i<n; i++){
        printf(" %d", *p + *q);
        p++;
        q--;
    }
   
    return 0;
}
