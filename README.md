The guide “Extending Languages with %ZLANG Routines”  
Tells you all details you need to know to extend your programming language.  
_EXCEPT:_ How to do it in a clean way.  

This example of a %ZLANGC00.mac may show a possible approach  
to get an easy to overview and to manage setup.  
With less than 50 lines of code you might not be affected.  
But if your Studio shows close to 1000 rows or more you may get in troubles.   

My recommendation is simple.  
Instead of adding line by line commands and it's code  
you isolate each command and its code into a separate Include file.  

And what is left in your %ZLANG* Routines is simple and easy to  
overview list of included customized Commands, Functions, Variables  
See the details in an example for %ZLANGC00.mac . To prevent conflicts   
with existing %ZLANGC00.mac it is named here ZLANGC00.mac    
  \-\-\-\-\-\-\-  
  BTW: #include can do more than just host #define, .. for $$$\_references

[Article in DC](https://community.intersystems.com/post/organize-zlang)    

[Demo Server SMP](https://organize-zlang.demo.community.intersystems.com/csp/sys/UtilHome.csp)   
[Demo Server WebTerminal](https://organize-zlang.demo.community.intersystems.com/terminal/)    
        
**Code Quality** in SCREENSHOTS 
