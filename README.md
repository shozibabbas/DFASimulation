<h1>DFASimulation</h1>
<p>A tutorial on How to use goto and switch statements to implement DFAs</p>
<h2>Implementation</h2>
<p><strong>GOTO</strong> statement is the quickest way to move to another part of the code and take the execution control with itself.<br />We make each state of the DFA into a label. Each label will have its own <em>IF</em> conditions which will be responsible for directing the flow to another state by calling GOTO with the relevant label.</p>
<p>for example, if I was to move from state S1 to state S2 (consider the first picture below), I would have to take an input of "a" to proceed and discard any other alphabet. Following code (ofcourse its in the Source file too!) will be responsible for doing the foretold action:</p>
<pre>
S1:
	if (input[i] == 'a')
		goto S2;
	else
		goto TRAP;
</pre>
<p><strong>SWITCH</strong> statement requires a little bit more understanding than GOTO.</p>
<p>There is a line of code written in both SWITCH functions:</p>
<pre>
int cn = 1;
</pre>
<p>The mentioned variable denotes the current state. You can see that I have written numbers along with the state name (consider the second picture). While iterating in a while loop till the characters in the string finish, I will be changing the current state number for the switch statement to work. In each iteration of the while loop, the switch statement will transfer the control based on the value of variable cn. </p>
<p>For example, if I was to transfer my control from state S1 to S2 using switch, I will do the following:</p>
<pre>
case 1:
			if (input[i] == 'a')
				cn = 2;
			else
				cn = 0;
			break;
</pre>
<p>That is case 1 (for state S1) which will transfer control to case 2 (as the value of cn changes to case 2).</p>
<h2>Part 1</h2>
<p>This part is an implementation to the Regular Language: <br /><strong>a(bb)*bc</strong></p>
<img src="https://i.imgur.com/VroxYVC.jpg" />
<p>The alphabets for this DFA are "a,b,c"</p>
<pre>bool gotoFuncPart1();</pre><p>This is the implementation for goto statement</p>
<pre>bool switchFuncPart1();</pre><p>This is the implementation for goto statement</p>
<h2>Part 2</h2>
<p>This part is an implementation to the Regular Language: <br /><strong>L(M) = {w | w € {a, b}* and contains even number of a’s and b’s}</strong></p>
<img src="https://i.imgur.com/bqvGCeS.jpg" />
<p>The alphabets for this DFA are "a,b"</p>
<pre>bool gotoFuncPart2();</pre><p>This is the implementation for goto statement</p>
<pre>bool switchFuncPart2();</pre><p>This is the implementation for goto statement</p>
<h2>Bonus</h2>
<p>• Following loop ensures that the string contains valid alphabets. This is implemented as an extra check.</p>
<pre>
for (int a = 0; a < input.length(); a++) {
		if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
			continue;
		else {
			cout << "String not recognized" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
</pre>
<p>• You might have seen that I have used <pre>getline(cin, input);</pre> to get input. This function allows me to take spaces and empty strings as input.</p>
