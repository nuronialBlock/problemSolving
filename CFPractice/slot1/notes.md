# Notes

=============================

**Contest** - 356 Div2

**problem No.** - 680C

**Idea**

For this problem, our range is [2, 100]. So, if we wanna check a number is composite or not
we only need to check upto 50. And, all composite numbers are made of prime numbers. So, 
we need to query that whether the _hidden number_ is divisible by prime numbers or not, and we
will make a count how much number we get. 

Now, the cases will be:

- count = 0: 
	- well, that mean, the hidden number is a prime number > 50. As we only listed prime 
	numbers from 1 to 50, this number must a be a prime after 50. So, the ans is prime.

- count = 1:
	- if the prime number we get, it's square is > 100. Then the answer is prime.  
	- otherwise ask a query for (prime number) ^ 2. 
		- if it's reply is yes. Then the ans is composite
		- otherwise the ans is prime.

- count > 1:
	- The ans is composite.  


==============================