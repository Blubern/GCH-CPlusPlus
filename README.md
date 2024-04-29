# GCH - C++

This is a repository for a GitHub Copilot for Business Hackathon with C++

## ⚒️What are we building
We are building a interest calculator together with a unittest. 

## Prerequisites 
This introduction is written for **VSCode/GitHub Codespaces**. Please install the following extentions. 

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) 
- [GitHub Copilot](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot)
- [GitHub Copilot Chat](https://marketplace.visualstudio.com/items?itemName=GitHub.copilot-chat) (will install automatically)

In addition, please execute the following commands:
```bash
sudo apt-get update
sudo apt-get install libgtest-dev
```

To use GitHub Copilot, you must have an active subscription for GitHub Copilot in your personal account, or you need to be assigned a seat by your organization. Sign up for a [GitHub Copilot free trial](https://github.com/settings/copilot) in your personal account.

### 📖 Additional useful Resources

- [Video](https://www.youtube.com/watch?v=jXp5D5ZnxGM) on different ways to use GitHub Copilot in VS Code.
- [Video](https://www.youtube.com/watch?v=2nPoiUJpDaU) on top 10 features.

### ⌨️ Nice to know: GitHub Copilot Shortcuts

| Shortcut | Description |
| --- | --- |
| `Ctrl`+`i` | Open inline chat |
| `Ctrl`+`Alt`+`i` | Move to chat |
| `Ctrl`+`Enter` | Accept code suggestion from chat |

## Scenario 0️⃣: Start with Copilot
Task: Get yourself familiar with Copilot inline code and Copilot chat. Try out Slash commands

```cpp
//help
```
together with `Strg` + `Alt` + `Enter` and ask Copilot some questions about code / coding.ch

## Scenario 1️⃣: Create interest calculator without compound interest
Task: Use GitHub Copilot chat to create an interest calculator in C++ (.cpp file). Keep in mind that you want to import this module later in your unittest file.
Hint: If you're unsure about the formula for interest without compound, ask Copilot for assistance.

## Scenario 2️⃣: Create interest calculator with compound interest
Task: Use GitHub Copilot to create an interest calculator **with compound interest**. But this time, use the comment or online chat function to ask Copilot for assistance.

## Scenario 3️⃣: Build simple unittest 
Task: Build a simple unittest for the interest calculator. Test different scenarios such as:
- Calculating interest for different principal amounts
- Calculating interest for different interest rates
- Checking that the calculated interest matches the expected result


# ⚠️SPOILER ALERT: Here are some sample prompts if you get stuck!
You can find solutions in the `Solutions` folder.
## How to run test file with gtest
```bash
g++ -o ZinsesZinsRechnungTest ZinsesZinsRechnungTest.cpp -lgtest -lgtest_main -pthread
./ZinsesZinsRechnungTest
```

## Sample prompts

### Scenario 0
Say Hello
```
Hello Copilot. Please answer in english.
```

Try these commands
```
/help
/fix
@Workspace
#file
/explain
```