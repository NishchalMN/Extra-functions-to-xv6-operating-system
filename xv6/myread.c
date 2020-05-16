#include "types.h"
#include "stat.h"
//#include "defs.h"
#include "user.h"



int 
main(int argc,char *argv[])
{

	
	//int q;
	char buff[256]; 
	read(0,buff,1);
	write(1,buff,5);
	while(buff[0]!='q')
	{
		read(0,buff,1);
		write(1,buff,5);
	
	}
	
	
	//q=atoi(argv[1]);
	//readit(q);
	exit();
}

