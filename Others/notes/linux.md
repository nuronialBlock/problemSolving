# Linux
============

### using **cut**

By using cut, one can read all necessary text from a file in a line by line basis.

suppose, if we cat kanaMama.txt we get:

Halum 

Bhalum

Talum

But what if we are only interested in  2nd and 5th charecter ?

well, then-


```
cut -c 2,6 kanaMama.txt // assuming kanaMama.txt is in home folder  

``` 

[Resource link](http://www.folkstalk.com/2012/02/cut-command-in-unix-linux-examples.html)


### using **head** and **tail**

If we use **head** in a file, then we can see the first *n* lines of the file.

And, if we use **tail** in a file, then we can see the last *n* lines of the file.

```
head kanaMama.txt

```

So, this command will show first 10 lines of the **kanaMama.txt**. And, will do reverse for **tail**.

But, what if we are interested on the first 2/3 lines or first 20/30 charecters? 

Well, then we need to use arguments. Arguments are:

n - for lines 

c - for charecters


```
head -n 2

head -c 20

```

First one will show first 2 lines, and  second one will show first 20 charecters. And, Opposite will work for tail. 

But, There is an interesting fact for **tail**. That is - **tail** have an argument "follow". we can use it by -f. 

If you do `tail -f kanaMama.txt`, you will see the program is still running. suppose we add something on *kanaMama.txt* then the terminal will show new lines.

```
tail -f  kanaMama.txt

```

========

### Using **tr** 


[Video Resource: 1](https://youtu.be/RNuh1rqKIbg) 

[Text Resource: 1](http://www.thegeekstuff.com/2012/12/linux-tr-command/) 


========

### Using **sort**


[Video Resource: 1](https://youtu.be/h5MpG3QYSSk) 

[Text Resource: 1](http://www.thegeekstuff.com/2013/04/sort-files/) 


________

### Using **uniq** 

[Video Resource: 1](https://youtu.be/VRrd9ErU13w)

[Text Resource: 1](http://www.thegeekstuff.com/2013/05/uniq-command-examples/) 

*Practice*

- [1](https://www.hackerrank.com/contests/text-processing-tools-in-linux/challenges/text-processing-in-linux-the-uniq-command-2)

### using **paste**
[Text Resource: 1](http://www.theunixschool.com/2012/07/10-examples-of-paste-command-usage-in.html)
[Video Resource: 1](https://youtu.be/DCJPFjS_vss)