#include<stdio.h>
#include<string.h>

int main()
{
  char name[10][20]={"xinhua","sunzi","laozi","mozi","kongzi","zhuang","gang","an","liao","bing"};
  char temp[20];
  int min,i1,i2;
  for(i1=0;i1<10;i1++)
  {
      min=i1;
      for(i2=i1+1;i2<10;i2++)
          if(strcmp(name[min],name[i2])>0)
            min=i2;
      if(i1!=min)
      {
          strcpy(temp,name[i1]);
          strcpy(name[i1],name[min]);
          strcpy(name[min],temp);
      }
  }
  for(i1=0;i1<10;i1++)
    puts(name[i1]);
    return 0;
}
