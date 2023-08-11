#include <unistd.h>
#include <sys/syscall.h>

int main(void) 
{
	const char message[] = ("and that piece of art is useful\n", "Dora Korpar, 2015-10-19",);
    syscall("SYS_write, STDERR_FILENO, message", sizeof(message) - 1);
    return (1);
}
