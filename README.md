# OS_5

Alon Barak & Idan Philosoph. <br>

The fifth assignment of the Operating Systems Course.<br>
This repo contains an implementation of a forked server which serves as a stack to its client.<br>
Each Client preform as a sub-process of the Server, sub-processes communicate with each-other using mmap(). <br>
In this project we were inspired by https://github.com/andrestc/linux-prog/blob/master/ch7/malloc.c repo,<br>
for the Malloc and Free functions.<br>

- The server can handle up to 10 clients in real time.<br>
- The implementation of the Stack and the Dynamic Memory Allocation functions you can find at the "Stack.cpp" file.<br>

## How to run the Project on your Machine:<br>

1. Git Clone the Project to your Machine:
```ruby
$ git clone https://github.com/Pianissimo7/OS5.git
```
2. Compile the code : 
```ruby
$ make all
```
3. Run the Server :
```ruby
$ ./server
```
4. Run a Client :
```ruby
$ ./client 127.0.0.1
```

- Please noitce that the server is listen on port 3600 at 127.0.0.1 

- P.S. The client connect directly to the server and no work should be done by the user!

## More Information: <br>

You might find the next videos very helpful in understanding the principles that guide us throught the Project, enjoy :-) <br>
- https://www.youtube.com/watch?v=8hVLcyBkSXY <br>
- https://www.youtube.com/watch?v=A5vyIcBMPKo <br>
- https://www.youtube.com/watch?v=L5BlpPU_muY <br>
