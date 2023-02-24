#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess,nguesses;
    srand(time(0));
    num = rand()%100 +1; // Generates a random number between 1 and 100

    
    for(nguesses = 1;guess!=num;nguesses++){
        printf("Guess the number between between 1 to 100\n");
        scanf("%d", &guess);
        if (guess==0 && guess >100){
            printf("invalid number\n");
        }

        else if(guess>num){
            printf("Lower number please!\n");
        } 
        
        else if(guess<num){
            printf("Higher number please!\n");
        }
        else{
            printf("You guess it in %d attempts\n",nguesses);
            
        }
    }
    return 0;
}