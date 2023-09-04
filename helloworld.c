#include<stdio.h>
int main(){
int A,B,X,Y,pntsMessi,pntsRonaldo;
scanf("%d%d%d%d",&A,&B,&X,&Y);
pntsMessi=A*2+B*1;
pntsRonaldo=X*2+Y*1;
if(pntsMessi>pntsRonaldo){
  printf("Messi\n");
}
else if(pntsRonaldo>pntsMessi){
  printf("Ronaldo\n");
}
else{
  printf("Equal\n");
}

return 0;
}