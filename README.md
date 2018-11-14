# Systems Software COP-3402

University of Central Florida<br>
Fall 2018<br>
Section 1

Prerequisite(s): CDA 3103C and COP 3502C each with a grade of C (2.0)
or better.

## Course References

[Syllabus Repository](https://github.com/cop3402fall18/syllabus)

_All assignment submissions must go through GitHub Classroom, which
requires a free GitHub [account](https://github.com/)._

Please provide the github ID via webcourses.

## Meeting Times

_Note: all times are in UCF's Eastern time zone; all dates are implicitly the course semester's year._

Building codes can be found here: <https://map.ucf.edu/locations/>

### Class

MW 7:30PM-8:45PM CB2-O101

### Recitations

W 2:30PM NSC-108

W 3:30PM NSC-108

W 4:30PM CB1-320

### Final Exam

Wednesday, December 5, 2018 7:00PM-9:50PM 

<https://exams.sdes.ucf.edu/2018/fall>

Location is as determined by the University.

## Contact Info

### Instructor

[Paul Gazzillo](https://paulgazzillo.com)<br>[paul.gazzillo@ucf.edu](mailto:paul.gazzillo@ucf.edu)<br>HEC-239

Office Hours:
- M 4:30PM-5:30PM
- W 4:30PM-6:00PM
- or by appointment
- 11/05, 11/07 moved to 11/09 9:00-11:00 and 12:00-1:00

### GTAs

Sharare Zehtabian<br>[sharare.zehtabian@knights.ucf.edu](mailto:sharare.zehtabian@knights.ucf.edu)

Necip Yildiran<br>[yildiran@knights.ucf.edu](mailto:yildiran@knights.ucf.edu)<br>HEC-213<br>Office Hours: MW 10.30AM-11.30AM

## Course Description

Design and development of assemblers, linkers, loaders, and
compilers. Study memory hierarchy, program performance, and system
level I/O.

## Learning Outcomes

This course is designed to provide a fundamental understanding of real
and virtual machines as language processor and the implementation of
compilers. We will study the processor as an instruction
interpreter. Compilers, assemblers, linkers and loaders, and virtual
machines will be presented as systems software for program
development. An introduction to Operating system will be given.

## Schedule

### Important Dates

_Note: all times are in UCF's Eastern time zone._

#### Assignments

_See webcourse announcements for the GitHub classroom submission link for each assignment._

_Be sure to submit the GitHub repo URL to webcourses.__

_See the repo README.md for detailed instructions._

- __[Assignment 1 PM/0](assignments/assignment1_pm0.pdf) Due 09/16 11:59PM__

- __[Assignment 2 Lexer](assignments/assignment2_lexer.pdf) Due 10/07 11:59PM__

- __[Assignment 3 Parser](assignments/assignment3_parser.pdf) Due 11/04 (changed from 10/28) 11:59PM__

- __[Assignment 4 Code Generator](assignments/assignment4_codegen.pdf) Compiler Due 12/02 11:59PM__

#### Exams

- __Midterm in class 10/10 7:30PM__

- __Final Exam Wednesday, December 5, 2018 7:00PM-9:50PM__

### Weekly Schedule

__Bold__ dates are important dates that will not be moved earlier.

Weekly topics may shift earlier or later depending on the speed of
lectures, student interest, etc, but the general flow of the topics
will remain the same.


#### Week 1

Introduction, Grading, Setting up Git

08/20 [Intro](slides/lecture0_intro.pdf)

08/22 [Processor](slides/lecture1_processor.pdf)

C and Makefiles:<br>
<https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html>
<https://randu.org/tutorials/c/make.php>
<https://stackoverflow.com/questions/6666805/what-does-each-column-of-objdumps-symbol-table-mean>
<https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html>

Git tutorials:<br>
<https://guides.github.com/activities/hello-world/><br>
<https://rogerdudler.github.io/git-guide/><br>
<https://www.atlassian.com/git/tutorials/using-branches><br>
<https://www.atlassian.com/git/tutorials/comparing-workflows>

#### Week 2

Virtual Machines as Instruction Interpreter

08/27 [Processor](slides/lecture1_processor.pdf)

08/29 [Virtual Machines](slides/lecture2_vm.pdf)

#### Week 3

Subprogram Implementation

09/03 _No Class (labor day)_

09/05 [Virtual Machines](slides/lecture2_vm.pdf)

- Activation records, hand-drawn notes
- [Subprograms](slides/lecture3_subprograms.pdf

#### Week 4

Compilers and Interpreters

09/10 [Compilers and Interpreters](slides/lecture4_lecture4_compilers_interpreters.pdf)

09/12 [Lexical Analysis](slides/lecture5_lexical_analysis.pdf)

Reading:<br>
Dragon book Ch3, 3.1-3.7 (inclusive).

__Assignment 1 PM/0 Due 09/16 11:59PM__

#### Week 5

Lexical Analysis

__09/17__ [Lexical Analysis](slides/lecture5_lexical_analysis.pdf)

Reading:<br>
Dragon book Ch3, 3.1-3.7 (inclusive).

More info on regular languages and finite automata:

- Proofs of equivalence [here](http://www.cs.colostate.edu/~massey/Teaching/cs301/RestrictedAccess/Slides/301lecture03.pdf) and [here](http://www.cs.colostate.edu/~massey/Teaching/cs301/)

- [Regular expression interpreter assignment](https://github.com/anwarmamat/cmsc330spring18-public/tree/master/p4)

__09/19__ [Syntax Analysis](slides/lecture6_syntax_analysis.pdf)

Reading:<br>
Dragon book Ch4, 4.1,4.2

- [egrep mini tutorial](http://www.cs.columbia.edu/~tal/3261/fall07/handout/egrep_mini-tutorial.htm)
- [The C Preprocessor](https://gcc.gnu.org/onlinedocs/cpp.pdf)

- [Parsing: a timeline](https://jeffreykegler.github.io/personal/timeline_v3)
- [Undershoot: Parsing theory in 1965](https://jeffreykegler.github.io/Ocean-of-Awareness-blog/individual/2018/07/knuth_1965_2.html)

#### Week 6

Grammars

__09/24__ [Syntax Analysis](slides/lecture6_syntax_analysis.pdf)

- [Parse Trees](figures/1_parse_trees.pdf)
- Need for associativity to resolve ambiguity (example in `python` interactive mode)

        >>> 100 * (float(29) / 100)
        28.999999999999996
        >>> (100 * float(29)) / 100
        29.0

- Reading: Dragon book 4.1-4.4 (inclusive).
- Floating point rounding error: <https://stackoverflow.com/questions/5997027/python-rounding-error-with-float-numbers>

__09/26__ [Syntax Analysis](slides/lecture6_syntax_analysis.pdf)  [Recursive Descent](slides/lecture7_recursive_descent.pdf)

- Intro to recursive descent: Dragon Book 2.4
- Reading: Dragon Book 4.1-4.6,4.8 (inclusive).
- <http://csis.pace.edu/~wolf/CS122/infix-postfix.htm>
- <https://en.wikipedia.org/wiki/Shunting-yard_algorithm>
- [Extended Backus-Naur Form](https://en.wikipedia.org/wiki/Extended_Backus%E2%80%93Naur_form)

#### Week 7

10/01 [LL1 Parsing](slides/lecture8_ll1.pdf)

- [Predictive Parsing Example](figures/2_predictive_parsing.pdf)
- Reading: Dragon book 4.1-4.4 (inclusive).
- Reading: Dragon book 4.9 and (optionally) 4.7.


10/03 [Lexing and Parsing Overview](figures/3_files_lexing_parsing_overview.pdf)


__Assignment 2 Lexer Due 10/07 11:59PM__

#### Week 8
10/08 Review for the Midterm

- pm/0 and activation records
  - draw activation records for a given program execution
  - identify base pointer, stack pointer
  - dynamic link, static link
  - recursion
  - stack machine vs register machine

- regular languages and lexing
  - math defintion of a regular language: language (strings over a finite alphabet) that can be described with a regular expression
  - convert between english language description, regular expression, and discrete finite automata
  - hand-coding a lexer from a regular expression
  - lexemes vs tokens
  - ascii encoding

- cfgs and parsing
  - math definition of cfg (terminals, nonterminals, productions, starting symbol)
  - identify ambiguous grammar (two derivations), operator precedence
  - draw parse tree for tokens given grammar
  - identify left recursion, do left factoring

- exam layout
  - 22 questions, 50pts
  - 9 multiple choice
  - 13 open answer (3 with multiple parts)
  - 8pts on activation records
  - 27pts on regular languages/expressions, DFAs
  - 15pts on CFGs, parse trees (2pt left factoring/recursion)


10/10 _Midterm_

__Midterm in class 10/10 7:30PM__

#### Week 9
10/15 [LR Parsing](slides/lecture9_lr.pdf)

- Dragon book 4.6 and 4.7.

10/17 [LR Parsing](slides/lecture9_lr.pdf)

- [LR parsing example](https://www.cs.rutgers.edu/~zz124/cs415_spring2014/lectures/lr_parser_animation.pdf)
- [LR(0) states](https://www.cs.rutgers.edu/~zz124/cs415_spring2014/lectures/lec14_synVII.pdf)
- [SLR table construction example](https://www.cs.rutgers.edu/~zz124/cs415_spring2014/lectures/lr_states_exp.pdf)


#### Week 10

10/22 Midterm exam discussion

10/24 [Code Generation](slides/lecture10_codegen.pdf)

- [Code generation examples](figures/4_codegen.pdf)
- Dragon book chapter 5 (skim, optional)

#### Week 11
Type checking

10/29 [Code Generation](slides/lecture10_codegen.pdf), [Type Checking](slides/lecture11_types.pdf)

- [Syntax-directed translation](https://www.cs.rutgers.edu/~zz124/cs415_spring2014/lectures/lec16_semI.pdf)
- Dragon book chapter 6 (especially 6.5 on types)
- [Type Systems](http://lucacardelli.name/Papers/TypeSystems.pdf) by Luca Cardelli

10/31 [Type Checking](slides/lecture11_types.pdf), [Formal Semantics and Types](slides/lecture12_formal_types.pdf)

- [Exercise](exercises/4_types/)
- [The Unsound Playground](http://io.livecode.ch/learn/namin/unsound)


#### Week 12
Static analysis, control-flow, data-flow, machine code generation, assembly

11/05 [Control-Flow Analysis](slides/lecture13_cfg.pdf)

- [Example](figures/5_control_flow.pdf)
- [LLVM IR example](https://releases.llvm.org/2.6/docs/tutorial/JITTutorial1.html)
- Dragon book chapter 8

11/07 [Data-Flow Analysis](slides/lecture14_dataflow.pdf)

- [Example](figures/6_data_flow.pdf)
- [Reaching definitions](https://en.wikipedia.org/wiki/Reaching_definition)
- [Live variables](https://en.wikipedia.org/wiki/Live_variable_analysis)
- [Data-Flow Framework](https://www.cs.utexas.edu/users/mckinley/380C/lecs/03.pdf)
- Dragon book chapter 9

__Assignment 3 Parser/Code Gen Due 11/04 (changed from 10/28) 11:59PM__

#### Week 13
Static analysis, control-flow, data-flow, machine code generation, assembly

11/12 _No Class (Veteran's Day)_

11/14 [Data-Flow Analysis](slides/lecture14_dataflow.pdf),  [Assembly](slides/lecture15_assembly.pdf)

- [Data-Flow Framework](https://www.cs.utexas.edu/users/mckinley/380C/lecs/03.pdf)

#### Week 14
Operating systems, processes, files

11/19

- [The UNIX Time-Sharing System](https://people.eecs.berkeley.edu/~brewer/cs262/unix.pdf)

11/21

#### Week 15

11/26 Review for the Final

11/28 Review for the Final

__Assignment 4 Compiler Due 12/02 11:59PM__

__Be sure to update your Assignment 2 and Assignment 3 repos (don't push to the Assignment 4 repo)__

## Grading

- 20% Midterm Exam: closed book, closed notes exam given in class
- 30% Final Exam: closed book, closed notes comprehensive exam given during final exam week. _You must score at least 60% on this exam to pass the course_
- 50% Programming project
  - 15% Assignment 1 PM/0
  - 5% Assignment 2 Lexer
  - 5% Assignment 3 Parser/Code Gen
  - 25% Assignment 4 Compiler
- _Extra_ 7%: Participation, recitation attendance, quizzes.
  Completion of these tasks can add extra percentage points, e.g., if
  you receive an 86% average on the exams and project and 6% on the
  recitations and quizzes, your final score will be a 92%.

__No late submissions for the programming project will be accepted__
except in accordance with University policy.  However, the programming
project is cumulative: assignments 2-4 each depend on the previous
assignment and assignment 4 depends on all previous assignments.  The
assignment weights reflect this dependence.

### Assignment Grading in Detail

Assignment 1:

- 5pts if it compiles and runs (even if no tests pass)
  - or 3pt if there is substantial implementation effort but doesn't compile
- 5pts for the given test cases (e.g., .5pt for each case)
- 5pts for the secret test cases 

Assignment 2:

- 1pt if it compiles and runs (even if no tests pass) or 0.5pt if there 
is substantial implementation effort but doesn't compile
- 2pts for the given test cases (1/7 each)
- 2pts for the secret test cases (1/7 each)

Assignment 3:

- 1pt if it compiles and runs (even if no tests pass) or 0.5pt if there 
is substantial implementation effort but doesn't compile
- 2pts for the given test cases
- 2pts for the secret test cases

Assignment 4:

- Grade is on the full compiler, including the lexer and the parser
- 5pts for the lexer
- 5pts for the parser
- 15pts for code generation
  - 5pts if it compiles and runs with some coding effort
  - 5pts for the given test cases
  - 5pts for the secret test cases

### Grade Calculation

The score is a weight average of the exams and programming project
plus the extra points, i.e.,

    (midterm * 20% + final * 30% + project * 50%) + extra
    
### Letter grades

A >= 90%, B+ >= 87%, B >= 80%, C+ >= 77%, C >= 70%, D >= 60%, F < 60%.

### Programming Project

The programming project consists in implementing a compiler for a tiny
programming language. The compiler must generate code for a virtual
machine that will run. The project will be divided in four modules:

1. Virtual Machine implementation (PM/0)
2. Lexer
3. Parser/Code Generation
4. Compiler

Details will be given out well before the due dates for each part of
the project.

This project must be written in C (not C++) on a UNIX system. The
standard for this class will be the Linux system in the main computer
lab called Eustis. You are welcome to write and test code on some
other system, if you wish, but it will be graded on Eustis and if it
does not work there, it does not work. You will be given a Eustis
account at the beginning of the semester, and instructions on how to
access your account can be found on the Assignments section at the
course's webpage.

Students may work alone on the programming project or with at most one
other person for a maximum team size of two.  Teams are created on
GitHub classroom when accepting the assignment.  If there is a need to
change or dissolve a team, please talk to the instructor about

## Course Materials

### Recommended

- Compilers: Principles, Techniques, & Tools, Second Edition by Alfred V. Aho, Monica S. Lam, Ravi Sethi, and Jeffrey D. Ullman. Addison Wesley, 2007

### Supplementary

- Advanced Compiler Design and Implementation  by Steven Muchnich. Morgan Kaufman, 1997
- Modern Compiler Implementation in C by Andrew Appel. Cambridge University Press, 1998
- Compiler Construction: Principles and Practice by Kenneth C. Louden, PWS, 1997
- Concepts of Programming Languages, 8th Edition by Robert W. Sebesta.  Addison Wesley, 2010.

## Core Policy Statements

### Academic Integrity

The Center for Academic Integrity (CAI) defines academic integrity as
a commitment, even in the face of adversity, to five fundamental
values: honesty, trust, fairness, respect, and responsibility. From
these values flow principles of behavior that enable academic
communities to translate ideals into action.
<http://academicintegrity.org/>

UCF Creed: Integrity, scholarship, community, creativity, and excellence are the core values that guide our conduct, performance, and decisions.

1. Integrity: I will practice and defend academic and personal honesty.

2. Scholarship: I will cherish and honor learning as a fundamental purpose of my membership in the UCF community.

3. Community: I will promote an open and supportive campus environment by respecting the rights and contributions of every individual.

4. Creativity: I will use my talents to enrich the human experience.

5. Excellence: I will strive toward the highest standards of performance in any endeavor I undertake.

The following definitions of plagiarism and misuse of sources come
from the Council of Writing Program Administrators
<http://wpacouncil.org/node/9> and have been adopted by UCF's
Department of Writing & Rhetoric.

#### Plagiarism
In an instructional setting, plagiarism occurs when a writer deliberately uses someone else's language, ideas, or other original (not common-knowledge) material without acknowledg­ing its source. This definition applies to texts published in print or on-line, to manuscripts, and to the work of other student writers.

#### Misuse of Sources
A student who attempts (even if clumsily) to identify and credit his or her source, but who misuses a specific citation format or incorrectly uses quotation marks or other forms of identifying material taken from other sources, has not plagiarized. Instead, such a student should be considered to have failed to cite and document sources appropri­ately.

#### Responses to Academic Dishonesty, Plagiarism, or Cheating
UCF faculty members have a responsibility for your education and the value of a UCF degree, and so seek to prevent unethical behavior and when necessary respond to infringements of academic integrity. Penalties can include a failing grade in an assignment or in the course, suspension or expulsion from the university, and/or a "Z Designation" on a student's official transcript indicating academic dishonesty, where the final grade for this course will be preceded by the letter Z. For more information about the Z Designation, see <http://goldenrule.sdes.ucf.edu/zgrade>.

For more information about UCF's Rules of Conduct, see <http://www.osc.sdes.ucf.edu/>.

#### Unauthorized Use of Class Materials
There are many fraudulent websites claiming to offer study aids to students but are actually cheat sites. They encourage students to upload course materials, such as test questions, individual assignments, and examples of graded material. Such materials are the intellectual property of instructors, the university, or publishers and may not be distributed without prior authorization. Students who engage in such activity are in violation of academic conduct standards and may face penalties.

#### Unauthorized Use of Class Notes
Faculty have reported errors in class notes being sold by third parties, and the errors may be contributing to higher failure rates in some classes. The following is a statement appropriate for distribution to your classes or for inclusion on your syllabus:

Third parties may be selling class notes from this class without my authorization. Please be aware that such class materials may contain errors, which could affect your performance or grade. Use these materials at your own risk.

#### In-Class Recording Policy
Outside of the notetaking and recording services offered by Student Accessibility Services, the creation of an audio or video recording of all or part of a class for personal use is allowed only with the advance and explicit written consent of the instructor. Such recordings are only acceptable in the context of personal, private studying and notetaking and are not authorized to be shared with anyone without the separate written approval of the instructor.

### Course Accessibility Statement 
The University of Central Florida is committed to providing access and inclusion for all persons with disabilities. This syllabus is available in alternate formats upon request. Students with disabilities who need specific access in this course, such as accommodations, should contact the professor as soon as possible to discuss various access options. Students should also connect with Student Accessibility Services (Ferrell Commons, 7F, Room 185, sas@ucf.edu, phone (407) 823-2371). Through Student Accessibility Services, a Course Accessibility Letter may be created and sent to professors, which informs faculty of potential access and accommodations that might be reasonable.

### Campus Safety Statement
Emergencies on campus are rare, but if one should arise in our class, we will all need to work together. Everyone should be aware of the surroundings and familiar with some basic safety and security concepts. 

- In case of an emergency, dial 911 for assistance. 

- Every UCF classroom contains an emergency procedure guide posted on a wall near the door. Please make a note of the guide's physical location and consider reviewing the online version at <http://emergency.ucf.edu/emergency_guide.html>.

- Familiarize yourself with evacuation routes from each of your classrooms and have a plan for finding safety in case of an emergency. (Insert class-specific details if appropriate)

- If there is a medical emergency during class, we may need to access a first aid kit or AED (Automated External Defibrillator). To learn where those items are located in this building, see <http://www.ehs.ucf.edu/AEDlocations-UCF> (click on link from menu on left). (insert class specific information if appropriate)

- To stay informed about emergency situations, sign up to receive UCF text alerts by going to my.ucf.edu and logging in. Click on "Student Self Service" located on the left side of the screen in the tool bar, scroll down to the blue "Personal Information" heading on your Student Center screen, click on "UCF Alert", fill out the information, including your e-mail address, cell phone number, and cell phone provider, click "Apply" to save the changes, and then click "OK."

- If you have a special need related to emergency situations, please speak with me during office hours.

- Consider viewing this video (<https://youtu.be/NIKYajEx4pk>) about how to manage an active shooter situation on campus or elsewhere.

### Deployed Active Duty Military Students
If you are a deployed active duty military student and feel that you may need a special accommodation due to that unique status, please contact your instructor to discuss your circumstances.
