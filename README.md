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

commands for basic folder projects :

`g++ -o ./basics/complied/1_start.out ./basics/1_start.cpp && ./basics/complied/1_start.out`

`g++ -o ./basics/complied/_variables.out ./basics/2_variables.cpp && ./basics/complied/2_variables.out`

`g++ -o ./basics/complied/3_userinput.out ./basics/3_userinput.cpp && ./basics/complied/3_userinput.out`

`g++ -o ./basics/omplied/4_strings.out ./basics/4_strings.cpp && ./basics/complied/4_strings.out`

`g++ -o ./basics/complied/5_array.out ./basics/5_array.cpp && ./basics/complied/5_array.out`

`g++ -o ./basics/complied/6_loops.out ./basics/6_loops.cpp && ./basics/complied/6_loops.out`

`g++ -o ./basics/complied/7_pointers_ref.out ./basics/7_pointers_ref.cpp && ./basics/complied/7_pointers_ref.out`



commands for function folder projects :

`g++ -o ./functions/complied/1_func_basic.out ./functions/1_func_basic.cpp && ./functions/complied/1_func_basic.out`


`g++ -o ./functions/complied/2_func_overloading.out ./functions/2_func_overloading.cpp && ./functions/complied/2_func_overloading.out`

`g++ -o ./functions/complied/3_function_template.out ./functions/3_function_template.cpp && ./functions/complied/3_function_template.out`



commands for oop folder projects :

`g++ -o ./oop/complied/1_oop_basic.out ./oop/1_oop_basic.cpp && ./oop/complied/1_oop_basic.out`

`g++ -o ./oop/complied/2_access_specifier.out ./oop/2_access_specifier.cpp && ./oop/complied/2_access_specifier.out`

`g++ -o ./oop/complied/3_Inheritance.out ./oop/3_Inheritance.cpp && ./oop/complied/3_Inheritance.out`

`g++ -o ./oop/complied/4_Multiple_Inheritance.out ./oop/4_Multiple_Inheritance.cpp && ./oop/complied/4_Multiple_Inheritance.out`

`g++ -o ./oop/complied/5_member_initializer_1.out ./oop/5_member_initializer_1.cpp && ./oop/complied/5_member_initializer_1.out`

`g++ -o ./oop/complied/5_member_initializer_2.out ./oop/5_member_initializer_2.cpp && ./oop/complied/5_member_initializer_2.out`
