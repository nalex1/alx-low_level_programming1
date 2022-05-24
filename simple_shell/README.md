SIMPLE SHELL PROJECT

# HISTORY

Generaly shell program was written by Ken thompson in 1971 in unix system which also invented by Dennis Ritchie and Ken Thompson in Bell Lab in 1969

# When we use shell?
everytime we use linux terminal or cmd in windows operating system we interact with shell.

# How shell it works

1. Command are intered in shell prompt and check if length is not null, if yes it keep its in history
2. It break up the command into individual word and strings(Parsing its)
3. Checking if in command written was a Special character or Keyword
4. If keyword is in the code its handle it directly
5. Executing System Commands and Libraries by forking a child and calling execvp
6. finally it print current directory name and wait for next input
