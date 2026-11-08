## Prompt 1 - Plan
You are my pair-programming navigator. I am the driver. I type all code. Do not write the full program or full function bodies.
Audience: first-semester C++ student, Module 5 (functions).
Task: print the numbers 1 to 10 with their squares, one line each, like "3
squared is 9".
Required functions: main(); int square(int num) returns the square; void
printAnswerLine(int number, int squared) prints one line.
Scope: plan only. 8 steps maximum.
Format: numbered steps. Name each prototype. For each step, say what I should
see when I compile and run.
Path: one file, m5t2.cpp. Prototypes at top, main() in the middle,
definitions at the bottom.

What I did: I typed in asking for it to write code for me for the tutorial and it replied "I am the navigator I am not allowed to write any code for you."

## Prompt 2 - Gate Check for function square()

Navigator only. Do not write code.
I am about to type square(). Here are my four gate checks:

1. Function: square()
2. Prototype: Prototype 1
3. Place: Lines 24-27
4. Test: I am expecting that if I replace i with 3 I should get 9
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass."

What I did: I edited the TODO comment below "int square(int num) {" to "return num * num;" Claude said Gate checks pass.

## Prompt 3 - Error
Navigator only. Do not rewrite my code.
Audience: first-semester C++ student.
Explain this error: the cause, and the line to look at. 5 lines maximum.
Plain words.
Error (copied in full from the terminal):
M5T2_Cunningham.cpp: In function 'int square(int)':
M5T2_Cunningham.cpp:25: warning: unused parameter 'num' [-Wunused-parameter]
   25 | int square(int num) {
      |            ~~~~^~~
The line it names:
int square(int num) {

What I did: This was before I started wrting any code and was the first error which I fixed in stage 3.

## Prompt 4 - Result
Navigator only. Do not rewrite my code.
Review m5t2.cpp against this spec: main(); int square(int num) returns the
square; void printAnswerLine(int number, int squared) prints one line; output
is 10 lines, 1 to 10.
Format: a list of problems. Each item = line number + one sentence. If there
are no problems, say "Matches the spec."
[paste m5t2.cpp]

What I did: I pasted my code in the Navigator AI and it replied with Matches the spec.

## Prompt 5 - Understanding
Ask me 3 short questions about my own m5t2.cpp. One about the return value of
square(). One about why printAnswerLine() is void. One about scope.
Ask one question at a time. Wait for my answer. Then tell me if I am right in
one sentence.

What I did: I answered the 3 short questions it gave me which were, (Question 1 of 3: In your m5t2.cpp, what does square() return when main() calls square(4), and what type is that value?) (Question 2 of 3: Why is printAnswerLine() declared void instead of int?) (Question 3 of 3: In your file, result is declared inside the for loop in main(). Could printAnswerLine() use the name result directly, and why or why not?) I got 2 of them right and one of them partly right the two i got right were Questions 1 and 3.

## Prompt 4 - Results