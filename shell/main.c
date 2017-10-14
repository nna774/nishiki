#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/wait.h>

int main() {
  const pid_t pid = fork();
  int status;
  if (pid == -1) {
    exit(EXIT_FAILURE);
  }

  if (pid == 0) { // child
    char* const args[] = {
      "/bin/ls",
      "/bin",
      NULL,
    };
    
    execvp(args[0], args);
  } else { // parent
    waitpid(pid, &status, WUNTRACED | WCONTINUED);
    if (WIFEXITED(status)) {
      printf("exited, status=%d\n", WEXITSTATUS(status));
    }
  }

  return 0;
}
