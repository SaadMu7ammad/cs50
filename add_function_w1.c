#include<cs50.h>
#include<stdio.h>


int add(int x,int y){
    return(x+y);
}

int main(void)
{
    
int x=get_int("x= ");
int y=get_int("y= ");

    int sum=add(x,y);
    printf("%i",sum);
    
   // printf("%i + %i = %i\n",x,y,x+y);
}
