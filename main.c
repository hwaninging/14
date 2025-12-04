#include <stdio.h>
#include <stdlib.h>
//3. 구조체에 대한 동적 할당 
//이중 구조의 자료형을 동적 할당으로 만들어보자 
struct Book {
       int number;
       char title[10];
       }; 
int main(int argc, char *argv[])
{
  int i; 
  struct Book **bookshelf; 
  
  //3개의 Book 구조체 포인터 변수 동적 할당 
  bookshelf = (struct Book**)malloc(3*sizeof(struct Book*)); //책장에 1,2,3층 완성 
  //10개의 Book 구조체 변수 동적 할당 
  for(i=0;i<3;i++)
     bookshelf[i] = (struct Book*)malloc(10*sizeof(struct Book)); 
   
  bookshelf[1][3].number = 5; //3층 중 1층, 3번째 책에 넘버랑 타이틀 적어  
  strcpy(bookshelf[1][3].title, "C++ Programming");
  
  (bookshelf[2]+4)->number = 3;
  strcpy((bookshelf[2]+4)->title, "Communications Theory"); 
  
  printf("book(1,3) : %i, %s\n", (bookshelf[1]+3)->number, (bookshelf[1]+3)->title);
  printf("book(2,4) : %i, %s\n", bookshelf[2][4].number, bookshelf[2][4].title); 

  //2차원 구조체 메모리 반납 (사용했으니까) : 역순으로 free 시키면 됨. 
  for(i=0;i<3;i++)
     free(bookshelf[i]);
  free(bookshelf);
      
  system("PAUSE");
  return;	
}
