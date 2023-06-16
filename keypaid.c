#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
int count;

int val_count(char *input){
	count=0;
	for(int i=0;i<strlen(input)-1;i++){
		if(input[i]==input[i+1]){
			count++;
		}
	}
	return  count;
}


int main()
{
	   mkfifo("myfifo",0777);
	   
	   char input[3];
	  // do{
		printf("----------------------------------\n\t1\t2\t3\n\tABC\tDEF\tGHI\n\t4\t5\t6\n\tJKL\tMNO\tPQR\n\t7\t8\t9\n\tSTU\tVWX\tYZ\n----------------------------------\n");   
		printf("Enter the string : ");
		scanf("%s",input);
	        int cnt=val_count(input);
		char z='A';
		int cm=3*((atoi(input)%10)-1);
		char sum = z+count+cm;
		int fd=open("myfifo",O_WRONLY);
		write(fd,&sum,sizeof(char));
		close(fd);
	//	}while(atoi(input)!=10);
	   return 0;
}
