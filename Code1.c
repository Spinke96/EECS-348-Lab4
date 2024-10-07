#include <stdio.h>

void printing(int TD_counter, int FG_counter, int s_counter, int TD2_counter, int TD1_counter){
    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",TD2_counter,TD1_counter,TD_counter,FG_counter,s_counter);

}

void rec(int score,int TD_counter, int FG_counter, int s_counter, int TD2_counter, int TD1_counter){
    if(score == 0){
        printing(TD_counter,FG_counter, s_counter, TD2_counter, TD1_counter);
    }
    if(score - 8 >= 0){
        rec(score-8,TD_counter,FG_counter,s_counter,TD2_counter+1,TD1_counter);
    }
    if(score - 7 >= 0){
        rec(score-7,TD_counter,FG_counter,s_counter,TD2_counter,TD1_counter+1);
    }
    if(score - 6 >= 0){
        rec(score-6,TD_counter+1,FG_counter,s_counter,TD2_counter,TD1_counter);
    }
    if(score - 3 >= 0){
        rec(score-3,TD_counter,FG_counter+1,s_counter,TD2_counter,TD1_counter);
    }
    if(score - 2 >= 0){
        rec(score-2,TD_counter,FG_counter,s_counter+1,TD2_counter,TD1_counter);
    }

}

void football_score(int score){
    rec(score, 0,0,0,0,0);
}

int main() {
    int score;
    printf("Enter the points scored: \n");
    scanf("%d", &score);
    football_score(score);
}