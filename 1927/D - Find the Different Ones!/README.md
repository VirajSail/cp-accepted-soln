<h2><a href="https://codeforces.com/contest/1927/problem/D" target="_blank" rel="noopener noreferrer">1927D — Find the Different Ones!</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1927D](https://codeforces.com/contest/1927/problem/D) |

## Topics
`binary search` `brute force` `data structures` `dp` `dsu` `greedy` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Find the Different Ones!</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>5 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ of $$$n$$$ integers, and $$$q$$$ queries.</p><p>Each query is represented by two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le n$$$). Your task is to find, for each query, two indices $$$i$$$ and $$$j$$$ (or determine that they do not exist) such that:</p><ul> <li> $$$l \le i \le r$$$; </li><li> $$$l \le j \le r$$$; </li><li> $$$a_i \ne a_j$$$. </li></ul><p>In other words, for each query, you need to find a pair of different elements among $$$a_l, a_{l+1}, \dots, a_r$$$, or report that such a pair does not exist.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The descriptions of the test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^6$$$) — the elements of the array $$$a$$$.</p><p>The third line of each test case contains a single integer $$$q$$$ ($$$1 \le q \le 2 \cdot 10^5$$$) — the number of queries.</p><p>The next $$$q$$$ lines contain two integers each, $$$l$$$ and $$$r$$$ ($$$1 \le l  \lt  r \le n$$$) — the boundaries of the query.</p><p>It is guaranteed that the sum of the values of $$$n$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$. Similarly, it is guaranteed that the sum of the values of $$$q$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each query, output two integers separated by space: $$$i$$$ and $$$j$$$ ($$$l \le i, j \le r$$$), for which $$$a_i \ne a_j$$$. If such a pair does not exist, output $$$i=-1$$$ and $$$j=-1$$$.</p><p>You may separate the outputs for the test cases with empty lines. This is not a mandatory requirement.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005640966313957468" id="id0008082477200442006" class="input-output-copier">Copy</div></div><pre id="id005640966313957468"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 1 2 1 1</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">30 20 20 10 10 20</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 6</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5 2 3 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 4 3 2 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2 3 1 4 2</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 2</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 4</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2 4</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">2 5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">4 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0003356645889832188" id="id006273750929509992" class="input-output-copier">Copy</div></div><pre id="id0003356645889832188">2 3
-1 -1
1 3

2 1
-1 -1
4 2
4 6
5 3

1 2
1 2
2 3
3 2

1 3
2 4
3 4
5 3
5 4

1 2
4 2
1 3
2 3
3 2
5 4
5 4
</pre></div></div></div>