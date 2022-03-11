#include "interface/interface.h"
#include "tools/hint.h"
#include "menu/menu.h"

void inv()
{
    invalidMessage();
    failureMessage();
}

static void USER_Login() { inv(); }
static void USER_SignUp() { inv(); }
static void ADMIN_Login() { inv(); }

static HANDLER handler[] = {USER_Login, USER_SignUp, ADMIN_Login};

make_interface(M, AIN) 

