#include <stdio.h>
#include <cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main(int argc,string argv[]){
    int c=0;
    int key;
    int pos;
    int cyph;
    string text;

    if(argc==2){
        for(int i=0;i<strlen(argv[1]);i++){

            if(isdigit(argv[1][i]))
            c++;
            //return 1;
        }

        if(c==strlen(argv[1])){
       // printf("success ");
       key= atoi(argv[1]);
      //  printf("%i\n",key);

        text=get_string("Plaintext: ");
        printf("ciphertext: ");
        
        for(int i=0;i<strlen(text);i++){

            if(isalpha(text[i])){

                if(isupper(text[i])){
/*
    so to make its number more simple to suit the formula 
    we would make first
    
    subtract from capital letters -65
    and small litters -97
    
    
    
    then the cipher formula will be suitable to the values
*/
                    
                  pos=(int)text[i]-65;
                  
                cyph=((pos+key)%26)+65;
                printf("%c",cyph);

                }
                else if(islower(text[i])){
                    
                    pos=(int)text[i] -97;
                    
                    
                    cyph=((pos+key)%26)+97;   //+97 is to going the letter back for example Z=90
                                              // we make its ascii value start from 0 to 25 not 65 to 90 
                                              // by subtract 65 so z equal 25 then input it to the formula with key (for.ex k=1)
                                              //25+1 % 26 = 0 so 0 is for A so now the formula is right 
                                              //  after Z is A so the output(c) must be be the original ascii value 
                                              // so we add the 65 that we subtract first 
                                              // look line 58 (the formula)
                                              
                                              
                                              //that for small litters but the difference is not 65 but 97 
                    printf("%c",cyph);
                }
}

           else{


               printf("%c",text[i]);
           }



        }
printf("\n");





        }
        else{
            printf("./caesar key");
            return 1;
        }
    }


     else{
            printf("./caesar key");
           return 1;
        }






}
