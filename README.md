### complile file   --------------------------------------------

command : `g++ start.cpp`

it will create compile file : a.out 

if you want to give perticular name , then use <b>-o output </b> command

command : `g++ -o result.out start.cpp`

it will create compile file : result.out




### run the compile file  ----------------------------------------

command : `a.out`



### to comlile and run in a single command  -----------------------

command: `g++ start.cpp && ./a.out`



### commands for different compiled files in the example  ---------

( all the complied files are saved in <b> complied </b> folder)

commands :

`g++ -o ./complied/1_start.out 1_start.cpp && ./complied/1_start.out`

`g++ -o ./complied/_variables.out 2_variables.cpp && ./complied/2_variables.out`

`g++ -o ./complied/3_userinput.out 3_userinput.cpp && ./complied/3_userinput.out`

`g++ -o ./complied/4_strings.out 4_strings.cpp && ./complied/4_strings.out`

`g++ -o ./complied/5_array.out 5_array.cpp && ./complied/5_array.out`

`g++ -o ./complied/6_loops.out 6_loops.cpp && ./complied/6_loops.out`

`g++ -o ./complied/7_pointers_ref.out 7_pointers_ref.cpp && ./complied/7_pointers_ref.out`