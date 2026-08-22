# Git & Github Notes

## What is Git

Git is a tool that saves versions of your project over time, so you can undo mistakes and see what changed.

## What is GitHub

GitHub is a website where you can upload your Git project to back it up online and share it with others.

Git is the tool. GitHub is a website that uses that tool.


## Why Use Git

Without Git, people can easily lose track of the versions of their project and end up with messy files like this:

`project.c`

`project_final.c`

`project_final_final.c`


Git avoids this by remembering every version of your project inside one folder, without needing duplicate files.

## Repository

A repository, or repo, is just a folder that Git is tracking.

To start tracking a folder, run this once inside it:

```bash
git init
```

Now Git is watching this folder for changes.

## Tell Git Who You Are

Before making your first commit, tell Git your name and email. This gets attached to everything you save.

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

Use the same email as your GitHub account. Do this once per computer, not once per project.

## The Three Steps of Saving a Change

Every change goes through three steps before it is permanently saved.

1. Edit - you change a file on your computer. Nothing is saved yet.
2. Stage - you mark that file as ready to be saved, using `git add`.
3. Commit - you save it permanently with a message, using `git commit`.

## Commands You Will Use Often

```bash
git status
```

Shows what has changed and what is staged.

<br>

```bash
git add .
```

Stages everything you changed.

<br>

```bash
git commit -m "your message here"
```

Saves a permanent checkpoint with a short note.

<br>

```bash
git log
```

Shows your past commits.

## Branches

A branch is a separate copy of your project that you can safely experiment on, without affecting the main version.

Every project starts with one branch, usually called main.

```bash
git checkout -b new-branch
```

Creates a new branch and switches to it.

<br>

```bash
git checkout main
```

Switches back to main.

<br>

```bash
git merge new-branch
```

Brings the changes from your branch into main.

## Merge Conflicts

Sometimes Git cannot decide how to combine two changes to the same line. This is called a conflict. Git marks the spot in the file for you to fix by hand, then you save it, stage it, and commit again.

This is normal and happens to everyone.

## Logging Into GitHub

Logging into the website is simple, just go to github.com and sign in.

Logging in from your terminal is a bit different. GitHub no longer accepts your normal password there. Instead, you either use a personal access token, or an SSH key.

## Syncing with GitHub

```bash
git clone <link>
```

Downloads a project from GitHub onto your computer.

<br>

```bash
git push
```

Sends your saved commits up to GitHub.

<br>

```bash
git pull
```

Downloads other people's commits from GitHub into your project.

## Ignoring Files

Some files should never be tracked by Git, like passwords or temporary files. You list them in a file called `.gitignore` inside your project folder.

Example contents of `.gitignore`

`secrets.txt`

`temp` folder

any file ending in `.log`

## Glossary

**Repo**: a folder Git is tracking

**Commit**: a saved checkpoint

**Staging**: marking changes as ready to save

**Branch**: a separate version of your project

**Merge**: combining branches together

**Conflict**: when Git cannot automatically combine two changes

**Clone**: downloading a project from GitHub

**Push**: uploading your commits to GitHub

**Pull**: downloading other people's commits

**gitignore**: a list of files Git should skip
