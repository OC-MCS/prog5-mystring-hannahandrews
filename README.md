# prog5-mystring-hannahandrews
prog5-mystring-hannahandrews created by GitHub Classroom  

*Always* use a library function to do standard things. In your constructor, you are writing your own loop instead of calling strcpy  
Why not use the strcmp function I pointed you to in the assignment sheet? You've tried to reinvent that wheel and  
it has a bug: it will crash or just not give reliable results unless the two strings being compared are the same size.  
In the default constructor, ptr = {'\0'} will actually work, but it's not doing what you think it does. This is just assigning  
a zero to the pointer (so the pointer points nowhere). The non-misleading way to say this is ptr = nullptr  
Most of your functions will crash if they are passed a MyString that was default-constructed

Grade: 35/40
