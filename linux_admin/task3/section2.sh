#1
history > commands.txt
#2 
# in the .bashrc file add 
echo "date is $(date)"
PS1='> '
#3
wc -w commands.txt
#4 
# cat filename1 | cat filename2 -> will be the same as cat filename2
# ls | rm  -> this cases an error as rm doesn't expect arguments from stdin
#ls /etc/passwd | wc –l -> prints the count of lines in the passwd file
#5 
find / -name ".profile"
#6
ls -i /
ls -i /etc
ls -i /etc/hosts
#7
sudo ln -s /etc/passwd /boot/passwd
#8
not possible because hard links cannot span across different file systems or partitions. 
#9
# > is the default secondary prompt in a shell, typically indicating that the shell expects more input to complete a command or a block of input.
# to change it export PS2=":"
