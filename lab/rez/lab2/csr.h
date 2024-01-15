using namespace std;

void CSR_encrypt(char *msg)

 {  int k,ver=1;

 cout<<"key: ";cin>>k;
    char text[strlen(msg)];

    for(int i=0;i<strlen(msg);i++)
    if((msg[i]>='a' && msg[i]<='z') or (msg[i]>='A' && msg[i]<='Z')){
    	if(msg[i]>='a'){
		 if(char(msg[i]+k)<='z') text[i]=char(msg[i]+k); else text[i]=char(msg[i]+k-26); }
        else if(msg[i]>='A'){
		 if(char(msg[i]+k)<='Z') text[i]=char(msg[i]+k); else text[i]=char(msg[i]+k-26); }
 } else {
 cout<<"Invalid characters!"; ver=0;}
if(ver!=0)
    for(int i=0;i<strlen(text);i++)
	cout<<text[i];
}

 void CSR_decrypt(char *msg)

 {int k,ver=1;

 cout<<"key: ";cin>>k;
    char text[strlen(msg)];

    for(int i=0;i<strlen(msg);i++)
    if((msg[i]>='a' && msg[i]<='z') or (msg[i]>='A' && msg[i]<='Z')){
    	if(msg[i]>='A'){
		 if(char(msg[i]-k)>='A') text[i]=char(msg[i]-k); else text[i]=char(msg[i]-k+26); }
        if(msg[i]>='a'){
		 if(char(msg[i]-k)>='a') text[i]=char(msg[i]-k); else text[i]=char(msg[i]-k+26); }
 } else {
 cout<<"Invalid characters!"; ver=0;}
if(ver!=0)
    for(int i=0;i<strlen(text);i++)
	cout<<text[i];}
