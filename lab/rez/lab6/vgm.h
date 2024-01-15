//#ifndef VGM_H
//#define VGM_H


//extern const char alfabet2[];
using namespace std;


// lab5

void function_lab5(int &a, int &b, int i, char *key, char *msg){
	int index= i%strlen(key);
	for(int k=0;k<strlen(alfabet2);k++)
	{
		if(alfabet2[k]==key[index]) a=k;
			if(alfabet2[k]==msg[i]) b=k;	
	}
	
}


void VGM_encrypt(char *msg){
char key[52];
char enc[strlen(msg)];
cout<<"Insert key: ";cin>>key;
int timp = static_cast<int>(time(NULL));
//int timp=1644485555;
for(int i=0;i<strlen(msg);i++){
	int a,b;
	int l = strlen(alfabet2);
	function_lab5(a,b,i,key,msg);
	enc[i]=alfabet2[(a+b+timp)%l];
}
cout<<"enc: "<<enc<<endl;
cout<<"tms: "<<timp;

}

void VGM_decrypt(char *msg){
	char key[52];
	char enc[strlen(msg)];
	cout<<"Insert key: ";cin>>key;
	int timp = static_cast<int>(time(NULL));
//	int timp = 1644485555;
	for(int i=0;i<strlen(msg);i++){
	int a,b;
	int l = strlen(alfabet2);
	function_lab5(a,b,i,key,msg);	
	enc[i]=alfabet2[(b-a-(timp%l)+l*l)%l];
}
cout<<"enc: "<<enc<<endl;
cout<<"tms: "<<timp;
}



//#endif
