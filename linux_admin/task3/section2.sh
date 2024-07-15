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
