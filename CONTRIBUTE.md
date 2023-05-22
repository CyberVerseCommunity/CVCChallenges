
# How to upload ?

A guide on how to upload your own challenge to repository.

## Fork Repository
First of all, fork the CVCChallenges repository using `Fork` button from top right side of the window.

- This will create a repository inside your github profile.

## Pull Changes from Main Repository
After forking a repository from main brach, check available changes from original repository and pull all latest changes.

## Clone & Add Challenge
Now clone newly made repository from your profile and paste your made challenge inside challenge category with proper README.md file with all necessary details.
- [README Referance](https://github.com/CyberVerseCommunity/CVCChallenges/tree/main/Reverse%20Engineering/Level1#readme)
- If challenge categoryis not available then create a category folder and put challenge inside it. Make sure you are putting your challenges in right place.

## Commit and Push Changes
Commit your changes and run following command inside your terminal at project directory location.

```bash
git remote add upstream https://github.com/CyberVerseCommunity/CVCChallenges.git

# Add Changes
git add .

# Commit Changes
git commit -m "<Commmit message>"

# Push Changes
git push
```

## Create a Pull Request
Now go to your github profile and nevigate to CVCChallenges repository. Now jump to Pull requests section and click on `New pull request`. Fill up message details and click on `Create pull request`

## It's Done
Woh, It's done. Now your request has been made and will be approved by Community Github manager and you will get a confirmation email in your inbox.

### Thank You For Your Valueable Time & Support
