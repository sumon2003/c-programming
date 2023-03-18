 #include<stdio.h>
    int main()
    {
       double salary,valu,TOTAL;
      char name;
      scanf("%s %lf %lf",&name,&salary,&valu);                               
      TOTAL = salary+valu*.15;
      printf("TOTAL = R$ %.3lf",TOTAL);
      return 0; 
    }