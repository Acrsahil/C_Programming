#include<stdio.h>

int main(){
    char choice;
    float quantity,total_price,price;
    printf("**Choose the food you want to eat from the menu**\n");
    printf("B = Burger rupees 150\n"
        "F = French Fries rupees 50\n"
        "C = Choumin rupees 350\n"
        "M = Momo rupees 160\n"
        "P = Pizza rupees 430\n");

        printf("Enter first letter of food you want to eat: ");
        scanf("%c",&choice);
        printf("How many plate you want to eat: ");
        scanf("%f",&quantity);

        switch (choice)
        {
        case 'B':
        price = 150;
            break;
        case 'F':
        price = 50;
            break;
        case 'C':
        price = 350;
            break;
        case 'M':
        price = 160;
            break;
        case 'P':
        price = 430;
            break;
           
        default:
        printf("Invalid input\n");
            break;
            return 1;
        }
total_price = price * quantity;
printf("Total price: Rs. %.2f\n",total_price);




         


    return 0;
}


