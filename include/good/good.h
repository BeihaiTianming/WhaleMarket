#include "config.h"

typedef enum {SELLING, SOLD, BANNED} State;
typedef struct {
    char id[MAX_LEN];
    char name[MAX_LEN];
    double price;
    char seller_id[MAX_LEN];
    State state;
    char date[MAX_LEN];
    char description[MAX_LEN];
    } Good;


void pullGoods();
void pushGoods();
Good* getGood(int idex);
int addGood(Good* g);
int searchGoodID(const char* id);
int deleteGood(const char* id, const char* who);
void goodInfo(int i);
void printGoods();
void searchGoodName4Buyer(const char* name);
void searchGoodName4Admin(const char* name);
void printGoods4Seller(const char* id);
void printGoods4Buyer(const char* id);
