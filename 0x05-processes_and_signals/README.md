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
