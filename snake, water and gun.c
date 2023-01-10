#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you,char comp){
if(you==comp){
    return 0;
}
if(you=='s' && comp=='w') {
    return 1;
}
    else if(you=='w' && comp=='s') {
        return -1;
    }
    if(you=='w' && comp=='g'){
        return 1;

    }
       else if(you=='g' && comp=='w'){
        return -1;
       }
      if(you=='g' && comp=='s'){
        return 1;}
           else if(you=='s' && comp=='g'){
        return -1;
}
}

int main() {

char you,comp;
int numb;

srand(time (0));
numb=rand()%100+1;

if(numb<33){
    comp='s';
}
else if(numb>33 && numb<66){
    comp='g';
}
else{
    comp='w';
}

printf("enter 's' for snake 'w' for water and 'g' for gun\n");
scanf("%c",&you);

int result=game(you,comp);

if(result==0){
    printf("draw\n");
}

else if(result==1){
    printf("you win\n");

}
else if(result==-1)
printf("you lose\n");

return 0;
}