#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lines=0;
    scanf("%d",&lines);

    int num1[lines],num2[lines];

    for(int i=0;i<lines;i++){
        scanf("%d %d",&num1[i],&num2[i]);
    }
    int steps1[lines],steps2[lines];

    for(int i=0;i<lines;i++){
    steps1[i]=0;
        while(num1[i]!=1){
            if (num1[i]%2==0)
            {
                num1[i]=num1[i]/2;
                steps1[i]++;
            }
            else
            {
                num1[i]=(num1[i]*3)+1;
                steps1[i]++;
            }
        }
    }

    for(int i=0;i<lines;i++){
    steps2[i]=0;
        while(num2[i]!=1){
            if (num2[i]%2==0)
            {
                num2[i]=num2[i]/2;
                steps2[i]++;
            }
            else
            {
                num2[i]=(num2[i]*3)+1;
                steps2[i]++;
            }
        }
    }

    for(int i=0;i<lines;i++){
            if(steps1[i]<steps2[i])
            {
                printf("Kapila\n");
            }
            else if(steps1[i]>steps2[i])
            {
                printf("Kalpa\n");
            }
            else
            {
                printf("-");
            }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
