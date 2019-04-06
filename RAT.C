#include<stdio.h>
#include<conio.h>
void main(){
int a[9][10]={{0,0,0,0,0,0,0,0,0,0},{9,1,8,2,1,7,2,1,6,2},{9,1,8,3,1,7,3,1,6,3},{9,1,8,4,1,7,4,1,6,4},{9,1,8,5,1,7,5,1,6,5},{9,1,8,6,1,7,6,1,6,6},{9,1,8,7,1,7,7,1,6,7},{9,1,8,8,1,7,8,1,6,8},{0,0,0,0,0,0,0,0,0,0}};
int i,j,k,l1,l2,m=0,i1,j1;
int b[9][10];
clrscr();
printf("\nenter the location : \n");
scanf("%d",&l1);
scanf("%d",&l2);
printf("\n\n");
for (i=0;i<=8;i++){
for (j=0;j<=9;j++){
printf(" %d",a[i][j]);
}
printf("\n");
}
printf("\nTHE PRODUCT IS LOCATED AT : \n");
for(k=0;k<=5;k++){
if(k%2!=0){
k=k+m;
printf("%d : ",k);
for(i1=0;i1<=8;i1++){
if(a[i1][k]==1){printf(" x");}
if(a[i1][k]==0){printf(" 0");}
if(a[i1][k+1]==l1&&a[i1][k+2]==l2){printf(" f");
}
}
printf("\n");
m=m+1;
}
}

getch();

}