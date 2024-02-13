#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main(){
const int MIN = 1;
const int MAX = 100;
int guess;
int guesses;
int answer;

srand(time(0));

answer = (rand() % MAX) + MIN;

do{
printf("enter a guess ");
scanf("%d", &guess);
if(guess > answer){
    printf("too high\n ");
}
else if (guess < answer){
    printf("guess is too low\n ");
}
else{
printf("good job you got it!\n ");
}
guesses++;
}while(guess != answer);
 
printf("answer: %d\n", answer);
printf("guesses: %d\n", guesses);
return 0;
}






