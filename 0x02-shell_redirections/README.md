# 0x02. Shell, I/O Redirections and filters

## Commands used:
`echo`
`cat`
`head`
`tail`
`find`
`wc`
`sort`
`uniq`
`grep`
`tr`
`rev`
`cut`
-> /tc/passwd : this text file contains all users and their associated login information. Each line in the file represents a single user and contains the following fields:
- Username: The username of the user.
- Password: The encrypted password for the user. This field is usually left blank, as Linux uses a system of hashed passwords instead of plain text passwords.
- User ID (UID): A unique identifier for the user.
- Group ID (GID): A unique identifier for the primary group of the user.
- User Description: A brief description of the user.
- Home Directory: The path to the home directory of the user.
- Shell: The default shell for the user.

- The  /etc/passwd file is typically only accessible by the root user, and is used by the system to authenticate users and to determine their permissions.

# Learning Objectives:

## Shell, I/O Redirection
- What do the commands head, tail, find, wc, sort, uniq, grep, tr do
- How to redirect standard output to a file
- How to get standard input from a file instead of the keyboard
- How to send the output from one program to the input of another program
- How to combine commands and filters with redirections

## Special Characters
- What are special characters
- Understand what do the white spaces, single quotes, double quotes, backslash, comment, pipe, command separator, tilde and how and when to use them

## References
- [I/O Redirection](http://linuxcommand.org/lc3_lts0070.php)

- [Special characters](http://mywiki.wooledge.org/BashGuide/SpecialCharacters)
