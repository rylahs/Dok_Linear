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
	USERDATA aList[4] = {
		{20, "Tester01", "010-1234-1111", NULL},
		{21, "Tester02", "010-1234-2222", NULL},
		{22, "Tester03", "010-1234-3333", NULL},
		{23, "Tester04", "010-1234-4444", NULL},
	};

	aList[0].pNext = &aList[1];
	aList[1].pNext = &aList[2];
	aList[2].pNext = &aList[3];
	aList[3].pNext = NULL;

	USERDATA* pUser = &aList[0];

	while (pUser != NULL)
	{
		printf("[%p] %d, %s, %s, [%p]\n",
			pUser, 
			pUser->age, pUser->name, pUser->phone,
			pUser->pNext);
		pUser = pUser->pNext;
	}
}