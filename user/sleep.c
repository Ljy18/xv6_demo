#include"kernel/types.h"
#include"user/user.h"

int main(int argc,char*argv[]){
	//sleep int
	if(argc!=2){
		printf("Error Example sleep 2");
		exit(-1);
	}

	int num_of_ticks=atoi(argv[1]);
	if(sleep(num_of_ticks)){
		printf("Can not sleep");
		exit(-1);
	}
	
	
	exit(0);
}