
#include <stdio.h>

int main() {
    int myArray[] = {0,1,2,3};
    int myArrayLength = sizeof(myArray)/sizeof(*myArray);
    int i, j;
    for(j=i=0;i<myArrayLength;++i){
        printf("(%d,%d)", myArray[j], myArray[i]);
        if(i == myArrayLength -1){
            i = j++;//++j - 1;
            printf("\n");
        }
    }
    return 0;
}