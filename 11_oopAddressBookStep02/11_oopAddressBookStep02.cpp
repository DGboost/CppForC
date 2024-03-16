#include "UserInterface.h"
#include "MyList.h"
#include "UserData.h"

int main()
{
	CMyList DB(new CUserData);
	CUserInterface UI(DB);
	UI.run();
}
