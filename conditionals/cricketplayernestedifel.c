#include<stdio.h>
int main()
{
  int num;
  char name;
  printf("ENTER PLAYER NUMBER :");
  scanf("%d",& num);
  printf("ENTER PLAYER NAME FIRST LETTER :");
  scanf(" %c",& name);
  if(num==7){
    if(name=='D'){
        printf("M.S. DHONI");
    }
    else{
        printf("OLD PLAYER");
    }

  }
else{
    if(num>7)
    {
        printf("NEW PLAYER ");
    }
    else{
        printf("PLAYER");
    }
}
    return 0;
}