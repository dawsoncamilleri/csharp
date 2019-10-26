
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define full 6
int main(int argc,char* argv[])
{
    #if defined full
    
   // int num1 = 0;
  //  int num2 = 0;
    int ans = 0;
       // char symbol;
//printf("Enter symbol");
   // scanf("%c", &argv[0]);
    
    
  //  printf("Calculator");
  //  printf("+ - x /");
   // 
      //  printf("num1");
  //  scanf("%d", &argv[1]);
      //      printf("num2");
  //  scanf("%d", &argv[2]);


printf("ss");
   
   
        if(strcmp(argv[1], "+")==0)
{
        ans = atoi(argv[2]) + atoi(argv[3]);
            printf("%d", ans);

    }
    
    
        if(strcmp(argv[1], "-")==0){
        ans = atoi(argv[2]) - atoi(argv[3]);
    printf("%d", ans);

    }
    
    

        if(strcmp(argv[1], "x")==0){
        ans = atoi(argv[2]) * atoi(argv[3]);
    printf("%d", ans);

    }
    


        if(strcmp(argv[1], "/")==0){
        ans = atoi(argv[2]) / atoi(argv[3]);
    printf("%d", ans);

    }
    
    
    
    #else
      
    int num1 = 0;
    int num2 = 0;
    int ans = 0;
        char symbol;
printf("Enter symbol");
    scanf("%c", &symbol);
    
    
    printf("Calculator");
    printf("+");
    
        printf("num1");
    scanf("%d", &num1);
            printf("num2");
    scanf("%d", &num2);

   

   
   
    if(symbol == '+'){
        ans = num1 + num2;
            printf("%d", ans);

    }
    
            printf("demo only supports additions");

    
    #endif




    return 0;
}





