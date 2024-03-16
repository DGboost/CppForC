#include "UserInterface.h"
#include "MyListEx.h"
#include "UserData.h"

int main()
{
	CMyListEx DB(new CUserData("Dummy", "Head"));
	CUserInterface UI(DB);
	UI.run();
}
