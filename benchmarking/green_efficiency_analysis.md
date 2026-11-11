### Measurement Methodology

To measure how long does the program run for we uses time.h library
To methodology was relatively straightforward：
Using clock() from time.h

The idea is the capture the time right before the program we want to "benchmark" and right after it finish. Basically;

Flow
start_time = clock()
Execute the function/program we want to task 
end_time = clock()

After recording those two value; start_time and end_time we compute the runtime by subtracting start_time from end_time. 

The final step is to covert the result into seconds; by dividing the value by a system constant CLOCKS_PER_SEC. The reason for that is the return value of clock() is "approximate process time consumed" measured in clock ticks; basically not human readable comparing to time measurement such as seconds (s) that we are more familiar with

### Observed Performance Differences

We were given two algorithms both with the intention to count the number of even numbers in a given array. To compare the performance of two implementations we are using an average by running a benchmark three times. The result is as follow;
count_even_naive (Algo A) avr. execution time: 1.73137
count_even_single_pass (Algo B) avr. execution time: 0.0000683

As can be seen, Algo B is significantly faster than Algo A, to be exact, ~25,337 faster according to the calculation.

This result is obtained by calculating the Speedup Ratio:
count_even_naive / count_even_single_pass

This is due to the use of nested "for loop" count_even_naive.

### Relation Between Runtime and Energy Consumption

Energy consumption can be calculated using the following formula;
E = P * t
E: Energy consumption
P: Power
t: time

As can be seen E is proportionate to P or t; implying if power stays the same (assumption) than as t increase such as increase runtime, the energy consumption would increase accordingly

Hence longer runtime usually mean higher energy consumption

### Limitations of the Experiment

1. Despite the result recorded seems fairly consistent; less than 0.0001 in difference, there number of times we executed the program may not be enough to eliminate factors such as program running in the background that might skew the result

2. We are deducing power consumption indirectly via runtime. It would be more accurate if we had direct access to tools/hardware such as power monitor to see the actual energy consumption 

### Practical Engineering Takeaway

Optimising code not only improves runtime performance, but it is also much more environmentally friendly as it consumes less energy. In order to be able to optimise our code, we need to have a solid grasp of programming because it requires knowing how exactly code works under the hood. Hence, learning the fundamentals is an important part of writing efficient software.