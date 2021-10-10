#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    
float x=get_float("Change owed: ");

while(x<0){
x=get_float("Change owed: ");
}


x*=100;
float new_x=round(x);
int counter=0;
//printf("%f",new_x);


    while(new_x >=25){
        new_x-=25;
        ++counter;
    }
    
     while(new_x >=10){
        new_x-=10;
        ++counter;
    }
     while(new_x >=5){
        new_x-=5;
        ++counter;
    }
     while(new_x >=1){
        new_x-=1;
        ++counter;
    }
printf("%i\n",counter);
}
