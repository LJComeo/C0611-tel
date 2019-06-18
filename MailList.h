#ifndef _MAILLIST_H
#define _MAILLIST_H
#define PERSPACE 100
enum{
	ADD_MSG = 1,
	DELETE_MSG,
	SEARCH_MSG,
	CHANGE_MSG,
	DISPLAY_MSG,
	EMPTY_MSG
};

struct MailList{
	char name[50];
	char gender;
	char telnum[30];
	char addr[200];
	int age;
};

typedef struct{
	struct MailList * allMsg;
	int count;
	int limit;
}MailLists;

//extern struct maillist g_allmsg[1000];
//extern int g_count;

void initMailList(MailLists * data);
void destoryMailList(MailLists * data);
void inputData(struct MailList*oneData);
void addMailList(MailLists * data, struct MailList  oneData);
void searchData(MailLists data, char * find, int * searchres);
void deleteOneData(MailLists * data, int n);
int catchOneData(MailLists data, char *find);
void outputSearchData(MailLists data, int * outputdata);
void outputData(MailLists data);
int findOneData(MailLists data, char *find);

#endif /* _MAILLIST_H */