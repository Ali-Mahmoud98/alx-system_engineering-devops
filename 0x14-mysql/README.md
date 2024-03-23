# 0x14. MySQL

## installing Mysql 5.7.x steps 
1. visit [Signature Checking Using GnuPG](https://dev.mysql.com/doc/mysql-installation-excerpt/5.7/en/checking-gpg-signature.html)
2. make file (for example: signature.key) and put into this file the PGP key
3. do the following commands
```
sudo apt-key add signature.key
sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys B7B3B788A8D3785C
sudo sh -c 'echo "deb http://repo.mysql.com/apt/ubuntu bionic mysql-5.7" >> /etc/apt/sources.list.d/mysql.list'
sudo apt-get update
sudo apt-cache policy mysql-server
sudo apt install -f -y mysql-client=5.7* mysql-community-server=5.7* mysql-server=5.7*
```
4. check version
```
mysql --version
mysql -u root -p
```


