#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "csr.h"

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

 else {cout<<argv[0]<<": no such option\n"; exit(1);}}

  if(argc>3) {if(strcmp(argv[1],"-Ecsr")==0 or strcmp(argv[1],"-Decsr")==0) {cout<<argv[0]<<": too many strings\n"; exit(6);} else {cout<<argv[0]<<": no such option and too many strings\n"; exit(7);}}


 exit(0);

 }
