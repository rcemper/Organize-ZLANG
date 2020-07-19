ROUTINE ZZROBERT [Type=INC]
ZZROBERT(a,b,c) public { 
#; use as  zzrobert arg:par1:par2    
    Write "Hallo Robert !",!
         ,"Argument =",$get(a,"missing"),!
         ,"ArgumentParameter#1 =",$get(b,"missing"),!
         ,"ArgumentParameter#2 =",$get(c,"missing"),!    
    set robert=72
    break
    quit
}
