#include <stdio.h>
#include <stdlib.h>

int main()
{

        int numb1;
        int numb2;

    printf("Enter a number : \n");
    scanf("%d", &numb1);
    printf("Enter a number : \n");
    scanf("%d", &numb2);

    if(numb1>10 || numb2>10){
        printf("Hey it's greater than 10!\n");
    }

    else if(numb1 >=numb2){
        printf("%d is greater than %d \n", numb1, numb2);
    }
    else{
        printf("%d is not greater than %d \n", numb1, numb2);
    }

    square(numb1);
    thrice(numb2);



    return 0;
}

    int square(numb1){

    int numb3 = numb1 * numb1;
    printf("%d \n", numb3);

    return numb3;
}
    int thrice(numb2){

    int numb4 = numb2 * 3;
    printf("%d \n", numb4);

    return numb4;
}

