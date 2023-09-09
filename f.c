#include <stdio.h>

int main(){

char c = 'a';
for (int i=0; i<100; i++){
c = 'a'+i;
printf("%c\n", c);
}
return 0;
}
