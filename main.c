#include <stdio.h>
#include <stdlib.h>
//2. 구조체에 대한 동적 할당 

struct Book {
       int number;
       char title[10];
       }; 
int main(int argc, char *argv[])
{
  struct Book *p;
  
  p = (struct Book*)malloc(2*sizeof(struct Book));
  
  if (p == NULL){
        printf("메모리 할당 오류\n");
        return;
        }
   
  p -> number = 1;
  strcpy(p->title, "C Programming");
  
  (p+1)->number = 2;
  strcpy((p+1)->title, "Electronics");
  
  free(p); 
      
  system("PAUSE");
  return;	
}
