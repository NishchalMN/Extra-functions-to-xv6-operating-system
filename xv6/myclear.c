#include "types.h"
#include "stat.h"
//#include "defs.h"
#include "user.h"



int 
main(int argc,char *argv[])
{

	for(int i=0;i<25;i++)
		write(1,"\n",2);
	printf(1,"\x1b[H\x1b[J");
	exit();
}

