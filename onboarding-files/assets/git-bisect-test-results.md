
### Note: results per commnad are indented for visualization purposes

SITUATION: a text file is generated that lists the colors, and the buggy code is indicated appropriately

### _SETTING UP THE TEST:_
```
sighreelss@sighreelsss-MacBook-Air test-experiments % echo "Red" > colors.txt && git add colors.txt && git commit -m "Add Red"
    [main 3c53c07] Add Red
    1 file changed, 1 insertion(+)
    create mode 100644 onboarding-files/test-experiments/colors.txt

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "Blue" >> colors.txt && git commit -am "Add Blue"
    [main 38784e2] Add Blue
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "Cabbage" >> colors.txt && git commit -am "[bug] Add Cabbage"
    [main 50d49ea] [bug] Add Cabbage
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "Green" >> colors.txt && git commit -am "Add Green"
    [main b0aefeb] Add Green
    1 file changed, 1 insertion(+)

sighreelss@sighreelsss-MacBook-Air test-experiments % echo "Yellow" >> colors.txt && git commit -am "Add Yellow"
    [main c0d3f0e] Add Yellow
    2 files changed, 2 insertions(+), 1 deletion(-)
```
Generates the [color.txt](../test-experiments/colors.txt) file with pseduo-commits

### _GIT BISECT RESULTS_
```
sighreelss@sighreelsss-MacBook-Air test-experiments % git bisect start
    status: waiting for both good and bad commits
    
sighreelss@sighreelsss-MacBook-Air test-experiments % git bisect bad  
    status: waiting for good commit(s), bad commit known

sighreelss@sighreelsss-MacBook-Air test-experiments % git bisect good 3c53c07 
    Bisecting: 1 revision left to test after this (roughly 1 step)
    [50d49ea65e5beee4d10dd6627f499338a356f728] [bug] Add Cabbage

sighreelss@sighreelsss-MacBook-Air test-experiments % git bisect bad          
    Bisecting: 0 revisions left to test after this (roughly 0 steps)
    [38784e27f453eade07beb2ba13a05b8cebd89b91] Add Blue

sighreelss@sighreelsss-MacBook-Air test-experiments % git bisect good         
    50d49ea65e5beee4d10dd6627f499338a356f728 is the first bad commit
    commit 50d49ea65e5beee4d10dd6627f499338a356f728
    Author: Cyril Andre Durango <cyril.durango@gmail.com>
    Date:   Mon Mar 9 23:56:00 2026 +0800

        [bug] Add Cabbage

    onboarding-files/test-experiments/colors.txt | 1 +
    1 file changed, 1 insertion(+)
```