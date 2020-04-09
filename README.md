 # Course progress log

## Skills acquired

-   c++ (Skill level: **2**)
    -   Inheritance (Skill level: **0**)
        -   Interfaces (Skill level: **0**)
        -   Polymorphism (Skill level: **1**)
-   GIT (Skill level: **2**)
-   Markdown (Skill level: **1**)
-   IDE (Skill level: **2**)
    -   CLion (Skill level: **2**)
-   Tools (Skill level: **0**)
    -   [Typora](https://typora.io/) (Skill level: **0**)

## GRADING guide

Grading scale is going to have 5 values, from 1 to 5:

-   **0 ->** Got just informed about it
-   **1 ->** Knows it exists
-   **2 ->** Considerable effort
-   **3 ->** OK... I guess?
-   **4 ->** Very Good
-   **5 ->**  Fully understands topic
-   **S ->** Is ready to roll (**SUPERB**)

## Known issues

-   

## To Remember

-   

## Lesson log

### Lesson 4

*Thursday, 9th of April*

#### Previous lesson mistakes

-   

#### This lesson overview

Today we will focus mostly on code review. We will try to get better results and talk about improvements for next meeting (*Saturday, 11th of April*).

#### Homework

-   [ ] Write first synopsis, check most important parts in tasks



#### Literature (worth reading)

-   [ ] [`auto`](https://en.cppreference.com/w/cpp/language/auto)
-   [ ] [`std::vector`](https://www.geeksforgeeks.org/vector-in-cpp-stl/)

#### Tasks

- [ ] Implement `ITeamCompositor`
- [ ] Implement `IFightSimulator`
- [ ] Put implementations into your `main.cpp` (first `TODO`)
- [ ] Put your chosen members of team into compositor (second `TODO`)

### Lesson 3

*Saturday, 5th of April*

#### Previous lesson mistakes

-   You have to watch out what kind of return value does function have
-   You can't assign void (in most cases)
-   You have to remember logical values of at least AND and OR

**AND**

|  X   |  Y   | RESULT |
| :--: | :--: | :----: |
|  1   |  1   |   1    |
|  1   |  0   |   0    |
|  0   |  1   |   0    |
|  0   |  0   |   0    |

**OR**

|  X   |  Y   | RESULT |
| :--: | :--: | :----: |
|  1   |  1   |   1    |
|  1   |  0   |   1    |
|  0   |  1   |   1    |
|  0   |  0   |   0    |



#### This lesson overview

Today we will focus on code refactor which we have produced on yesterday lesson. That means we will design new fighting system, and abstract our current fighting system. After today's lesson, we will create "Synopsis" after each lesson to sum up knowledge, and to be 100% correct with definitions and understanding of facts.

#### Homework

-   [ ] Write first synopsis, check most important parts in tasks
-   [x] Write two new classes for `Monster` and `Humanoid` (4 together), each of those should have distinct behaviour, which make them special in some way.
-   [x] Add new `IUnit` implementation (different than `SimpleUnit`) and create one basic implementation of it (like `Monster` or `Humanoid`).
-   [x] Add your new unit to fight, instead of `fighter_2`.



#### Literature (worth reading)

-   [ ] 

#### Tasks

-   [ ] [Struct](https://en.cppreference.com/w/cpp/keyword/struct)
-   [ ] [Class](https://en.cppreference.com/w/cpp/keyword/class)
-   [ ] Struct vs Class
-   [ ] Inheritance
-   [ ] Interface





### Lesson 2

*Saturday, 4th of April*

#### Previous lesson mistakes

-   Always keep an eye on includes.
-   _Interface_ should **always be perfectly reflected** in implementing class!
-   Don't add `/` in first place of include... It's just pointing to "root" directory



#### This lesson overview

N/A

#### Homework

-   [x] Make fight last till death



#### Literature (worth reading)

-   [ ] 

#### Tasks

-   [ ] 



### Lesson 1

*Saturday, 28th of march*

#### Previous lesson mistakes

-   **Do not** change interfaces when you are implementing them! It's pointless to use interfaces, if you want them to persist. [READ THIS]("https://www.wikiwand.com/pl/Interfejs_(programowanie_obiektowe)")
-   Start solving issues tad bit **EARLIER**
-   Inform about problems when you got them.. don't spend more than **1h** on the problem without ANY progress



#### This lesson overview

N/A

#### Homework

-   [x] Finish the last assignment
-   [x] Make first page of tasks from [here](https://learngitbranching.js.org/)
-   [x] Read about markdown [here](https://guides.github.com/features/mastering-markdown/)
-   [x] Download [typora](https://guides.github.com/features/mastering-markdown/)



#### Literature (worth reading)

-   [x] https://www.wikiwand.com/pl/Interfejs_(programowanie_obiektowe)

#### Tasks

-   [x] https://learngitbranching.js.org/ (Not **ALL** NECESSARY for next meeting)
-   [x] https://guides.github.com/features/mastering-markdown/
-   [x] https://typora.io/