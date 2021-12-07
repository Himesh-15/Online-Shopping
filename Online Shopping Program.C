#include<stdio.h>
#include<stdlib.h>

void Purchase(int count1, int count2, int count3, int count4, int count5);
void Cart(int count1, int count2, int count3, int count4, int count5);
void Remove(int count1, int count2, int count3, int count4, int count5);
void Bill(int count1, int count2, int count3, int count4, int count5);

void Option2(int count1, int count2, int count3, int count4, int count5);
void Option3(int count1, int count2, int count3, int count4, int count5);

int main()
{
    int count1, count2, count3, count4, count5;
    int choice1;
    count1=0;
    count2=0;
    count3=0;
    count4=0;
    count5=0;
    printf("\n\t\t\tWELCOME TO OUR ONLINE SHOPPING SITE");
    printf("\n\nWhat would you like to do?");
    printf("\n\n1. Purchase Products\t2. View your cart");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice1);
    switch(choice1) {
    case 1:
        {
            Purchase(count1, count2, count3, count4, count5);
        }
        break;
    case 2:
        {
            Cart(0,0,0,0,0);
        }
        break;
    default:
        printf("Invalid Choice!!");
    }
    return 0;
}

void Option2(int count1, int count2, int count3, int count4, int count5)
{
    int choice5;
    printf("\n\n-----------------------------------------------------------------------------");
    printf("\n\nPress 1 to Add an Item to Your Cart");
    printf("\nPress 2 to Remove an Item from Your Cart");
    printf("\nPress 3 to proceed to the Payment Gateway");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice5);
    switch(choice5) {
    case 1:
        Purchase(count1, count2, count3, count4, count5);
    break;
    case 2:
        Remove(count1, count2, count3, count4, count5);
    break;
    case 3:
        Bill(count1, count2, count3, count4, count5);
    break;
    default:
        {
         printf("ALERT:");
         printf("Invalid Choice!!");
         Option2(count1, count2, count3, count4, count5);
        }
    }
}

void Option3(int count1, int count2, int count3, int count4, int count5)
{
    int choice7;
    printf("\n\n-----------------------------------------------------------------------------");
    printf("\n\nPress 1 to Add an Item to Your Cart");
    printf("\nPress 2 to Remove an Item from Your Cart");
    printf("\nPress 3 to Checkout to Cart");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice7);
    switch(choice7) {
    case 1:
        Purchase(count1, count2, count3, count4, count5);
    break;
    case 2:
        Remove(count1, count2, count3, count4, count5);
    break;
    case 3:
        Cart(count1, count2, count3, count4, count5);
    break;
    default:
        {
         printf("\nALERT:");
         printf("\nInvalid Choice!!");
         Option3(count1, count2, count3, count4, count5);
        }
    }
}

void Purchase(int count1, int count2, int count3, int count4, int count5)
{
    int choice2, choice3, num1;
    printf("\nWhat would you like to purchase?");
    printf("\n\nSr. No. \t Item  \t\t Rate\n");
    printf("\n  1.     \t Table        \t 2000.00 Rs");
    printf("\n  2.     \t Bag          \t 500.00 Rs");
    printf("\n  3.     \t T-Shirt      \t 400.00 Rs");
    printf("\n  4.     \t Water-Bottle \t 800.00 Rs");
    printf("\n  5.     \t Jeans        \t 1000.00 Rs");
    printf("\nEnter your Choice: ");
    fflush(stdin);
    scanf("%d",&choice2);
    if(choice2>=1 && choice2<=5) {
    printf("\nEnter the number of chosen Items you want to add to your Cart: ");
    scanf("%d",&num1);
    if(num1>0)
    {
        if(choice2==1)
            {
             printf("\n%d Table(s) Successfully Added to your Cart!",num1);
             count1+=num1;
            }
        if(choice2==2)
            {
             printf("\n%d Bag(s) Successfully Added to your Cart!",num1);
             count2+=num1;
            }
        if(choice2==3)
            {
             printf("\n%d T-Shirt(s) Successfully Added to your Cart!",num1);
             count3+=num1;
            }
        if(choice2==4)
            {
             printf("\n%d Water-Bottle(s) Successfully Added to your Cart!",num1);
             count4+=num1;
            }
        if(choice2==5)
            {
             printf("\n%d Jeans Successfully Added to your Cart!",num1);
             count5+=num1;
            }
    }
    else if(num1<0){
        printf("\nALERT:");
        printf("\nQuantity cannot be negative\nPlease Enter a Valid Number");
    }
    else if(num1==0) {
        printf("\nALERT:");
        printf("\nCannot Add 0 Items");
        printf("\nYour Cart remains Unchanged");
    }
    }
         else
            {
             printf("\nALERT:");
             printf("\nInvalid Choice!!");
            }
    Option3(count1, count2, count3, count4, count5);
}

void Cart(int count1, int count2, int count3, int count4, int count5)
{
    int choice4, choice5;
    float total;
    if(count1==0 && count2==0 && count3==0 && count4==0 && count5==0) {
        printf("\nALERT:");
        printf("\nYour Cart is EMPTY!!");
        printf("\n\nPress 1 to make a Purchase");
        printf("\nPress 2 to EXIT");
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice4);
        switch(choice4) {
        case 1:
            Purchase(count1, count2, count3, count4, count5);
        break;
        case 2:
         exit(0);
        }
    }
    if(count1 !=0 || count2 != 0 || count3 != 0 || count4 != 0 || count5 != 0) {
        printf("\nYOUR CART:");
        printf("\n\nItem Name \tQuantity      \tRate  \t\t\tAmount");
        if(count1 !=0) {
            printf("\nTable     \t   %d \t\t2000.00 Rs\t\t%.2f  Rs",count1,2000.00*count1);
        }
        if(count2 !=0) {
            printf("\nBag       \t   %d \t\t 500.00 Rs\t\t%.2f  Rs",count2,500.00*count2);
        }
        if(count3 !=0) {
            printf("\nT-Shirt   \t   %d \t\t 400.00 Rs\t\t%.2f  Rs",count3,400.00*count3);
        }
        if(count4 !=0) {
            printf("\nWater-Bottle\t   %d \t\t 800.00 Rs\t\t%.2f  Rs",count4,800.00*count4);
        }
        if(count5 !=0) {
            printf("\nJeans     \t   %d \t\t1000.00 Rs\t\t%.2f  Rs",count5,1000.00*count5);
        }
    }
    total=(2000.00*count1)+(500.00*count2)+(400.00*count3)+(800.00*count4)+(1000.00*count5);
    printf("\n\nTotal Billing Amount : %.2f Rs",total);
    Option2(count1, count2, count3, count4, count5);
}

void Remove(int count1, int count2, int count3, int count4, int count5)
{
    int choice6, choice7, num2;
    printf("\nWhat would you like to remove from your Cart?");
    printf("\n1. Table\t2. Bag\t\t3. T-Shirt\t4. Water-Bottle\t\t5. Jeans");
    printf("\nEnter your Choice: ");
    fflush(stdin);
    scanf("%d",&choice6);
    if(choice6>=1 && choice6<=5) {
    printf("\nEnter the number of chosen Items you want to remove from your Cart: ");
    scanf("%d",&num2);
    if(num2>0) {
        if(choice6==1)
            {
             if(num2>count1) {
                printf("\nALERT:");
                printf("\nThere aren't enough Table(s) in your Cart!");
                printf("\nCannot Remove Items!");
             }
             else if(num2==count1) {
                printf("\nThe item Table is Successfully removed from your Cart!");
                count1=0;
             }
             else {
                printf("\n%d Table(s) Successfully Removed from your Cart!",num2);
                count1-=num2;
             }
            }
        if(choice6==2)
            {
             if(num2>count2) {
                printf("\nALERT:");
                printf("\nThere aren't enough Bag(s) in your Cart!");
                printf("\nCannot Remove Items!");
             }
             else if(num2==count2) {
                printf("\nThe item Bag is Successfully removed from your Cart!");
                count2=0;
             }
             else {
                printf("\n%d Bag(s) Successfully Removed from your Cart!",num2);
                count2-=num2;
             }
            }
        if(choice6==3)
            {
             if(num2>count3) {
                printf("\nALERT:");
                printf("\nThere aren't enough T-Shirt(s) in your Cart!");
                printf("\nCannot Remove Items!");
             }
             else if(num2==count3) {
                printf("\nThe item T-Shirt is Successfully removed from your Cart!");
                count3=0;
             }
             else {
                printf("\n%d T-Shirt(s) Successfully Removed from your Cart!",num2);
                count3-=num2;
             }
            }
        if(choice6==4)
            {
             if(num2>count4) {
                printf("\nALERT:");
                printf("\nThere aren't enough Water-Bottle(s) in your Cart!");
                printf("\nCannot Remove Items!");
             }
             else if(num2==count4) {
                printf("\nThe item Water-Bottle is Successfully removed from your Cart!");
                count4=0;
             }
             else {
                printf("\n%d Water-Bottle(s) Successfully Removed from your Cart!",num2);
                count4-=num2;
             }
            }
        if(choice6==5)
            {
             if(num2>count5) {
                printf("\nALERT:");
                printf("\nThere aren't enough Jeans in your Cart!");
                printf("\nCannot Remove Items!");
             }
             else if(num2==count5) {
                printf("\nThe item Jeans is Successfully removed from your Cart!");
                count5=0;
             }
             else {
                printf("\n%d Jeans Successfully Removed from your Cart!",num2);
                count5-=num2;
             }
            }
    }
    else if(num2==0) {
        printf("\nALERT:");
        printf("\nCannot Remove 0 Items from Cart");
        printf("\nYour Cart Remains Unchanged");
    }
    else if(num2<0) {
        printf("\nALERT:");
        printf("\nQuantity cannot be negative");
        printf("\nPlease Enter a Valid Number");

    }
    }
        else
        {
         printf("\nALERT:");
         printf("\nInvalid Choice!!");
        }
    Option3(count1, count2, count3, count4, count5);
}

void Bill(int count1, int count2, int count3, int count4, int count5)
{
    int no;
    float total1, tax, total2;
    no=1;
    printf("\n\n-----------------------------------------------------------------------------");
    printf("\n\n\tPAYMENT SUCCESSFUL!!");
    printf("\n\nThank you for Shopping with us!\nHere's your Tax-Invoice of the Payment-");
    printf("\n\n-----------------------------------------------------------------------------");
    printf("\n\t\t\tTAX INVOICE");
    printf("\n\nSr. No.\t Item Name \tQuantity \tRate  \t\t\tAmount");
        if(count1 !=0) {
            printf("\n%d   \t Table     \t   %d \t\t2000.00 Rs\t\t%.2f  Rs",no,count1,2000.00*count1);
            no++;
        }
        if(count2 !=0) {
            printf("\n%d   \t Bag       \t   %d \t\t 500.00 Rs\t\t%.2f  Rs",no,count2,500.00*count2);
            no++;
        }
        if(count3 !=0) {
            printf("\n%d   \t T-Shirt   \t   %d \t\t 400.00 Rs\t\t%.2f  Rs",no,count3,400.00*count3);
            no++;
        }
        if(count4 !=0) {
            printf("\n%d \t Water-Bottle\t   %d \t\t 800.00 Rs\t\t%.2f  Rs",no,count4,800.00*count4);
            no++;
        }
        if(count5 !=0) {
            printf("\n%d  \t Jeans     \t   %d \t\t1000.00 Rs\t\t%.2f  Rs",no,count5,1000.00*count5);
            no++;
        }
        total1=(2000.00*count1)+(500.00*count2)+(400.00*count3)+(800.00*count4)+(1000.00*count5);
        tax=0.025*total1;
        total2=(2*tax)+total1;
        printf("\n\n\t\t\t\t\t\t\t\t--------------");
        printf("\n\n\t\t\t\tBilling Amount\t\t\t%.2f Rs",total1);
        printf("\n\t\t\t\tCGST(@2.5%)  \t\t\t%.2f Rs",tax);
        printf("\n\t\t\t\tSGST(@2.5%)  \t\t\t%.2f Rs",tax);
        printf("\n\n\t\t\t\t\t\t\t\t--------------");
        printf("\n\n\t\t\t\tTotal Amount Paid\t\t%.2f Rs",total2);
        printf("\n\n\t\t\t\t\t\t\t\t--------------");
        printf("\n\n\n\n\t\t\tHAPPY SHOPPING!!");
        printf("\n\n-----------------------------------------------------------------------------");
}
