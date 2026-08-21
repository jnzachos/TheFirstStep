# Bandit Level 0 → 1

Now that we are user `bandit0`, we need to find the password for `bandit1`.

We will use `ls` to list the files and folders inside our current directory, then `cat` to print the password.

```bash
bandit0@bandit:~$ ls
readme
bandit0@bandit:~$ cat readme
Congratulations on your first steps into the bandit game!!
Please make sure you have read the rules at https://overthewire.org/rules/
If you are following a course, workshop, walkthrough or other educational activity,
please inform the instructor about the rules as well and encourage them to
contribute to the OverTheWire community so we can keep these games free!

The password you are looking for is: ...
```

Wait... what does [directory](https://hpc.nmsu.edu/onboarding/linux/files-folders/) mean?

---
In order to connect to `bandit1`, we need to disconnect from `bandit0`. To do that, simply use `CTRL + D`. [Why did that work?](https://unix.stackexchange.com/questions/110240/why-does-ctrl-d-eof-exit-the-shell)

Now, by using the `ssh` command we learned in the last level and simply changing the user to `bandit1`, we can pass this level!

- Reminder: `ssh <user>@<target> -p <port number>`
> **Important Note**: If you want to learn more about the commands we used, you can use the `man` command. If you want to learn what `man` does, use the `man man` command.
