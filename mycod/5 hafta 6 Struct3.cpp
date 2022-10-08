#include <stdio.h>
struct s{
	int x;
	int y;
};
int main()
{
	struct s a={0,1};
	struct s *p=&a;
	printf("\nelement 1 value:%d",p->x);//(*p).x ve (*&a).x þeklinde yazýlabilirdi
	printf("\nelement 2 value:%d",p->y);
	
	printf("\nelement 1 value:%d",(*&a).x);
	
}
