#include <stdio.h>
#include <stdlib.h>
//1. 동적 메모리 활용 예제 
//포인트 변수 반드시 필요, 메모리 어케 쓸건지도 생각

//문자열 쭉 찍는 것. -> 메모리를 문자열 저장하는 것으로 쓸 것이다. 
int main(int argc, char *argv[])
{
  char*pc = NULL; //초기화는 NULL 
  int i = 0;
  
  pc = (char*)malloc(100*sizeof(char)); //할당하고 다시 사용 
  if (pc == NULL)
  {
         printf("메모리 할당 오류\n");
         exit(1);
  }
  for (i=0;i<26;i++)
  {
      pc[i] = 'a'+i; //순차적으로 문자 넣어줌. 
  }
      pc[i] = 0; //NULL 실제 문자가 0임 : 26번째에 NULL(0)이 드감 
      printf("%s\n", pc);
      free(pc); //동적 메모리 할당 해줬으니 free도 해야돼 
      
  system("PAUSE");	
}
