#include <iostream>
#include <conio.h>

void SwapMembers (int items[],int indeks1, int indeks2){
int temp;
temp=items[indeks1];
items[indeks1]=items[indeks2];
items[indeks2]=temp;
}
main(){
int n,m;
int numbers[]={102,21,83,42,11,10,9,3,20,27,15,92,2};
const int size=sizeof(numbers)/sizeof(numbers[0]);
for(n=size-1;n>0;n--)
for(m=0;m<n;m++)
if(numbers[m]>numbers[m+1])
SwapMembers(numbers,m,m+1);
for(n=0;n<size;n++)
cout<<numbers[n]<<",";

getch();
}