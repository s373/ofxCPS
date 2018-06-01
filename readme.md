## ofxCPS

Utility program to display Clicks per Second count \<ClicksPerSecond> and addon \<ofxCPS>.

```
App to display Clicks Per Second.

Your fingers are being strained while you play stupid / stolen games.

You have 5 fingers, and are moving only 2.

What about your other 5 fingers?

Try to click with 5 fingers, 1 at a time,

cyclically, any mouse button.

	Same button, or cross buttons.

		Change Hands.

Exercise normal clicks, butterfly clicks, jitter click,
drag click, tap click, etc.

I would only advise you to use normal & butterfly clicks,
others are stressful towards your hands.

Report errors/issues with your stats.

Try to keep CPS count near 0.

```


#make

```
0. install any linux os

1. download of 1.0.0, extract zip files

2. cd  of/scripts/linux/*

3. read/analyse instructions in files 'install_dependencies.sh', 'install_codexs.sh'

4. read files, if instructions are ok, the run (careful):

	- sudo ./install_dependencies.sh

	- sudo ./install_codexs.sh  ( You don't need this codexs )

5. go take a walk or something

6. if there were errors, when you have the shell back at your command:
look at the first error only. if you can't look at the 1st error due
to extreme error verbosity and exceeds your terminal line memory, then
try ( make 2>&1 | grep error | less). with this instruction, you can
use cursor keys to navigate the full output or the errors and you'll
be able to see error 0.

7. if there are errors, repeat ad eternum 5, 6, until you
bypass this loop / step.

8. once you have oflib compiled, you can then proceed to compiling this program.

	cd /of/addons/ofxCPS, type make, then make run.

9. program should be running. report issues if it's not.

10. click the window as fast as you can to check your CPS count.
Remember to keep it near 0.
Remember to keep it near 0.
Remember to keep it near 0.

```


#making-of

```

mkdir addons/ofxCPS/

cd addons/ofxCPS/

touch readme.md

mkdir src

nano src/ofxCPS.h		(or howl/atom src/ofxCPS.h)

		(here is where you type the src code required for the addon)

mkdir ClicksPerSecond

cd ClicksPerSecond/

mkdir src && mkdir bin

nano src/Clicks.h		(or howl/atom src/Clicks.h)

	(here is where you type the src code required for the program)

nano src/main.cpp		(or howl/atom src/main.cpp)

	(here is where you define entry point for the program)

done.

try compile, test, re-test, field experiment

try clicking, you should get the click count along with history previous clicks performance



```



#license


```
Copyright (c) 2019 s373.net/x art codex studios

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

```
