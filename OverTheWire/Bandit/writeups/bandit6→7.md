# Bandit Level 6 → 7

```bash
bandit6@bandit:~$ ls -la
total 20
drwxr-xr-x   2 root root 4096 Apr  3 15:17 .
drwxr-xr-x 150 root root 4096 Apr  3 15:20 ..
-rw-r--r--   1 root root  220 Mar 31  2024 .bash_logout
-rw-r--r--   1 root root 3851 Apr  3 15:10 .bashrc
-rw-r--r--   1 root root  807 Mar 31  2024 .profile
```

So there is nothing in our home directory. This means we will have to search for our file from the file system's root (`/`).

What we know:
- owned by user bandit7
- owned by group bandit6
- 33 bytes in size

```bash
bandit6@bandit:~$ find / -user bandit7 -group bandit6 -size 33c 2>/dev/null
/var/lib/dpkg/info/bandit7.password
```

Breakdown:
- `/` starting from root
- `2>/dev/null` redirects error messages to /dev/null (think of it like a trash can), so that "permission denied" messages get filtered out.

Then we print the password

```bash
bandit6@bandit:~$ cat /var/lib/dpkg/info/bandit7.password
...
```
