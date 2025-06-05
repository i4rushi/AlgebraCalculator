#include <stdio.h>
#include <string.h>

void findResult(double num1, char operator, double num2, double *result, int *valid);

int main(){

    char operator;
    char full[20];
    int option;
    int option2;
    int valid = 1;
    double num1;
    double num2;
    double result;
    while(1){
        printf("\nEnter an equation (no spaces): ");
        fgets(full, sizeof(full), stdin);
        sscanf(full,"%lf%c%lf", &num1, &operator, &num2);
        findResult(num1, operator, num2, &result, &valid);

        if (!valid){
            printf("%s is not a valid equation\n", full);
        }

        printf("Would you like to continue with this result? 1 for yes, 0 for no\n");
        scanf("%d", &option);
        getchar();
        
        
        while(option){

            printf("\nEnter what you want to do with the result: Ex. *5 \n");
            scanf("%c%lf", &operator, &num2);
            getchar();
            findResult(result, operator, num2, &result, &valid);
            printf("Continue? 1 for yes, 0 for no\n");
            scanf("%d", &option);
            getchar();
        }

        if(option == 0){
            
            printf("\nWould you like to solve a different equation? 1 for yes, 0 for no\n");
            scanf("%d", &option2);
            getchar();

            if(!option2){
                printf("Have a good day! Happy mathing");
                return 0;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}

void findResult(double num1, char operator, double num2, double *result, int *valid){
    switch(operator){
        case '+':
            *result = num1 + num2;
            break;
        case '-':
            *result = num1 - num2;
            break;
        case '*':
            *result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                *result = num1 / num2;
            }
            break;
        case '^':
            int i;
            *result = 1;
            for(i=0; i < num2; i++) {
                *result = *result * num1;
            }
            break;
        default:
            *valid = 0;
    }

    if (*valid) {
        printf("Result: %f\n", *result);

    }
    else{
        printf("Error");
    }
    
}
