/*Using IF and Switch statement, write a program that displays the following menu for the food items available to take order from the customer:

B=Banana (Rs.200)
F=French Fries (Rs.50)
P=Pizza (Rs.500)
S=Sandwitches (Rs.150)

The customer can order any combination of available food.The program first ask to enter the no of types of snacks i.e 2,3 or 4 then it ask to enter the choice i.e. B for Burger and then for quantity. The program should finally display the total charges for the order.*/

/*type : number of item;
choice : char;
quantity : number;
cost : number*/

#include<stdio.h>
int main() {
    int type, quantity, cost = 0;
    char choice;
    printf("Enter the number of items you want to order: ");
    scanf("%d", &type);
    for (int i = 0; i < type; i++) {
        printf("Enter the choice of item: ");
        scanf(" %c", &choice);
        printf("Enter the quantity of item: ");
        scanf("%d", &quantity);
        switch (choice) {
            case 'B':
            case 'b':
                cost += 200 * quantity;
                break;
            case 'F':
            case 'f':
                cost += 50 * quantity;
                break;
            case 'P':
            case 'p':
                cost += 500 * quantity;
                break;
            case 'S':
            case 's':
                cost += 150 * quantity;
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    printf("Total cost of the order is: %d", cost);

    return 0;
}