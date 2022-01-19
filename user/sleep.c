// sleep.c let process sleep some times
#include"kernel/types.h"
#include"user/user.h"

int 
main(int argc,char *argv[])
{
	if(argc<=1)
	{
		printf("not argument needed!");
	}
	int timer=atoi(argv[1]);
	sleep(timer);
	exit(0);
	//
}
