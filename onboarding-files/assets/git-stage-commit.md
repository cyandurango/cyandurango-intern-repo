## STAGING/COMMITING FILES EXPERIMENT

After adding "Orange" and "Violet" in colors.txt:
### STAGING
```
sighreelss@sighreelsss-MacBook-Air test-experiments % git add colors.txt 
sighreelss@sighreelsss-MacBook-Air test-experiments % git status
    On branch main
    Your branch is up to date with 'origin/main'.
    Changes to be committed:
    (use "git restore --staged <file>..." to unstage)
            modified:   colors.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % git reset HEAD colors.txt
    Unstaged changes after reset:
    M       onboarding-files/test-experiments/colors.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % git commit -m "[update] added more colors in color.txt"
    On branch main
    Your branch is up to date with 'origin/main'.

    Changes not staged for commit:
    (use "git add <file>..." to update what will be committed)
    (use "git restore <file>..." to discard changes in working directory)
            modified:   colors.txt
no changes added to commit (use "git add" and/or "git commit -a")
```

