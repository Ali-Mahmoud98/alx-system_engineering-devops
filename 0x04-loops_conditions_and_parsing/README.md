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

### You Can Read:
    * [Loops sample](https://tldp.org/LDP/Bash-Beginners-Guide/html/sect_09_01.html)
    * [Variable assignment and arithmetic](https://tldp.org/LDP/abs/html/ops.html)
    * [Comparison operators](https://tldp.org/LDP/abs/html/comparison-ops.html)
    * [File test operators](https://tldp.org/LDP/abs/html/fto.html)
    * [Make your scripts portable](https://www.cyberciti.biz/tips/finding-bash-perl-python-portably-using-env.html)

