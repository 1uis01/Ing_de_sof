#include <stdio.h>
#include "sodium.h"

int main(void){

  if (sodium_init() == -1){
      printf("\nNo se pudo inicializar la librería libsodium.");
      return 1;
  }
  
  unsigned int tama_buf = 128;
  unsigned char buffer[tama_buf];
 
  randombytes_buf(buffer, sizeof((buffer)));

  for (int i = 0; i < sizeof(buffer); i++)
    printf("%02X ", buffer[i]);
  printf("\n");
}