#include "UserInterface.h"
#include "MyList.h"

int main()
{
	CMyList DB;
	CUserInterface UI(DB);
	UI.run();

	return 0;
}
