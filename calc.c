#include <stdio.h>

// void funtion for calculator brain
void main_Calc(float number_one ,float number_two,char oparations){
    if (oparations == '+'){
        printf("\nresult :%f",number_one + number_two);
    }else if(oparations == '-'){
        printf("\nresult :%f",number_one - number_two);
    }else if(oparations == '*'){
        printf("\nresult :%f",number_one * number_two);
    }else if(oparations == '/'){
        printf("\nresult :%f",number_one / number_two);
    }else{
        printf("syntex erorr");
    }
}

//main funtion
int main(){
    float num1 , num2;
    char op,dis;
    int x = 1;
    while (x){
        printf("\ninput number one : ");
        scanf("%f",&num1);
        
        printf("\ninput number two :");
        scanf("%f",&num2);

        printf("\ninput oparator (+,-,*,/): ");
        scanf(" %c",&op);

         main_Calc(num1,num2,op);

        printf("\nfor using calulator again type (y),(e) for exit ");
        scanf(" %c",&dis);
        if(dis == 'y'){
            continue;
        }else{
            break;
        }
    }
    return 0;
}