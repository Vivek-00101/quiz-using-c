#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main() { 
  char quest [8][100];
  char optionl [3][20],option2 [3][20], 
  option3 [3][20],option4 [3][20], 
  option5 [3][20],
  option6 [3][20],option7 [3][20];  
  int response[8], correct_ans[8], option,i, marks;  
//  clrscr();  

  strcpy(quest[0], "Who invented C language?");  
  strcpy (optionl[0],"1.  Dennis Ritchie");  
  strcpy(optionl[1] ,"2.  James Gosling");  
  strcpy(optionl[2] ,"3.  Ada Lovelace ");  
  correct_ans[0] = 0;  

  strcpy(quest[1], "C is which type of language?");  
  strcpy(option2[0],"1. FunctionOriented");  
  strcpy(option2[1], "2. ObjectOriented");  
  strcpy(option2[2], "3. Both 2 & 3");  
  correct_ans[1]=0;  
  
  strcpy(quest[2], "Does C language has access modifiers?");  
  strcpy(option3 [0],"1. Yes");  
  strcpy(option3[1] ,"2. No");  
  strcpy(option3 [2],"3. Maybe");  
  correct_ans[2]=1;  
  
  strcpy(quest[3], "Does C Language Supports exception handling?");  
  strcpy(option4 [0],"l.  Yes");  
  strcpy(option4[1] ,"2.  No");  
  strcpy(option4[2] ,"3.  Maybe");  
  correct_ans[3] = 1;  

  strcpy(quest[4], "What does C language uses?");  
  strcpy(option5[0],"l.  Compiler");  
  strcpy(option5[1],"2.  Interpreter");  
  strcpy(option5[2],"3.  Both 1 and 2");  
  correct_ans[4] = 0; 

  strcpy(quest[5], "Can we use classes in C language?");  
  strcpy(option6[0],"l. yes");  
  strcpy(option6[1],"2. no ");  
  strcpy(option6[2],"3. May be");  
  correct_ans[5] = 1; 

  strcpy(quest[6], "What is /0 character?");  
  strcpy(option7[0],"l. NULL Character");  
  strcpy(option7[1],"2. START Character ");  
  strcpy(option7[2],"3. None ");  
  correct_ans[6] = 0; 

  strcpy(quest[7], "An exception is __");  
  strcpy(option8[0],"1. Runtime error");  
  strcpy(option8[1],"2. Compile time error");  
  strcpy(option8[2],"3. Logical error");  
  correct_ans[7] = 0; 

  strcpy(quest[8], "#include<stdio.h> is");  
  strcpy(option9[0],"1. preprocessor directive");  
  strcpy(option9[1],"2. while");  
  strcpy(option9[2],"3. do-while");  
  correct_ans[8] = 0; 
  
 strcpy(quest[9], "Why we use getch?");  
  strcpy(option4 [0],"l.  To hold the output screen for sometime");  
  strcpy(option4[1] ,"2.  Not use");  
  strcpy(option4[2] ,"3.  Maybe used ");  
  correct_ans[9] = 0; 
  do {
    printf("\n*************************\n\n");    
    printf(" >>>>> QUIZ PROGRAM <<<<<\n"); 
    printf("\n*************************");  
    printf("\n 1. Display Questions");  
    printf("\n 2. Display Correct Answers");  
    printf("\n 3. Display Result");  
    printf("\n 4. EXIT\n\n");  
    printf ("*************************");  
    printf("\n\n\n Enter your option: ");  
    scanf("%d", &option);  
    switch(option)  {  
        case 1:    
            printf ("\n %s \n", quest [0]);   
            for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);   
            }   
            printf ("\n\n Enter your answer number: ");   
            scanf("%d", &response[0]);   

            printf ("\n %s \n", quest[1]);   
            for (i=0;i<3;i++)   {   
              printf("\n %s", option2[i]);   
            }   
            printf("\n\n Enter your answer number: ");   
            scanf("%d", &response[1]);   

            printf("\n %s \n", quest[2]);  
            for(i=0;i<3;i++)  {   
              printf("\n %s", option3[i]);  
            }   
            printf("\n\n Enter your answer number: ");   
            scanf ("%d", &response[2]);   

            printf("\n %s \n", quest[3]);  
            for (i=0;i<3;i++)  {   
              printf("\n %s", option4[i]);  
            }   
            printf("\n\n Enter your answer number: ");   
            scanf ("%d", &response[3]);   

            printf("\n %s \n", quest[4]);  
            for (i=0;i<3;i++)  {   
                printf("\n %s", option5[i]);  
            }   
            printf("\n\n Enter your answer number: ");   
            scanf ("%d", &response[4] );   

            printf("\n %s \n", quest[5]);  
            for (i=0;i<3;i++)  {   
                printf("\n %s", option6[i]);  
            }   
            printf("\n\n Enter your answer number: ");   
            scanf ("%d", &response[5] );   

            printf ("\n %s \n", quest [6]);   
            for(i=0;i<3;i++)   {   
              printf("\n %s", option7[i]);   
            }   
            printf ("\n\n Enter your answer number: ");   
            scanf("%d", &response[6]); 

            printf ("\n %s \n", quest [7]);   
            for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);   
            }  
            printf ("\n\n Enter your answer number: ");   
            scanf("%d", &response[7]); 

            printf ("\n %s \n", quest [8]);   
            for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);  
            } 
            printf ("\n\n Enter your answer number: ");   
            scanf("%d", &response[8]);
        
            printf ("\n %s \n", quest [9]);   

            for(i=0;i<3;i++)   {   

              printf("\n %s", optionl[i]);  

            } 

            printf ("\n\n Enter your answer number: ");   

            scanf("%d", &response[9 pp]);

            break;  
        case 2:   
            printf("\n\nCHECK THE CORRECT ANSWERS");   
            printf("\n ************************\n\n");   
            printf("\n%s \n%s",quest[0] ,optionl[correct_ans[0]]);   
            printf("\n\n%s \n%s",quest[1] ,option2[correct_ans[1]]);   
            printf("\n\n%s \n%s",quest[2] ,option3[correct_ans[2]]);   
            printf("\n\n%s \n%s",quest[3] ,option4[correct_ans[3]]);   
            printf("\n\n%s \n%s",quest[4] ,option5[correct_ans[4]]);   
            printf("\n\n%s \n%s",quest[5] ,option6[correct_ans[5]]);   
            printf("\n\n%s \n%s",quest[6] ,option7[correct_ans[6]]);   
            printf("\n\n%s \n%s",quest[7] ,option8[correct_ans[7]]);
            printf("\n\n%s \n%s",quest[8] ,option8[correct_ans[8]]);
            printf("\n\n%s \n%s",quest[9] ,option9[correct_ans[9]]);
            printf("\n\n");
            break;  
        case 3:   
            marks = 0;  
            for(i = 0;i <= 6;i++)  {   
              if(correct_ans[i]+1==response[i])   {   
                marks++;   
              }  
            }   
            printf ("\n Out of 8 you score %d",marks);   
            break; 
        case 4:
          printf(">>>> Exited Successfully <<<<");
          exit(0);
    }  
  }  
      while(option!=4);  
      // printf("Thank you!");
    getch();  
      return 0; 
}
