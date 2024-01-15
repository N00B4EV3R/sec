//#ifndef VGN_H
//#define VGN_H


//extern const char alfabet3[];
using namespace std;
void function(int &a, int &b, int i, char *key, char *msg){
	int index= i%strlen(key);
	for(int k=0;k<strlen(alfabet3);k++)
	{
		if(alfabet3[k]==key[index]) a=k;
			if(alfabet3[k]==msg[i]) b=k;	
	}
	
}

void VGN_encrypt(char *msg){
	char key[52];
	char enc[strlen(msg)];
	cout<<"Insert key: ";cin>>key;
	for(int i=0;i<strlen(msg);i++){
		int a,b;
//		int l = strlen(alfabet3);
//		int index = i%strlen(key);
//		for(int k=0;k<l;k++){
//			if(alfabet3[k]==key[index]) a=k;
//			if(alfabet3[k]==msg[i]) b=k;}
		function(a,b,i,key,msg);
		enc[i]=alfabet3[(a+b)%strlen(alfabet3)];
	}
	cout<<enc;
}
void VGN_decrypt(char *msg){
char key[52];
char enc[strlen(msg)];
cout<<"Insert key: ";cin>>key;
int a,b;
for(int i=0;i<strlen(msg);i++){
	int a,b;
	int l = strlen(alfabet3);
	function(a,b,i,key,msg);
	enc[i]=alfabet3[(b-a+strlen(alfabet3))%strlen(alfabet3)];
}
	cout<<enc;
}



// lab5
//void VGM_encrypt(char *msg){
//char key[52];
//char enc[strlen(msg)];
//cout<<"Insert key: ";cin>>key;
//int timp = static_cast<int>(time(NULL));
//for(int i=0;i<strlen(msg);i++){
//	int a,b;
//	int l = strlen(letters);
//	int index = i%strlen(key);
//	for(int k=0;k<l;k++){
//		if(letters[k]==key[index]) a=k;
//		if(letters[k]==msg[i]) b=k;}
//		
//	
//	
//	enc[i]=letters[(a+b+timp)%strlen(letters)];
//}
//cout<<"enc: "<<enc;
//cout<<"tms: "<<timp;
//
//}
//
//void VGM_decrypt(char *msg){
//	cout<<"Not working rn!";
//}



//#endif
