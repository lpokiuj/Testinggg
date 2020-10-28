#include <stdio.h>

void sum(){

}

void min(){

}

void kali(){

}

void bagi(){

}

int main(){
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);
    
    switch(ch){
    case '+':
        sum(a,b)
        break;
    case '-':
        min(a,b)
        break;
    case '*':
        kali(a,b)
        break;
    case '/':
        bagi(a,b)
        break;    
    default:
        break;
    }

    return 0;
}