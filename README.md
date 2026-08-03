<img src="https://community.intersystems.com/sites/default/files/inline/images/archived.gif" width=100></img>
<b>&nbsp;no maintenance or update</b>  

The guide “Extending Languages with %ZLANG Routines”  
Tells you all details you need to know to extend your programming language.  
_EXCEPT:_ How to do it in a clean way.  
  
With less than 50 lines of code an %ZLANGC00.mac is easy to handle.  
But if your Studio shows close to 1000 rows or more you may get in troubles.   

My recommendation is simple.  
Instead of adding line by line commands and it's code  
you isolate each command and its code into a separate Include file.  

And what is left in your %ZLANG* Routines is simple and easy to  
overview list of included customized Commands, Functions, Variables  

BTW: #include can do more than just host #define, .. for $$$\_references

So building Docker images and running Containers is a waste of energy.
