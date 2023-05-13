int main() {
    printf("Program with If- Else - If  statements");
   int number;

    printf("\nEnter Your Desired Number: ");
    scanf("%d", &number);

    if(number > 45 ){
        printf("\nYou have entered number greater than 45");
    }

    else if(number < 45 ){
        printf("\nYou have entered number less than 45");
    } else{
        printf("\nNumber is equals to 45");
    }

    return 0;
}
