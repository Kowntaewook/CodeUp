#include <stdio.h>
int main(){
    int age=0;

    scanf("%d", &age);

    if(age <= 10){
        printf("%d", (age*age)-(9*age)+2);
    }
    else{
        printf("%d", (7*age)+2);
    }

    return 0;
}