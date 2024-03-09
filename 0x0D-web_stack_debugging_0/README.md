# 0x0D. Web stack debugging #0

## Nice To READ

### Network basics
[What is a protocol](https://www.techtarget.com/searchnetworking/definition/protocol)
[What is an IP address](https://computer.howstuffworks.com/internet/basics/what-is-an-ip-address.htm)
[What is TCP/IP](https://www.avast.com/c-what-is-tcp-ip#)
[What is an Internet Protocol (IP) port?](https://www.lifewire.com/port-numbers-on-computer-networks-817939)

### Docker
[What is Docker and why is it popular?](https://www.zdnet.com/article/what-is-docker-and-why-is-it-so-darn-popular/)

**Take note:** The following instructions are run in a ubuntu-xenial virtual machine setup using Vagrant. To do the same, you can also install docker in any Vagrant virtual machine, or install docker on your host OS (Windows, Linux or Mac OS)

Let’s first pull a Docker image and run a container:
```
vagrant@ubuntu-xenial:~$ docker ps
CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS              PORTS               NAMES
vagrant@ubuntu-xenial:~$ docker run -d -ti ubuntu:16.04
Unable to find image 'ubuntu:16.04' locally
16.04: Pulling from library/ubuntu
34667c7e4631: Pull complete
d18d76a881a4: Pull complete
119c7358fbfc: Pull complete
2aaf13f3eff0: Pull complete
Digest: sha256:58d0da8bc2f434983c6ca4713b08be00ff5586eb5cdff47bcde4b2e88fd40f88
Status: Downloaded newer image for ubuntu:16.04
e1fc0d4bbb5d3513b8f7666c91932812da7640346f6e05b7cfc3130ddbbb8278
vagrant@ubuntu-xenial:~$ docker ps
CONTAINER ID        IMAGE               COMMAND             CREATED              STATUS              PORTS               NAMES
e1fc0d4bbb5d        ubuntu:16.04        "/bin/bash"         About a minute ago   Up About a minute                       keen_blackwell
vagrant@ubuntu-xenial:~$
```
Note that `docker` command will pull the Ubuntu docker container image from the Internet and run it. I let you look at the meaning of the flags using the command `docker run --help`, the main idea is that it keeps the container up and running.

To execute a command on the Docker container, use `docker exec`:
```
vagrant@ubuntu-xenial:~$ docker exec -i e1fc0d4bbb5d hostname
e1fc0d4bbb5d
vagrant@ubuntu-xenial:~$ hostname
ubuntu-xenial
vagrant@ubuntu-xenial:~$
If you want to connect to your Docker container and use Bash, you need to use docker exec -ti:

vagrant@ubuntu-xenial:~$ docker exec -ti e1fc0d4bbb5d /bin/bash
root@e1fc0d4bbb5d:/# echo "I am in $(hostname) Docker container"
I am in e1fc0d4bbb5d Docker container
root@e1fc0d4bbb5d:/# exit
exit
vagrant@ubuntu-xenial:~$
```
If you want to stop a container, use docker stop:
```
vagrant@ubuntu-xenial:~$ docker ps
CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS              PORTS               NAMES
e1fc0d4bbb5d        ubuntu:16.04        "/bin/bash"         5 minutes ago       Up 5 minutes                            keen_blackwell
vagrant@ubuntu-xenial:~$ docker stop e1fc0d4bbb5d
e1fc0d4bbb5d
vagrant@ubuntu-xenial:~$ docker ps
CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS              PORTS               NAMES
vagrant@ubuntu-xenial:~$
```

### Important commands
[Youtube video First 5 Commands When I Connect on a Linux Server](https://www.youtube.com/watch?v=1_gqlbADaAw)

When you connect to a server/machine/computer/container you want to understand what’s happened recently and what’s happening now, and you can do this with [5 commands](https://www.linux.com/training-tutorials/first-5-commands-when-i-connect-linux-server/) in a minute or less:

* w
    * shows server [uptime](https://www.techtarget.com/whatis/definition/uptime-and-downtime) which is the time during which the server has been continuously running
    * shows which users are connected to the server
    * load average will give you a good sense of the server health - (read more about load [here](https://scoutapm.com/blog/understanding-load-averages) and [here](https://www.brendangregg.com/blog/2017-08-08/linux-load-averages.html))
* history
    * shows which commands were previously run by the user you are currently connected to
    * you can learn a lot about what type of work was previously performed on  the machine, and what could have gone wrong with it
    * where you might want to start your debugging work
* top
    * shows what is currently running on this server
    * order results by CPU, memory utilization and catch the ones that are resource intensive
* df
    * shows disk utilization
* netstat
    * what port and IP your server is listening on
    * what processes are using sockets
    * try `netstat -lpn` on a Ubuntu machine

## 0. Give me a page!
**Files:** [0-give_me_a_page](0-give_me_a_page)

Be sure to read the **Docker** concept page

In this first debugging project, you will need to get [Apache](https://en.wikipedia.org/wiki/Apache_HTTP_Server) to run on the container and to return a page containing `Hello Holberton` when querying the root of it.

Example:
```
vagrant@vagrant:~$ docker run -p 8080:80 -d -it holbertonschool/265-0
47ca3994a4910bbc29d1d8925b1c70e1bdd799f5442040365a7cb9a0db218021
vagrant@vagrant:~$ docker ps
CONTAINER ID        IMAGE                   COMMAND             CREATED             STATUS              PORTS                  NAMES
47ca3994a491        holbertonschool/265-0   "/bin/bash"         3 seconds ago       Up 2 seconds        0.0.0.0:8080->80/tcp   vigilant_tesla
vagrant@vagrant:~$ curl 0:8080
curl: (52) Empty reply from server
vagrant@vagrant:~$
```
Here we can see that after starting my Docker container, I `curl` the port `8080` mapped to the Docker container port `80`, it does not return a page but an error message. Note that you might also get the error message `curl: (52) Empty reply from server`.
```
vagrant@vagrant:~$ curl 0:8080
Hello Holberton
vagrant@vagrant:~$
```
After connecting to the container and fixing whatever needed to be fixed (here is your mission), you can see that curling port 80 return a page that contains `Hello Holberton`. Paste the command(s) you used to fix the issue in your answer file.
