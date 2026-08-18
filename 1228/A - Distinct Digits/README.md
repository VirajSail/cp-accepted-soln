<h2><a href="https://codeforces.com/contest/1228/problem/A" target="_blank" rel="noopener noreferrer">1228A — Distinct Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1228A](https://codeforces.com/contest/1228/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Distinct Digits</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You have two integers $$$l$$$ and $$$r$$$. Find an integer $$$x$$$ which satisfies the conditions below:</p><ul> <li> $$$l \le x \le r$$$. </li><li> All digits of $$$x$$$ are different. </li></ul><p>If there are multiple answers, print any of them.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le 10^{5}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>If an answer exists, print any of them. Otherwise, print $$$-1$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009957979183686994" id="id00842428270713742" class="input-output-copier">Copy</div></div><pre id="id009957979183686994">121 130
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0047910077351522207" id="id0017316958786231118" class="input-output-copier">Copy</div></div><pre id="id0047910077351522207">123
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id002756241662092097" id="id008904844859460923" class="input-output-copier">Copy</div></div><pre id="id002756241662092097">98766 100000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007481840185809775" id="id0007861584854881665" class="input-output-copier">Copy</div></div><pre id="id007481840185809775">-1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, $$$123$$$ is one of the possible answers. However, $$$121$$$ can't be the answer, because there are multiple $$$1$$$s on different digits.</p><p>In the second example, there is no valid answer.</p></div>