# TIC-TAC-TOE-using-cpp-
TECH STACK:
         *C++
         *GIT HUB

BUILDING TIC-TAC-TOE :

 -> AT FIRST WE HAVE CREATED A ARRAY KNOWN AS "human_array[9]" OF CHARACTER TYPE
 WHICH ACTS AS AN DATABASE FOR RETREVING THE OPTED VALUES.
 
 -> THEN WE PRINTED THE OUTLINE STRUCTURE OF THIS GAME SUCH THAT USER WILL OPT FOR DESIRED VALUE AS PER SHOWN STRUCTURE.
 ->NOW WE WILL BE ASKING FOR INPUT FROM THE USER 
 -> PARALLELY WITH THE HELP OF "RAND()" FROM "TIME.H" HEADER FILE WE WILL TAKE INPUT AS BOT.
                     srand(time(0));
                     
       *NOTE THAT RAND FUNCTION DONT KNOW WHETHER THE INPUT VAUE IS REPEATED/NOT 
       SO WE HAVE AGAIN CHECKED FOR REPITETION ON SEPERATE BASIS
       
       * FOR GENERATING THE VALUE WITHIN THE LIMITS WE HAVE USED A FUNCTION:
               bot_opt=(rand()%(upper-lower+1))+lower;
    
-> AFTER TAKING THE INPUTS FROM BOTH HUMAN & BOT WE HAVE DISPLAYED THE CURRENT POSITION AT EACH TIME
FINALLY WE HAVE DISPLAYED THE FINALY WINNER

NOTE : THIS IS BASIC LEVEL OF TIC-TAC-TOE
