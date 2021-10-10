#include <stdio.h>
#include <cs50.h>

int main(void){



int n=get_int("Height : ");
while(n<1||n>8){
    n=get_int("Height : ");
}


for(int i=1;i<=n;i++){
    
    // f is the number of spaces per line 
    //u can notice according to n the num of spaces per line is represent by the 
    //equation n-i  which n is the num of heigth and i is the num of line
    int f=n-i;
    
    
    
    while(f>0){
        printf(" ");
        --f;
    }
    
    
    int r=i;
    int rr=i;
    
 while(r>0){
    printf("#");
    --r;
    }
    
    printf("  ");
    
 while(rr>0){
        printf("#");
        --rr;
    }
    printf("\n");
}


}

