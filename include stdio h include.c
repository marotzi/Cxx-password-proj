#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main(){
  while(1){
    printf("Enter your nick\n");
    char nick[100];
    scanf("%99s", nick);
    if (nick[0] == '\0') {
        printf("Error: Nick cannot be empty.\n");
        return 1;
    }
    printf("Hello, %s!\n", nick);
    printf("Enter your password\n");
    char password[100];
    scanf("%99s", password);
    if (strlen(password) < 8) {
        printf("Error: Password must be at least 8 characters long.\n");
        return 1;
    }
    else {
      break;
    }
  }
    return 0;
    }

