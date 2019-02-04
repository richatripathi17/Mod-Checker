#include<stdio.h>
#include<string.h>
#include<conio.h>
int mod2Binary(){
	int length,i;
	char inputstring[15],state;
	printf("\n\tMod 2(Binary)\n");
	printf("Input string:-");
	scanf("%s",&inputstring);
	length=strlen(inputstring);
	state='x';
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' && state=='x'){
				state='x';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
		else if(inputstring[i]=='1' && state=='x'){
			    state='y';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='0' && state == 'y'){
				state='x';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='1' && state== 'y'){
			state='y';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else {
			state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n",state,inputstring[i]);
			break; 
		}
	}
	if(state=='x'){
		printf("\ninput string is accepted");
	}
		else if(state=='h'){
		printf("Given input string is not a binary string\n");
	}
	else {
		printf("\ninput string is not accepted");
	}
	}
int mod2Octal(){
	int length,i;
	char inputstring[20],state;
		printf("\n\tMOD 2(Octal)\n\n");
		printf("Input string :-");
	scanf("%s",&inputstring);
	length=strlen(inputstring);
	state='x';
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' || inputstring[i]=='2' || inputstring[i]=='4' || inputstring[i]=='6' ){
			if(state=='x'){
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			if(state=='y'){
				state='x';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			}
	  else if(inputstring[i]=='1' || inputstring[i]=='3' || inputstring[i]=='7'){
	  	if(state=='x'){
	  		state='y';
	  			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		  }
		  else{
		  		printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		  }
	}
	else{
		state='h';
			printf("state :- %c \t input :-%c\nHALT\n",state,inputstring[i]);
			break;
	}
}
	if(state=='x'){
		printf("\nInput string is accepted");
	}
		else if(state=='h'){
		printf("Given input string is not a Octal string\n");
	}
	else {
		printf("\nInput string is not accepted");
	}
	
}
int mod2Hexadecimal(){
		int length,i;
	char inputstring[20],state;
	printf("\n\tMOD 2(Hexadecimal)\n\n");
		printf("Input string :-");
	scanf("%s",&inputstring);
	length=strlen(inputstring);
	state='x';
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' || inputstring[i]=='2' || inputstring[i]=='4' || inputstring[i]=='6' ||  inputstring[i]=='8' ||  inputstring[i]=='A'|| inputstring[i]=='a' || inputstring[i]=='C' ||  inputstring[i]=='c'||  inputstring[i]=='E' ||  inputstring[i]=='e'){
			if(state=='x'){
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			if(state=='y'){
				state='x';
				printf("state :- %c\t input :-%c\n",state,inputstring[i]);
			}
			}
	  else if(inputstring[i]=='1' || inputstring[i]=='3' || inputstring[i]=='7' || inputstring[i]=='9' || inputstring[i]=='B' || inputstring[i]=='b' ||  inputstring[i]=='D' ||  inputstring[i]=='d' ||  inputstring[i]=='F' ||  inputstring[i]=='f' ){
	  	if(state=='x'){
	  		state='y';
	  			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		  }
		  else{
		  		printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		  }
	}
	else{
		state='h';
			printf("state :- %c \t input :-%c\nHALT\n",state,inputstring[i]);
			break;
	}
}
	if(state=='x'){
		printf("\ninput string is accepted");
	}
		else if(state=='h'){
		printf("Given input string is not a Hexadecimal string\n");
	}
	else {
		printf("\ninput string is not a accepted");
	}
}
int mod3Binary(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 3(Binary)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' && state=='x'){
			state='x';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='1' && state =='x'){
			state='y';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='0' && state == 'y'){
			state='z';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='1' && state == 'y'){
			state='x';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='0' && state == 'z'){
			state='y';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='1' && state =='z'){
			state='z';
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else{
			state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
			break;
		}
	}
	if(state=='x'){
		printf("Input string is mod 3\n");
	}
	else if(state=='h'){
		printf("Given input string is not a binary string\n");
	}
	else{
		printf("Input string is not mod 3\n");
	}
}
int mod3Octal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 3(Octal)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' || inputstring[i]=='3' || inputstring[i] == '6'){
			if(state == 'y'){
				state='z';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else if(state=='z'){
				state ='y';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else {
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
		}
		else if(inputstring[i]=='1' || inputstring[i]=='4' || inputstring[i] == '7'){
			if(state=='x'){
				state='y';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
				
			}
			else if(state=='y'){
				state='x';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else {
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
		}
		else if(inputstring[i]=='2' || inputstring[i]=='5'){
			if(state=='x'){
				state='z';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else if(state=='z'){
				state='x';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else{
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			
		}
		else{
			state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
			break;
		}
	}
	if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a octal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod3Hexadecimal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 3(Hexadecimal)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0' || inputstring[i]=='3' || inputstring[i] == '6' || inputstring[i]=='9' || inputstring[i]=='C' || inputstring[i] == 'F'|| inputstring[i]=='c' || inputstring[i]=='f'){
			printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else if(inputstring[i]=='1' || inputstring[i]=='4' || inputstring[i] == '7' || inputstring[i]=='A' || inputstring[i]=='a' || inputstring[i] == 'd' || inputstring[i]=='D'){
			if(state=='x'){
				state='y';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
				
			}
			else if(state=='y'){
				state='z';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else if(state=='z'){
				    state ='x';
					printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else {
					state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
			break;
			}
		}
		else if(inputstring[i]=='2' || inputstring[i]=='5' || inputstring[i]=='8' || inputstring[i]=='B' || inputstring[i]=='b' || inputstring[i]=='E' || inputstring[i]=='e'){
			if(state=='x'){
				state='z';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else if(state=='z'){
				state='y';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else if(state=='y'){
				state='x';
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
			}
			else{
				state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
			break;
			}
			
		}
		else{
			state = 'h';
			printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
			break;
		}
	}
	if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a hexadecimal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod4Binary(){
		int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 4(Binary)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='1'){
			if(state=='x'){
				state='y';
			}
			else if(state=='y'){
				state='y';
			}
			else if(state=='z'){
				state='y';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else{
			if(state=='x'){
				state='x';
			}
			else if(state=='y'){
				state='z';
			}
			else if(state=='z'){
				state='x';
			}
			else{
				state='h';
					printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	}
		if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a Binary string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod4Octal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 4(Octal)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='1'|| inputstring[i]=='2' || inputstring[i]=='3' || inputstring[i]=='5'|| inputstring[i]=='6' || inputstring[i]=='7'){
			if(state=='x'){
				state='y';
			}
			else if(state=='y'){
				state='y';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else{
			if(state=='x'){
				state='x';
			}
			else if(state=='y'){
				state='x';
			}
			else{
				state='h';
					printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	}
		if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a octal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod4Hexadecimal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 4(Hexadecimal)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0'|| inputstring[i]=='4' || inputstring[i]=='8' || inputstring[i]=='C'|| inputstring[i]=='c'){
			if(state=='x'){
				state='x';
			}
			else if(state=='y'){
				state='x';
			}
			else {
				state=='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else{
			if(state=='x'){
				state='y';
			}
			else if(state=='y'){
				state='y';
			}
			else{
				state='h';
					printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	}
		if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a Hexadecimal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod5Binary(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 5(Binary)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		
		
	if(inputstring[i]=='1'){
			if(state=='x'){
				state='v';
			}
			else if(state=='y'){
				state='y';
			}
			else if(state=='w'){
				state='u';
			}
			
			else if(state=='v'){
				state='w';
			}
			
			else if(state=='u'){
				state='x';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		
		
		else {
			if(state=='x'){
				state='x';
			}
			else if(state=='y'){
				state='w';
			}
			else if(state=='w'){
				state='v';
			}
			
			else if(state=='v'){
				state='u';
			}
			
			else if(state=='u'){
				state='y';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	
	
}
	if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a Binary string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
	
}

int mod5Hexadecimal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 5(Hexadecimal)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0'|| inputstring[i]=='5'||inputstring[i]=='a'||inputstring[i]=='f'||inputstring[i]=='A'||inputstring[i]=='F' ){
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		
		
		else if(inputstring[i]=='1'|| inputstring[i]=='6'||inputstring[i]=='b' ||inputstring[i]=='B' ){
			if(state=='x'){
				state='v';
			}
			else if(state=='y'){
				state='u';
			}
			else if(state=='w'){
				state='y';
			}
			
			else if(state=='v'){
				state='w';
			}
			
			else if(state=='u'){
				state='x';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		
		
		else if(inputstring[i]=='2'|| inputstring[i]=='7' || inputstring[i]=='c'||inputstring[i]=='C' ){
			if(state=='x'){
				state='w';
			}
			else if(state=='y'){
				state='x';
			}
			else if(state=='w'){
				state='u';
			}
			
			else if(state=='v'){
				state='y';
			}
			
			else if(state=='u'){
				state='v';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	

	else if(inputstring[i]=='3'||inputstring[i]=='8'||inputstring[i]=='D'||inputstring[i]=='d' ){
			if(state=='x'){
				state='y';
			}
			else if(state=='y'){
				state='v';
			}
			else if(state=='w'){
				state='x';
			}
			
			else if(state=='v'){
				state='u';
			}
			
			else if(state=='u'){
				state='w';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	


	else if(inputstring[i]=='4'|| inputstring[i]=='9' || inputstring[i]=='E' || inputstring[i]=='e'){
			if(state=='x'){
				state='u';
			}
			else if(state=='y'){
				state='w';
			}
			else if(state=='w'){
				state='v';
			}
			
			else if(state=='v'){
				state='x';
			}
			
			else if(state=='u'){
				state='y';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		else{
			state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
		}
	
	}
	
		if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a Hexadecimal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int mod5Octal(){
	int length,i;
	char inputstring[20], state;
	printf("\n\tMOD 5 (OCTAL)\n\n");
	printf("Enter input string:- ");
	scanf("%s",inputstring);
	length= strlen(inputstring);
	state='x';
	printf("Current state :- %c\n",state);
	for(i=0;i<length;i++){
		if(inputstring[i]=='0'|| inputstring[i]=='5' ){
			if(state=='x'){
				state='x';
			}
			else if(state=='y'){
				state='v';
			}
			else if(state=='w'){
				state='y';
			}
			
			else if(state=='v'){
				state='u';
			}
			
			else if(state=='u'){
				state='w';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		
		
		else if(inputstring[i]=='1'|| inputstring[i]=='6' ){
			if(state=='x'){
				state='v';
			}
			else if(state=='y'){
				state='y';
			}
			else if(state=='w'){
				state='u';
			}
			
			else if(state=='v'){
				state='w';
			}
			
			else if(state=='u'){
				state='x';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
		
		
		else if(inputstring[i]=='2'|| inputstring[i]=='7' ){
			if(state=='x'){
				state='y';
			}
			else if(state=='y'){
				state='u';
			}
			else if(state=='w'){
				state='w';
			}
			
			else if(state=='v'){
				state='x';
			}
			
			else if(state=='u'){
				state='v';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
	

	else if(inputstring[i]=='3' ){
			if(state=='x'){
				state='u';
			}
			else if(state=='y'){
				state='w';
			}
			else if(state=='w'){
				state='x';
			}
			
			else if(state=='v'){
				state='v';
			}
			
			else if(state=='u'){
				state='y';
			}
			else {
				state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}

	else if(inputstring[i]=='4' ){
			if(state=='x'){
				state='w';
			}
			else if(state=='y'){
				state='x';
			}
			else if(state=='w'){
				state='v';
			}
			
			else if(state=='v'){
				state='y';
			}
			
			else if(state=='u'){
				state='u';
			}
			else {
				state=='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
			}
				printf("state :- %c \t input :-%c\n",state,inputstring[i]);
		}
			else{
			state='h';
				printf("state :- %c \t input :-%c\n Halt\n\n",state,inputstring[i]);
		    	break;
		}
	
	}
		if(state=='x'){
		printf("Input string accepted\n");
	}
	else if(state=='h'){
		printf("Given input string is not a octal string\n");
	}
	else{
		printf("Input string is not accepted\n");
	}
}
int main(){
	int choice1,choice2;
	printf("\tMOD CHECKER\n\n");
	printf("1. MOD2\t 2.MOD3\t 3.MOD4\t 4.MOD5\nEnter Choice :-\t");
	scanf("%d",&choice1);
	if(choice1<=0 || choice1>4){
		printf("Wrong Input\n");
	}
	else{
	
	printf("\n1.Binary\t 2.Octal\t 3.Hexadecimal\nEnter Choice :-\t");
	scanf("%d",&choice2);
		if(choice2<=0 || choice2>3){
		printf("Wrong Input\n");
	}
	else{
	
	if(choice1==1){
		if(choice2==1){
			mod2Binary();
		}
		else if(choice2==2){
			mod2Octal();
		}
		else if(choice2==3){
			mod2Hexadecimal();
		}
	}
	else if(choice1==2){
			if(choice2==1){
			mod3Binary();
		}
		else if(choice2==2){
			mod3Octal();
		}
		else if(choice2==3){
			mod3Hexadecimal();
		}
	}
		else if(choice1==3){
			if(choice2==1){
			mod4Binary();
		}
		else if(choice2==2){
			mod4Octal();
		}
		else if(choice2==3){
			mod4Hexadecimal();
		}
	}
		else if(choice1==4){
			if(choice2==1){
			mod5Binary();
		}
		else if(choice2==2){
			mod5Octal();
		}
		else if(choice2==3){
			mod5Hexadecimal();
		}
	}
}}
	getch();
}
