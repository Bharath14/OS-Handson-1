/* Program Number: 11c
Student Name: Ellanti Bharath Sai; 
Register Number: IMT2018022
Date:25-02-2021
Description: This program duplicates the file descriptor using fcntl() and append the file using both
the descriptors.
*/

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = open("11.txt",O_WRONLY|O_APPEND);
    int copyfd = fcntl(fd,F_DUPFD,5);
    write(fd,"I will be in file with original fd\n",36);
    write(copyfd,"I will be in file with copy fd\n",32);
    close(fd);
    return 0;
}