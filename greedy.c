/*Changed */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int coinCount(int change);


int main(void){
    float owed;
    int change;
    do {
        printf("How much change is owed? \n");
        owed=get_float();
        change = round(owed*100);
    }while(owed<0);
    
    printf("%i\n",coinCount(change));
}

int coinCount(int change){
    int count =0;
    int n[4]={25,10,5,1};
    for (int i=0 ; change>0;i++){
        while (change>=n[i]){
            change -=n[i];
            count++;
        }
    }
    return count;
    
}