#include<stdio.h>
 int main(){
 	char str[100]="rgrr@fe123";
	 int countCharacter =0;
	 int countCharacterNumber=0;
	 int countCharacterSpecial=0; 
	 int size =strlen (str);
	 for (int i=0; i<size;i++){
	 	if(str[i]>='a' && str[i]<='z' || str[i]>='A'&& str[i]<='Z'){
	 		countCharacter++;
		 } else if(str[i]>='0'  && str[i]<='9') {
		 	countCharacterNumber++;
		 }else{
		 	countCharacterSpecial++;
		 }
	 }
	 printf("so ki tu la chu trong chuoi la: %d\n",countCharacter); 
	 printf("so ki tu la chu so trong chuoi la: %d\n",countCharacterNumber); 
	 printf("so ki tu dac biet co trong chuoi la: %d\n",countCharacterSpecial); 
  	return 0; 
 } 
