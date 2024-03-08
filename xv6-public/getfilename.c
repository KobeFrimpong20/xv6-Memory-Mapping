#include "types.h"
#include "stat.h"
#include "user.h"
    
    
int main(int argc, char *argv[]) 
{
  if (argc < 2){
	printf(1, "%s", "USAGE: getfilename <filename>\n");
	exit();
  }

  int fd = open(argv[1], 'r');
  char* message = malloc(sizeof(char)*256);
  getfilename(fd, message, 256);
 
  printf(1, "%s", "XV6_TEST_OUTPUT Open filename: ");
  printf(1, "%s", message);
  printf(1, "%s", "\n"); 
  exit(); 
} 
