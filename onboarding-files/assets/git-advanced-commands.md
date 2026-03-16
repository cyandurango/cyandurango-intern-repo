### GIT CHECKOUT MAIN -- <FILENAME>

```bash
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

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % git checkout -b git-adv
    Switched to a new branch 'git-adv'

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "ln 2: feature a" >> git-adv-test.txt

sighreelss@sighreelsss-MacBook-Air test-experiments % git commit -am "[add] adding feature a"
    [git-adv 3281803] [add] adding feature a
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "ln 3: feature b" >> git-adv-test.txt

sighreelss@sighreelsss-MacBook-Air test-experiments % git commit -am "[add] adding feature b"
    [git-adv 9db13dd] [add] adding feature b
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % git checkout main
    Switched to branch 'main'
    Your branch is up to date with 'origin/main'.

sighreelss@sighreelsss-MacBook-Air test-experiments % git log git-adv --oneline
    9db13dd (git-adv) [add] adding feature b
    3281803 [add] adding feature a
    19226ba (HEAD -> main, origin/main, origin/HEAD) [docs] update git-advanced-commands.md

sighreelss@sighreelsss-MacBook-Air test-experiments % git cherry-pick 9db13dd
    Auto-merging onboarding-files/test-experiments/git-adv-test.txt
    CONFLICT (content): Merge conflict in onboarding-files/test-experiments/git-adv-test.txt
    error: could not apply 9db13dd... [add] adding feature b
    hint: After resolving the conflicts, mark them with
    hint: "git add/rm <pathspec>", then run
    hint: "git cherry-pick --continue".
    hint: You can instead skip this commit with "git cherry-pick --skip".
    hint: To abort and get back to the state before "git cherry-pick",
    hint: run "git cherry-pick --abort".
    hint: Disable this message with "git config set advice.mergeConflict false"`
```

After resolving conflicts:

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % git add git-adv-test.txt

sighreelss@sighreelsss-MacBook-Air test-experiments % git cherry-pick --continue
    [main a446fd8] [add] adding feature b
    Date: Tue Mar 10 09:54:50 2026 +0800
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % cat git-adv-test.txt
    ln 1: original codebase
    ln 3: feature b
```

### GIT LOG

Using `git log`:

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % git log
    commit a446fd89d74ea40211c1d6fb2075e1fc16c3ab7d (HEAD -> main)
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Tue Mar 10 09:54:50 2026 +0800

        [add] adding feature b

    commit 19226baab54b78777c93f1def63e9d2d0873dc2e (origin/main, origin/HEAD)
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Tue Mar 10 09:34:18 2026 +0800

        [docs] update git-advanced-commands.md

        Added documentation for the function of git checkout main -- <filename>

    commit 5d0562216d058bf5baa05417931593ee09ac090b
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Tue Mar 10 09:23:56 2026 +0800

        [docs] update git-advanced-commands.md

        update asset evidence for milestone 3.4

    commit 773a02490e39d46162a292bd8a21c036927b2872
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Tue Mar 10 09:21:56 2026 +0800

        [new] start advanced commands experiment

    commit b143a79a874fc5c582e0743f57904334cc20c601
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Tue Mar 10 00:16:40 2026 +0800

        [setup] milestone 3.4 setup`
```

Using `git log --oneline`:

```bash
a446fd8 (HEAD -> main) [add] adding feature b
19226ba (origin/main, origin/HEAD) [docs] update git-advanced-commands.md
5d05622 [docs] update git-advanced-commands.md
773a024 [new] start advanced commands experiment
b143a79 [setup] milestone 3.4 setup
```

Using `git log --oneline --graph --all`:

```bash
* a446fd8 (HEAD -> main) [add] adding feature b
* 19226ba (origin/main, origin/HEAD) [docs] update git-advanced-commands.md
* 5d05622 [docs] update git-advanced-commands.md
* 773a024 [new] start advanced commands experiment
* b143a79 [setup] milestone 3.4 setup
* 05d6f6d [docs] update git_understanding.md
* e12b731 [docs] update git-bisect-test-results.md
* c0d3f0e Add Yellow
* b0aefeb Add Green
* 50d49ea [bug] Add Cabbage
* 38784e2 Add Blue
* 3c53c07 Add Red
* 8f05a69 [docs] for milestone 3.3 completion
| *   aad2751 (refs/stash) On bisect-experiment: !!GitHub_Desktop<bisect-experiment>
| |\
| | * be58455 index on bisect-experiment: 4485f9f good 2
| |/
| * 4485f9f good 2
| * 94f4ab1 bad commit
| * 2a38963 good 1
|/
* ade51a6 [docs] update git_understanding.md
* 7b1fa66 [docs(readme)] add section on the importance of clear commit messages
* 9e2193f updated file
*   339d3ec Merge pull request #80 from cyandurango/file-mgmt
|\
| * df51b2f [Mgmt] Better File Reorganization
* | 0367b10 Merge pull request #79 from cyandurango/milestone2
|\|
| * 60197a9 Update git_understanding.md
| * 065fffa Update vs_code_productivity.md
|/
* a722969 Added and edited files
```

### GIT BLAME <FILENAME>

```bash
sighreelss@sighreelsss-MacBook-Air test-experiments % git blame git-adv-test.txt
    773a0249 (Cyril Andre Durango 2026-03-10 09:21:56 +0800 1) ln 1: original codebase
    a446fd89 (Cyril Andre Durango 2026-03-10 09:54:50 +0800 2) ln 3: feature b
```
