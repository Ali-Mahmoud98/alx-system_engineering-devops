# 0x04. Loops, conditions and parsing

## 0. Create a SSH RSA key pair
**Files:** [0-RSA_public_key.pub](0-RSA_public_key.pub)

Read for this task:
* [Linux and Mac OS users](https://askubuntu.com/questions/61557/how-do-i-set-up-ssh-authentication-keys)
* [Windows users](https://docs.rackspace.com/docs/generating-rsa-keys-with-ssh-puttygen)
* man: `ssh-keygen`

You will soon have to manage your own servers concept page hosted on remote data centers. We need to set them up with your RSA public key so that you can access them via SSH.

Create a RSA key pair.

Requirements:

* Share your public key in your answer file 0-RSA_public_key.pub
* Fill the SSH public key field of your intranet profile with the public key you just generated
* Keep the private key to yourself in a secure location, you will use it later to connect to your servers using SSH. Some storing ideas are Dropbox, Google Drive, password manager, USB key. Failing to do so will prevent you to access your servers, which will prevent you from doing your projects
* If you decide to add a passphrase to your key, make sure to save this passphrase in a secure location, you will not be able to use your keys without the passphrase
* SSH and RSA keys will be covered in depth in a later project.

## 1. For Best School loop
**Files:** [1-for_best_school](1-for_best_school)

Write a Bash script that displays `Best School` 10 times.

Requirement:
* You must use the `for` loop (`while` and `until` are forbidden)

## 2. While Best School loop
**Files:** [2-while_best_school](2-while_best_school)

Write a Bash script that displays `Best School` 10 times.

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)

## 3. Until Best School loop
**Files:** [3-until_best_school](3-until_best_school)

Write a Bash script that displays `Best School` 10 times.
Requirements:
* You must use the `until` loop (`for` and `while` are forbidden)

## 4. If 9, say Hi!
**Files:** [4-if_9_say_hi](4-if_9_say_hi)

Write a Bash script that displays `Best School` 10 times, but for the 9th iteration, displays `Best School` and then `Hi` on a new line.

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)
* You must use the `if` statement

## 5. 4 bad luck, 8 is your chance
**Files:** [5-4_bad_luck_8_is_your_chance](5-4_bad_luck_8_is_your_chance)

Write a Bash script that loops from 1 to 10 and:
* displays `bad luck` for the 4th loop iteration
* displays `good luck` for the 8th loop iteration
* displays `Best School` for the other iterations

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)
* You must use the `if`, `elif` and `else` statements

## 6. Superstitious numbers
**Files:** [6-superstitious_numbers](6-superstitious_numbers)

Write a Bash script that displays numbers from 1 to 20 and:
* displays `4` and then `bad luck from China` for the 4th loop iteration
* displays `9` and then `bad luck from Japan` for the 9th loop iteration
* displays `17` and then `bad luck from Italy`` for the 17th loop iteration

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)
* You must use the case statement

## 7. Clock
**Files:** [7-clock](7-clock)

Write a Bash script that displays the time for 12 hours and 59 minutes:
* display hours from 0 to 12
* display minutes from 1 to 59

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)

## 8. For ls
**Files:** [8-for_ls](8-for_ls)

Write a Bash script that displays:
* The content of the current directory
* In a list format
* Where only the part of the name after the first dash is displayed (refer to the example)

Requirements:
* You must use the `for` loop (`while` and `until` are forbidden)
* Do not display hidden files
```
sylvain@ubuntu$ ls
100-read_and_cut              1-for_best_school         6-superstitious_numbers
101-tell_the_story_of_passwd  2-while_best_school       7-clock
102-lets_parse_apache_logs    3-until_best_school       8-for_ls
103-dig_the-data              4-if_9_say_hi                  9-to_file_or_not_to_file
10-fizzbuzz                   5-4_bad_luck_8_is_your_chance
sylvain@ubuntu$  ./8-for_ls
read_and_cut
tell_the_story_of_passwd
lets_parse_apache_logs
dig_the-data
fizzbuzz
for_best_school
while_best_school
until_best_school
if_9_say_hi
4_bad_luck_8_is_your_chance
superstitious_numbers
clock
for_ls
to_file_or_not_to_file
sylvain@ubuntu$ 
```
## 9. To file, or not to file
**Files:** [9-to_file_or_not_to_file](9-to_file_or_not_to_file)

Write a Bash script that gives you information about the `school` file.
Requirements:
* You must use `if` and, `else` (`case` is forbidden)
* Your Bash script should check if the file exists and print:
    * if the file exists: `school file exists`
    * if the file does not exist: `school file does not exist`
* If the file exists, print:
    * if the file is empty: `school file is empty`
    * if the file is not empty: `school file is not empty`
    * if the file is a regular file: `school is a regular file`
    * if the file is not a regular file: (nothing)

## 10. FizzBuzz
**Files:** [10-fizzbuzz](10-fizzbuzz)

Write a Bash script that displays numbers from 1 to 100.
Requirements:
* Displays `FizzBuzz` when the number is a multiple of 3 and 5
* Displays `Fizz` when the number is multiple of 3
* Displays `Buzz` when the number is a multiple of 5
* Otherwise, displays the number
* In a list format

## 11. Read and cut
**Files:** [100-read_and_cut](100-read_and_cut)

help: read
Write a Bash script that displays the content of the file /etc/passwd.

Your script should only display:
* username
* user id
* Home directory path for the user

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)
```
sylvain@ubuntu$ cat /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
libuuid:x:100:101::/var/lib/libuuid:
syslog:x:101:104::/home/syslog:/bin/false
messagebus:x:102:106::/var/run/dbus:/bin/false
landscape:x:103:109::/var/lib/landscape:/bin/false
sshd:x:104:65534::/var/run/sshd:/usr/sbin/nologin
pollinate:x:105:1::/var/cache/pollinate:/bin/false
vagrant:x:1000:1000::/home/vagrant:/bin/bash
colord:x:106:112:colord colour management daemon,,,:/var/lib/colord:/bin/false
statd:x:107:65534::/var/lib/nfs:/bin/false
sylvain:98:99:Sylvain:/home/sylvain:/bin/bash
puppet:x:108:114:Puppet configuration management daemon,,,:/var/lib/puppet:/bin/false
ubuntu:x:1001:1001:Ubuntu:/home/ubuntu:/bin/bash
sylvain@ubuntu$ ./100-read_and_cut
root:0:/root
daemon:1:/usr/sbin
bin:2:/bin
sys:3:/dev
sync:4:/bin
games:5:/usr/games
man:6:/var/cache/man
lp:7:/var/spool/lpd
mail:8:/var/mail
news:9:/var/spool/news
uucp:10:/var/spool/uucp
proxy:13:/bin
www-data:33:/var/www
backup:34:/var/backups
list:38:/var/list
irc:39:/var/run/ircd
gnats:41:/var/lib/gnats
nobody:65534:/nonexistent
libuuid:100:/var/lib/libuuid
syslog:101:/home/syslog
messagebus:102:/var/run/dbus
landscape:103:/var/lib/landscape
sshd:104:/var/run/sshd
pollinate:105:/var/cache/pollinate
vagrant:1000:/home/vagrant
colord:106:/var/lib/colord
statd:107:/var/lib/nfs
sylvain:99:/bin/bash
puppet:108:/var/lib/puppet
ubuntu:1001:/home/ubuntu
sylvain@ubuntu$ 
```
## 12. Tell the story of passwd
**Files:** [101-tell_the_story_of_passwd](101-tell_the_story_of_passwd)

Read:
* [IFS (internal field separator)](https://tldp.org/LDP/abs/html/internalvariables.html)
* [Understanding /etc/passwd](https://www.cyberciti.biz/faq/understanding-etcpasswd-file-format/)

The file `/etc/passwd` has already been covered in a previous project and you should be familiar with it. Today we will make up a story based on it.

Write a Bash script that displays the content of the file `/etc/passwd`, using the `while` loop + `IFS`.

Format: `The user USERNAME is part of the GROUP_ID gang, lives in HOME_DIRECTORY and rides COMMAND/SHELL. USER ID's place is protected by the passcode PASSWORD, more info about the user here: USER ID INFO`

Requirements:
* You must use the `while` loop (`for` and `until` are forbidden)

## 13. Let's parse Apache logs
**Files:** [102-lets_parse_apache_logs](102-lets_parse_apache_logs)

[Apache](https://en.wikipedia.org/wiki/Apache_HTTP_Server) is among the most popular web servers in the world, serving 50% of all active websites, no doubt that you will have to interact with it within your career.

As a Full-Stack Software Engineer, you have to master the art of parsing log files. Today we will do a simple parsing of Apache log access files.

Today the Customer Support department reported that a user reported that the site is being “buggy”. Not being a detailed description, you want to have a look at the Apache logs and gather data about the traffic.

Write a Bash script that displays the visitor IP along with the [HTTP status code](https://en.wikipedia.org/wiki/List_of_HTTP_status_codes) from the Apache log file.
Requirement:
* Format: IP HTTP_CODE
    * in a list format
    * See example
* You must use `awk`
* You are not allowed to use `while`, `for`, `until` and `cut`
* Download and commit the apache-access.log file along with your answers files
```
sylvain@ubuntu$ ./102-lets_parse_apache_logs | tail -n 10
185.130.5.207 301
185.130.5.207 301
91.224.140.223 200
62.210.142.23 304
92.222.20.166 304
180.76.15.19 200
2.1.201.36 304
198.58.99.82 304
50.116.30.23 304
209.133.111.211 200
sylvain@ubuntu$
```
## 14. Dig the data
**Files:** [103-dig_the-data](103-dig_the-data)

Now that you’ve parsed the Apache log file, let’s sort the data so you can get a better idea of what is going on.

Using what you did in the previous exercise, write a Bash script that groups visitors by IP and HTTP status code, and displays this data.

Requirements:
* The exact format must be:
    * OCCURENCE_NUMBER IP HTTP_CODE
    * In list format
* Ordered from the greatest to the lowest number of occurrences
    * See example
* You must use `awk`
* You are not allowed to use `while`, `for`, `until` and `cut`
```
sylvain@ubuntu$ ./103-dig_the-data | head -n 10
    141 130.0.236.153 200
    140 62.210.250.66 200
    117 103.243.26.232 404
    67 195.154.172.143 200
    60 78.154.190.29 200
    45 195.154.172.59 200
    41 62.210.248.185 200
    41 167.114.156.198 200
    36 2.1.201.36 304
    36 195.154.172.53 200
sylvain@ubuntu$
```

### You Can Read:
* [Loops sample](https://tldp.org/LDP/Bash-Beginners-Guide/html/sect_09_01.html)
* [Variable assignment and arithmetic](https://tldp.org/LDP/abs/html/ops.html)
* [Comparison operators](https://tldp.org/LDP/abs/html/comparison-ops.html)
* [File test operators](https://tldp.org/LDP/abs/html/fto.html)
* [Make your scripts portable](https://www.cyberciti.biz/tips/finding-bash-perl-python-portably-using-env.html)
