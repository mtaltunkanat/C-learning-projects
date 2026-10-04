#include <stdio.h>

int main(){
    int i=3;
    printf("%d\n",i);//i=i
    i+=3; 
    printf("%d\n",i);//i= i+3
    i-=5; 
    printf("%d\n",i);//i= i-5
    i*=12; 
    printf("%d\n",i);//i= i*12
    i/=3; 
    printf("%d\n",i);//i= i/3
    
    return 0 ;
}