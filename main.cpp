#include <stdio.h>

void sum(int a, int b){

    printf("%d\n", a+b);

}

void min(int a, int b){

    printf("%d\n", a-b);

}

void kali(int a, int b){

    printf("%d\n", a*b);

}

void bagi(int a, int b){

    printf("%d\n", a/b);

}

int main(){
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);
    
    switch(ch){
    case '+':
        sum(a,b);
        break;
    case '-':
        min(a,b);
        break;
    case '*':
        kali(a,b);
        break;
    case '/':
        bagi(a,b);
        break;    
    default:
        break;
    }

    printf("lolololol\n");
    printf("Hello world\n");

    return 0;
}