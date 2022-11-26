//Point-of-Sale System

#include<stdio.h>

void main(void) {
 int code, qty;
 float price, amt , totalAmt , cash , change;
 char addAnother;
 // do while loop ->post-test
 // while  loop   ->pre-test
 // for loop      ->pre-test

 do{
    system("cls");
 printf("================\n");
 printf("SHOP ITEMS LIST\n");
 printf("================\n\n");
 printf("[1] Maize flour\t\t KES. 200.00\n");
 printf("[2] Sugar     \t\t  KES. 150.00\n");
 printf("[3] Cooking oil\t\t KES. 400.00\n");
 printf("[4] Lentils    \t\t KES. 110.00\n");
 printf("[5] Soap       \t\t KES. 150.00\n");

 printf("\nEnter Code: ");
 scanf("%d",&code);
 printf("\nEnter Quantity: ");
 scanf("%d", &qty);

 switch(code) {
     case 1: price = 200.00;
          break;
     case 2: price = 150.00;
          break;
     case 3: price = 400.00;
          break;
     case 4: price = 110.00;
          break;
     case 5: price = 150.00;
          break;
 }
  amt = price * qty;
  printf("\nAmount\t\t: %.2f", amt);

  totalAmt= totalAmt + amt ;
  printf("\nTotal Amount\t: %.2f", totalAmt);
  printf("\nAdd another order(y/n)? ");
  addAnother =getch();
 }while(addAnother == 'y' || addAnother == 'Y');


  do {
    printf("\nCash Received\t: ");
    scanf("%f", &cash);
    }while(cash < totalAmt);


  change = cash - totalAmt;
  printf("\nChange\t\t: %2f.", change);
  printf("\n Thanks for shopping with us!");
 }

