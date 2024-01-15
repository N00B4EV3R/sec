//#ifndef CSR_H
//#define CSR_H
//
//extern const char letters[];
//extern const char alfabet2[];
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
	
void CSK_keygen(char *key) {
    char aux[strlen(key) + strlen(alfabet2)+1];
    strcpy(aux, key);
    strcat(aux, alfabet2);
    int n = strlen(aux);
    int k = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < k; j++) {
            if (aux[i] == aux[j]) {
                break;
            }
        }
        if (j == k) {
            aux[k++] = aux[i];
        }
    }
    aux[k] = '\0';
    strcpy(key, aux);
}

void CSK_encrypt(char *msg) {
    char key[52];
    char enc[strlen(msg)];
    cout << "Insert key: ";
    cin >> key;
    CSK_keygen(key);
    cout<<key<<endl;

    for (int i = 0; i < strlen(msg); i++) {
        bool gasit = false;
        for (int j = 0; j<strlen(alfabet2); j++)
            if (msg[i] == alfabet2[j]) {
                enc[i] = key[j];
                gasit=true;
                break;
            }
       if (!gasit){}
    }
    cout<<enc;
}


void CSK_decrypt(char *msg){
	char key[52];
	char enc[strlen(msg)];
	cout<<"Insert key: ";cin>>key;
	CSK_keygen(key);
	for(int i=0;i<strlen(msg);i++){
	bool gasit = false;
	 for(int j=0;j<strlen(key);j++)
	 	if(msg[i]==key[j]) {
		 enc[i]=alfabet2[j];
		 gasit=true;
		 break;}
		 if(!gasit){}
		 }	 	
	cout<<enc;
}
//#endif


