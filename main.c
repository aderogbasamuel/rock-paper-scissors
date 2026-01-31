#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //seed time
    srand(time(NULL));

    //declare selection array 
    char selection[3][30]={
        "Rock\n",
        "Paper\n",
        "Scissors\n",
    };

    printf("Welcome to Rock Paper Scissors\n");

    while(1){
        int computer= (rand() % 3)+1, count, choice;// variable declration

        printf("\nChoose an option\n");
        printf("1. Rock \n2. Paper \n3. Scissors \n4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //logic
        if(choice>= 1 && choice <=3){
            printf("\nComputer chose: %s", selection[computer-1]);

            if(choice == computer){
                printf("Same try again\n");
            }
            else if((choice==1 && computer== 2) || (choice == 2 && computer ==3) || (choice == 3 && computer ==1)){
                    printf("You lost\n");
            }
            else{  
                printf("You won\n");
            }
        }
        else if(choice==4){
            printf("Exiting program...\n");
            break;
        }
        else{
            printf("Invalid Inputs\n");
        }
    }
    return 0;
}
