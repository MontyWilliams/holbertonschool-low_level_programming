#include <stdio.h>
# if  !defined (MESSAGE)
	#define MESSAGE "This the mesage"
#endif
int main(void)
{

printf("whars this? %s\n", MESSAGE);
return (0);
}
