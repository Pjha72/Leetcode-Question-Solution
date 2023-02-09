# Tom and String
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list <strong>S </strong>consisting&nbsp;of strings&nbsp;separated by a space.&nbsp;Hash the list using the hash rule and a long string X&nbsp;given below&nbsp;and return the hash value.<br>
String X: <strong>"abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ".</strong></span><br>
<span style="font-size:18px"><strong>Hash Rule:&nbsp;</strong>Hash is the summation of all the character values in the input:<strong>&nbsp;(currentIndex + (position of the character In the string initial) ).</strong>&nbsp;And then this hash is multiplied by the number of strings in the list.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">S = aA1 b</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">132</span>
<strong><span style="font-size:18px">Explanation: 
</span></strong><span style="font-size:18px">List is [<strong>"aA1", "b"</strong>]</span>
<span style="font-size:18px">a: 0 + 0 = 0
A: 1 + 36 = 37
1: 2 + 26 = 28

b: 0 + 1 = 1</span>
<span style="font-size:18px">So, 2*(0+1+37+28) = 2*(66) = 132</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = aa BB cc DD
<strong>Output:</strong>
640</span>
<span style="font-size:18px"><strong>Explanation: 
</strong>List is [<strong>"aa", "BB","cc","DD"</strong>]</span>
<span style="font-size:18px">a: 0 + 0 = 0
a: 1 + 0 = 1</span>

<span style="font-size:18px">B: 0 + 37 = 37
B: 1 + 37 = 38</span>

<span style="font-size:18px">c: 0 + 2 = 2
c: 1 + 2 = 3</span>

<span style="font-size:18px">D: 0 + 39 = 39
D: 1 + 39 = 40</span>
<span style="font-size:18px">So, 4*(0+1+37+38+2+3+39+40)= 4*(160)=640</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>hashString()</strong>&nbsp;which takes string S, list of space-separated strings&nbsp;as a parameter&nbsp;and returns the hash value of the list.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(Sum of the length of all the strings)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(Length of initial string)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Length of a string ≤ 30<br>
1 ≤ Number of strings in a list ≤ 20</span></p>
</div>