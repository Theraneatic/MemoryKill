#include "Windows.h"
using namespace std;

int main()
{
	bool truth = true, kill1 = false, kill2 = false, kill3 = false;
	int input = 0;
	FreeConsole();
	while (truth == true) {
		ShellExecute(0, 0, "https://www.youtube.com/watch?v=vS43ZgcQ_hE", 0, 0, SW_SHOW);
		ShellExecute(0, 0, "https://www.youtube.com/watch?v=BiGTx8d2zdU", 0, 0, SW_SHOW);
		if (GetAsyncKeyState('X') & 0x8000) {
			kill1 = true;
		}
		if (GetAsyncKeyState('Y') & 0x8000) {
			kill2 = true;
		}
		if (GetAsyncKeyState('Z') & 0x8000) {
			kill3 = true;
		}
		if (kill1 == true && kill2 == true && kill3 == true) {
			truth = false;
		}
	}
    return 0;
}
