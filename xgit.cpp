#include <cstdlib>
using namespace std;
int main()
{
    std::system("git add --all");
    std::system("git commit -m \"update\"");
    std::system("git push origin master");
	return 0;
}
