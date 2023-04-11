#include <stdio.h>

float bill = 0;
int store_brain(int product_number){
    char buy;
    switch (product_number)
    {
    case 1:
        printf("1.Sprite\nPrice:-1$\n(b) for buy\n:-");
        scanf(" %c",&buy);
        if(buy == 'b'){
            printf("\nHere is your Sprite, enjoy!!\n");
            bill = bill + 1;
            break;
        }else{
            printf("worng keyword\n");
        }
        
    case 2:
        printf("1.CokaCola\nPrice:-2$\n(b) for buy\n:-");
        scanf(" %c",&buy);
        if(buy == 'b'){
            printf("\nHere is your CokaCola, enjoy!!\n");
            bill = bill + 2;
            break;
        }else{
            printf("worng keyword\n");
        }
    case 3:
        printf("1.Fanta\nPrice:-0.5$\n(b) for buy\n:-");
        scanf(" %c",&buy);
        if(buy == 'b'){
            printf("\nHere is your Fanta, enjoy!!\n");
            bill = bill + 0.5;
            break;
        }else{
            printf("worng keyword\n");
        }
    case 0:
        break;
    default:
        printf("\nitem is not in the vending macine\n");
    }
}
void interface(){
    int x =1 ;
    int item_number;
    char pay;
    while (x){
        printf("\nselect your Drink:-\n1.Sprite\n2.CokaCola\n3.Fanta\n0.checkout\n=");
        scanf("%d",&item_number);
        store_brain(item_number);
        if(item_number == 0){
            printf("\nyour Bill is %f\npress (p) for Pay\n:-",bill);
            scanf(" %c",&pay);
            if(pay == 'p'){
                printf("\nhave a nice day\n");
                break;
            }
        }
    }
}

// main funtion
int main(){
    interface();
    return 0;
}