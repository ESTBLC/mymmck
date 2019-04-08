#ifndef TRACEE_H
#define TRACEE_H

#include <sys/types.h>
#include <sys/user.h>

/* Exec */
pid_t start_tracee(const char *path, char *const args[]);
void run_tracee(pid_t pid);
int run_to_syscall(pid_t pid);

struct user_regs_struct get_regs(pid_t pid);

#endif
