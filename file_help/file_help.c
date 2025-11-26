#include <stdio.h>

#define STRLEN 100

// read input char by char until a \n or EOF
int readln_str(char str[], int max_len)
{
  char ch;
  int i = 0;
  // 0  when done
  int remain_check = 1;
  while(remain_check)
    {
      ch = getchar();
      if((ch == '\n') || (ch == EOF))
        {
          remain_check = 0;
            str[i] = '\0';
            return 0;
        }
      else if(i < max_len -1)
        {
          str[i] = ch;
          i++;
        }
    }
  return 1;
}
  
