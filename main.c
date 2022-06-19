#include <stdio.h>
int main() {
    int i,X[5],sum=0,average;
    
    for(i=0;i<5;i++){
        scanf("%d",&X[i]);
    }
    
    for (i=0;i<5;i++) {
        printf("%d\t",X[i]);
        sum = sum +X[i];
    };
    average=sum/5;
    printf("\nsum: %d\n",sum);
    printf("average: %d\n",average);
    
    return 0;
}
