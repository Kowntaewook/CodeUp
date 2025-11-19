#include <stdio.h>
int main(){
    char id[]={};
    char pwd[]={};

    printf("아이디를 입력하세요: ");
    scanf("%s", id);
    printf("비번을 입력하세요: ");
    scanf("%s", pwd);

    if(id == "info" && pwd == "ed"){
        printf("로그인 되었습니다");
    }

    else{
        printf("로그인에 실패했습니다");
    }
    return 0;
}