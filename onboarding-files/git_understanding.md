# 1.1 Merge Conflicts & Conflict Resolution
Goal: Understand what merge conflicts are, why they happen, and how to resolve them.

## **_What caused the conflict?_**
Main source of merge conflicts are when merge branches have competing commits. 

I edited the main ReadMe.md file in the main branch anand the newly created branch called "merge-conflict". This resulted in a merge conflict between the "main" branch and the "merge-conflict" branch. 

## **_How did you resolve it?_**
Github made me choose between the two edits coming from the the two branches, giving me the option to accept the current change, the incoming change, or accept both changes. I chose to accept the incoming change, then marked it as resolved. After that, the branches were now merged. 

## **_What did you learn?_**
I learned of merging branches, exploring merging conflicts, and how to resolve such conflicts. I also learned that to minimize such conflicts, I should not be editing on the same file in at least two branches.


# 3.1 Pull Requests
Goal: Learn how to create, review, and collaborate on Pull Requests (PRs) in GitHub.

## **_Why are PRs important in a team workflow?_**
Pull requests allow team members to review the changes made before implementing them (or merging them) into the main branch. 

## **_What makes a well-structured PR?_**
A well-structured pull request generally has a summary of the change and how the change is tested in its description. This tells the rest of the team what changes the member has implemented so that the others can replicate the effects of the change into their own local repository for review.

## **_What did you learn from reviewing an open-source PR?_**
The structure of their PR dictates how organized they are, with easy-to-follow-through changes that aids the reviewer. From PR titles to descriptions, it goes to show how professional software engineers handle version control and changes.


# 3.2 Writing Meaningful Commit Messages
Goal: Learn how to write clear, meaningful commit messages that improve collaboration and code history readability.

## **_What makes a good commit message?_**
A good commit message includes a title that encapsulates what the change does. The description focuses on the summary/overview of what the added files does.

## **_How does a clear commit message help in team collaboration?_**
Clear commit messages help the team understand at a quick glance as to what the changes are being committed into the project. Project will be fully and correctly documented.

## **_How can poor commit messages cause issues later?_**
Poor commit messages will cause some confusion regarding the files being uploaded inside the project. Vague descriptions create confusion, risk accidental deletion, and loses context of change.


# 3.3 Understand Git Bisect
Goal: Learn how to use git bisect to identify which commit introduced a bug in a project.

## **_What does git bisect do?_**
Through a binary search algorithm, git bisect command line identifies which of the committed changes contain the buggy code update. This helps in identifying the source of the bugs.

## **_When would you use it in a real-world debugging situation?_**
In a situation where a thousand commits are being reviewed (which is highly likely given that people are working on a project in real time), it would only take a maximum of ten steps to find the code with bugs in it.

## **_How does it compare to manually reviewing commits?_**
Utilizing the same situation, users would have to go through each and every commit until they have found the one with bugs. Not only is this time consuming, but it is also taxing. 


# 3.4 Advanced Git Commands & When to Use Them
Goal: Understand and experiment with advanced Git commands using your preferred Git desktop client.

## **_What does each command do?_**
- ```git checkout main -- <filename>```: overwrites the specified filename to the latest committed version of the said file from the main branch.
- ```git cherry-pick <hash of commit>```: from the term 'cherry-picking', it pushes specific edits of a codebase from a branch into the main branch.
- ```git log```: generates the latest five full commit details of a certain repository project
- ```git blame <filename>```: writes all the committed changes of the specified file.


## **_When would you use it in a real project (hint: these are all really important in long running projects with multiple developers)?_**
- ```git checkout main -- <filename>```: when the local codebase is buggy, this command line overwrites the local saved file with the file saved in the github repository, reverting any changes back into the working codebase in the main branch
- ```git cherry-pick <hash of commit>```: allows select commits from a branch to be merged inside the main branch, thus allowing it to function in the main project without the need to merge the whole branch together. This is useful when a developed 
- ```git log```: a chronological timeline of edits listed from latest to oldest, significant in identifying errors in a project made from to past commits.
- ```git blame <filename>```: lists all commits and its corresponding authors, identifying which member applied the edits, significant in finding bugs and errors of a single file and the person responsible for such.

## **_What surprised you while testing these commands?_**
git log and git blame was surprising as it records everything from the time it was committed to the person responsible in committing the changes into the repository.
