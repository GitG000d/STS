/*function takes large string handed to it from main*/
void function(char *str) {
   /*create the buffer*/
   char buffer[16];
   
   /*copy large_sting to the buffer*/
   strcpy(buffer,str);
   
   /*overflow...*/
}

void main() {
  char large_string[256];
  int i;

  for( i = 0; i < 255; i++)
    large_string[i] = 'A';

  function(large_string);
}
