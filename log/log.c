#include <stdio.h>

void log(char message[])
{
  time_t rawtime;
  struct tm *info;
  char timestamp[80];

  time(&rawtime);
  info = localtime(&rawtime);
  strftime(timestamp, 80, "%Y-%m-%d %H:%M:%S", info);

  printf("[%s] %s\n", timestamp, message);
}

