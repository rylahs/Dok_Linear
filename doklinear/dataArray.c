#include <stdio.h>


typedef struct USERDATA 
{
	int age;
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void)
{
	USERDATA a = { 10, "Hoon", "010-1234-1234" };
	USERDATA b;
	b = a;
	printf("%d, %s, %s\n", b.age, b.name, b.phone);
	return 0;
		
}