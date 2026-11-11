### Result

Naive algorithm result: 625025000
Naive algorithm time: 1.377369 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000068 seconds

Naive algorithm result: 625025000
Naive algorithm time: 1.727772 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000068 seconds

Naive algorithm result: 625025000
Naive algorithm time: 1.732591 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000069 seconds

### Analysis
Average execution time for "count_even_naive"
(1.733769 + 1.727772 + 1.732591)/3 = 1.7313773333
Average execution time for "count_even_single_pass"
(0.000068 + 0.000068 + 0.000069)/3 = 0.00006833333333 

Formula used: 
Speedup Ratio -> count_even_naive / count_even_single_pass
1.7313773333 / 0.00006833333333 = 25,337.2292690408

Therefore implementation count_even_naive is ~25337 times slower than count_even_single_pass