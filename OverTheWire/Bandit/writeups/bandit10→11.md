# Bandit Level 10 → 11

We know that the password for the next level is stored in the file `data.txt`, which contains base64 encoded data. 

What is [base64](https://en.wikipedia.org/wiki/Base64)?

---

All we need to do, is print the decoded data.

In order to do that, we will use the `base64` command, with the argument `-d`, which stands for decode.

```bash
bandit10@bandit:~$ base64 -d data.txt
The password is ...
```
 
