#include <stdio.h>
int main(){
    long long decimalNum;
    int binaryArray[64];
    int index=0;
    int countOnes=0;
    printf("Enter a decimal number:");
    if(scanf("%lld", &decimalNum) != 1) {
        printf("invalid input\n");
        return 0;
    }
    if(decimalNum<0) {
        printf("invalid input\n");
        return 0;
    }
    if(decimalNum==0) {
        printf("Binary representation: 0\n");
        printf("invalid input\n");
        return 0;
    }
    while(decimalNum>0){
        binaryArray[index] = decimalNum % 2;
        if(binaryArray[index] == 1){
            countOnes++;
        }
        decimalNum = decimalNum / 2;
        index++;
    }
    printf("Binary representation: ");
    for(int i = index - 1; i >= 0; i--){
        printf("%d", binaryArray[i]);
    }
    printf("\n");
    if(countOnes>0){
        printf("Count of 1's: %d\n", countOnes);
    } else {
        printf("invalid input\n");
    }
    return 0;
}
