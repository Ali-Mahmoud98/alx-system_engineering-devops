# 0x05. Processes and signals
**It is usefule to read:**
* [Linux PID](https://www.linfo.org/pid.html)
* [Linux process](https://www.thegeekstuff.com/2012/03/linux-processes-environment/)
* [Linux signal](https://www.educative.io/answers/what-are-linux-signals)
* [Process management in linux](https://www.digitalocean.com/community/tutorials/process-management-in-linux)

**Important Commands:** `ps`, `pgrep`, `pkill`, `kill`, `exit`, `trap`

## 5. Don't stop me now!
**Files:** [5-dont_stop_me_now](5-dont_stop_me_now)

We stopped our `4-to_infinity_and_beyond` process using `ctrl+c` in the previous task, there is actually another way to do this.

Write a Bash script that stops `4-to_infinity_and_beyond` process.
Requirements:
* You must use `kill`

Terminal #0
```
sylvain@ubuntu$ ./4-to_infinity_and_beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
Terminated
sylvain@ubuntu$ 
```
Terminal #1
```
sylvain@ubuntu$ ./5-dont_stop_me_now 
sylvain@ubuntu$ 
```
I opened 2 terminals in this example, started by running my `4-to_infinity_and_beyond` Bash script in terminal #0 and then moved on terminal #1 to run ``5-dont_stop_me_now`. We can then see in terminal #0 that my process has been terminated.

## 6. Stop me if you can
**Files:** [6-stop_me_if_you_can](6-stop_me_if_you_can)

Write a Bash script that stops `4-to_infinity_and_beyond` process.

Requirements:
* You cannot use kill or killall

Terminal #0
```
sylvain@ubuntu$ ./4-to_infinity_and_beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
Terminated
sylvain@ubuntu$ 
```
Terminal #1
```
sylvain@ubuntu$ ./6-stop_me_if_you_can
sylvain@ubuntu$ 
```
## 7. Highlander
**Files:** [7-highlander](7-highlander)

Write a Bash script that displays:
* `To infinity and beyond` indefinitely
* With a `sleep 2` in between each iteration
* `I am invincible!!!` when receiving a `SIGTERM` signal

Make a copy of your `6-stop_me_if_you_can` script, name it `67-stop_me_if_you_can`, that kills the `7-highlander` process instead of the `4-to_infinity_and_beyond` one.

Terminal #0
```
sylvain@ubuntu$ ./7-highlander
To infinity and beyond
To infinity and beyond
I am invincible!!!
To infinity and beyond
I am invincible!!!
To infinity and beyond
To infinity and beyond
To infinity and beyond
I am invincible!!!
To infinity and beyond
^C
sylvain@ubuntu$ 
```
Terminal #1
```
sylvain@ubuntu$ ./67-stop_me_if_you_can 
sylvain@ubuntu$ ./67-stop_me_if_you_can
sylvain@ubuntu$ ./67-stop_me_if_you_can
sylvain@ubuntu$ 
```

## 8. Beheaded process
**Files:** [8-beheaded_process](8-beheaded_process)

Write a Bash script that kills the process 7-highlander.

Terminal #0
```
sylvain@ubuntu$ ./7-highlander 
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
Killed
sylvain@ubuntu$ 
```
Terminal #1
```
sylvain@ubuntu$ ./8-beheaded_process
sylvain@ubuntu$
``` 
I started `7-highlander` in Terminal #0 and then run `8-beheaded_process` in terminal #1 and we can see that the `7-highlander` has been killed.

## 9. Process and PID file
**Files:** [100-process_and_pid_file](100-process_and_pid_file)

Write a Bash script that:
* Creates the file `/var/run/myscript.pid` containing its PID
* Displays `To infinity and beyond` indefinitely
* Displays `I hate the kill command` when receiving a SIGTERM signal
* Displays `Y U no love me?!` when receiving a SIGINT signal
* Deletes the file `/var/run/myscript.pid` and terminates itself when receiving a SIGQUIT or SIGTERM signal
```
sylvain@ubuntu$ sudo ./100-process_and_pid_file
To infinity and beyond
To infinity and beyond
^CY U no love me?!
```
Executing the `100-process_and_pid_file` script and killing it with `ctrl+c`.
Terminal #0
```
sylvain@ubuntu$ sudo ./100-process_and_pid_file
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
To infinity and beyond
I hate the kill command
sylvain@ubuntu$ 
```
Terminal #1
```
sylvain@ubuntu$ sudo pkill -f 100-process_and_pid_file
sylvain@ubuntu$ 
```
Starting `100-process_and_pid_file` in the terminal #0 and then killing it in the terminal #1.

## 10. Manage my process
**Files:** [101-manage_my_process](101-manage_my_process) | [manage_my_process](manage_my_process)

* Its good to read:
    * [&](https://bashitout.com/2013/05/18/Ampersands-on-the-command-line.html)
    * [init.d](https://www.ghacks.net/2009/04/04/get-to-know-linux-the-etcinitd-directory/)
    * [Daemon](https://en.wikipedia.org/wiki/Daemon_%28computing%29)
    * [Positional parameters](https://www.gnu.org/software/bash/manual/html_node/Positional-Parameters.html)

man: `sudo`
Programs that are detached from the terminal and running in the background are called daemons or processes, need to be managed. The general minimum set of instructions is: `start`, `restart` and `stop`. The most popular way of doing so on Unix system is to use the init scripts.

Write a `manage_my_process` Bash script that:
* Indefinitely writes `I am alive!` to the file `/tmp/my_process`
* In between every `I am alive!` message, the program should pause for 2 seconds

Write Bash (init) script `101-manage_my_process` that manages `manage_my_process`. (both files need to be pushed to git)
Requirements:
* When passing the argument start:
    * Starts `manage_my_process`
    * Creates a file containing its PID in `/var/run/my_process.pid`
    * Displays `manage_my_process` started
* When passing the argument stop:
    * Stops `manage_my_process`
    * Deletes the file `/var/run/my_process.pid`
    * Displays `manage_my_process` stopped
* When passing the argument restart
    * Stops `manage_my_process`
    * Deletes the file `/var/run/my_process.pid`
    * Starts `manage_my_process`
    * Creates a file containing its PID in `/var/run/my_process.pid`
    * Displays `manage_my_process` restarted
* Displays Usage: `manage_my_process {start|stop|restart}` if any other argument or no argument is passed.

**Note** that this init script is far from being perfect (but good enough for the sake of manipulating process and PID file), for example we do not handle the case where we check if a process is already running when doing `./101-manage_my_process` start, in our case it will simply create a new process instead of saying that it is already started.

```
sylvain@ubuntu$ sudo ./101-manage_my_process
Usage: manage_my_process {start|stop|restart}
sylvain@ubuntu$ sudo ./101-manage_my_process start
manage_my_process started
sylvain@ubuntu$ tail -f -n0 /tmp/my_process 
I am alive!
I am alive!
I am alive!
I am alive!
^C
sylvain@ubuntu$ sudo ./101-manage_my_process stop
manage_my_process stopped
sylvain@ubuntu$ cat /var/run/my_process.pid 
cat: /var/run/my_process.pid: No such file or directory
sylvain@ubuntu$ tail -f -n0 /tmp/my_process 
^C
sylvain@ubuntu$ sudo ./101-manage_my_process start
manage_my_process started
sylvain@ubuntu$ cat /var/run/my_process.pid 
11864
sylvain@ubuntu$ sudo ./101-manage_my_process restart
manage_my_process restarted
sylvain@ubuntu$ cat /var/run/my_process.pid 
11918
sylvain@ubuntu$ tail -f -n0 /tmp/my_process 
I am alive!
I am alive!
I am alive!
^C
sylvain@ubuntu$ 
```
