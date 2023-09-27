#include <stdio.h>

void find_roman(int year);
int main()
{
    int year;
    printf("give any year value\n");
    scanf("%d",&year);
    
    if(year<1){
        printf("invalid year!\n");
        return 0;
    }
    find_roman(year);
    
    return 0;
    
}

void find_roman(int year)
{
    
    int M=1000,D=500,C=100,L=50,X=10,V=5,I=1;
    
    printf("Roman value of year %d is ",year);
    
    while(year-M>=0){
        printf("M");
        year=year-M;
    }
    while(year-D>=0){
        printf("D");
        year=year-D;
    }
    while(year-C>=0){
        printf("C");
        year=year-C;
    }
    while(year-L>=0){
        printf("L");
        year=year-L;
    }
    while(year-X>=0){
        printf("X");
        year=year-X;
    }
    while(year-V>=0){
        printf("V");
        year=year-V;
    }
    while(year-I>=0){
        printf("I");
        year=year-I;
    }
    
}
