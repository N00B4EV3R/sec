#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include "vars.c"
#include "csr.h"
#include "vgn.h"
#include "vgm.h"

using namespace std;


 int main(int argc, char *argv[])

 { if(argc==1){

 cout<<argv[0]<<": no option and message\n";

 exit(5);

 }

 if(argc==2)

 {if(argv[1][0]=='-'){ if(strcmp(argv[1],"-Ecsr")==0 or strcmp(argv[1],"-Decsr")==0)

 {cout<<argv[0]<<": no message\n"; exit(4);}

 else {cout<<argv[0]<<": no such option and missing message\n"; exit(3);}}

 else cout<<argv[0]<<": no option\n"; exit(2);}

 if(argc==3){

 if(strcmp(argv[1],"-Ecsr")==0)

 CSR_encrypt(argv[2]);

 else if(strcmp(argv[1],"-Decsr")==0)

 CSR_decrypt(argv[2]);

 else if (strcmp(argv[1],"-Ecsk")==0) CSK_encrypt(argv[2]);
 
 else if (strcmp(argv[1],"-Decsk")==0) CSK_decrypt(argv[2]);

 else if (strcmp(argv[1],"-Evgn")==0) VGN_encrypt(argv[2]);
 
 else if (strcmp(argv[1],"-Devgn")==0) VGN_decrypt(argv[2]);
 
 else if (strcmp(argv[1],"-Evgm")==0) VGM_encrypt(argv[2]);
 
 else if (strcmp(argv[1],"-Devgm")==0) VGM_decrypt(argv[2]);
 
 else {cout<<argv[0]<<": no such option\n"; exit(1);}}

  if(argc>3) {if(strcmp(argv[1],"-Ecsr")==0 or strcmp(argv[1],"-Decsr")==0 or strcmp(argv[1],"-Ecsk")==0 or strcmp(argv[1],"-Decsk")==0) {cout<<argv[0]<<": too many strings\n"; exit(6);} else {cout<<argv[0]<<": no such option and too many strings\n"; exit(7);}}


 exit(0);

 }
