#include<stdio.h>

int main(){
    int BCA,Math,Network,English,C;
    float total;
    printf("Enter the BCA mark: ");
    scanf("%d",&BCA);

    printf("Enter the Math mark: ");
    scanf("%d",&Math);

    printf("Enter the Network mark: ");
    scanf("%d",&Network);

    printf("Enter the English mark: ");
    scanf("%d",&English);

    printf("Enter the C mark: ");
    scanf("%d",&C);
    total = (BCA+English+Math+C+Network)/5;
    printf("%d",total);

    if ((total<40) || BCA<33 || Math<33 || Network<33 || English<33 || C<33){
        printf("The total percentage is : %f and he is fail\n",total);
    }
    else{
        printf("The total percentage is : %f and he is pass\n",total);
    }
    return 0;
}