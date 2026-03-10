### GIT CHECKOUT MAIN -- <FILENAME>
```
sighreelss@sighreelsss-MacBook-Air test-experiments % echo "ln 1: original codebase" > git-adv-test.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % git add git-adv-test.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % git commit -m "[new] start advanced commands experiment"
    [main 773a024] [new] start advanced commands experiment
    1 file changed, 1 insertion(+)
    create mode 100644 onboarding-files/test-experiments/git-adv-test.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % echo "ln 2: buggy code" >> git-adv-test.txt 
sighreelss@sighreelsss-MacBook-Air test-experiments % cat git-adv-test.txt 
    ln 1: original codebase
    ln 2: buggy code
sighreelss@sighreelsss-MacBook-Air test-experiments % git checkout main -- git-adv-test.txt
sighreelss@sighreelsss-MacBook-Air test-experiments % cat git-adv-test.txt
    ln 1: original codebase
```
### GIT CHERRY-PICK

### GIT LOG

### GIT BLAME <FILENAME>