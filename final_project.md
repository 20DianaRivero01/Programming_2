# FINAL PROJECT
## "WEB PAGE"


#### OBJECTIVE
The main point of this program is to create a web page, which first you will see the home screen, then you will have two options: 
* **log in:** if you choose **log in**, you will enter your email and your password, if it correct it will sent you to another page which wills show "Welcome" and your email(user), that means that the database will recognize that you are register before, and also there will be a **log out** button which will send you to the **home page** . In other case, if you put and email that is not register or is incorrect and do not match with the password, the page will be the same until you enter an exit data.
* **sing in:** if you chose sing in, you will register as a new user so will have to add an email, a password and you must repeat the password to confirm, if both password match, you will be register in the database and then it will take you back to the home page, and now you can log in. if the passwords that you enter do not match, the program will stay in the same sing in page until you both passwords match. 

![structure](C:\Users\pili_\Downloads\structure_webpage.png)

#### SOFTWARES

* XAMP
* VisualCode
* Bootstrap Studio
* MySQL

#### PROCESS

I used Bootstarp Studio, just for take the design that i used from every page, also when I export each one, I tooked the code htlm from every design, it was just to analyze what variables the developer used and to take references of it so then i will see and adjust the botoms that i will use for the program.

In visual code I create a folder where I work my code, i used the lenguage php to create the logic of my program, it is old but it is used for create web pages. It took me a while to analyze the lenguage, but before I started programming I analyze the structure that I was about to code and then just transformed it into php lenguage. Then, I create a folder inside my framework which I named it "views", and it saved all the desings with the code html, and in my code I just put the direction of the carpet so when I open my **"localhost/WEBPAGE"** there will apear the desing I took from Bootstarp and in my code I manipulated it to open diferent pages deppend on the button or the behavior of the user.

I used XAMP to active and acces to MySQL and with MySQL I created my dataBase called "dianas_web" which is in charge of save the data of all the users registers, there is a table named "ussers" which save the email and the password from the user (I also add another colum named "age" just for practice) and it will work to prove if the user is already registrated and can access or if it is not, and also it will be able to add the data of the new users.

#### OPEN THE WEB PAGE

if you want to open it, you must have installed XAMP because it will act like the server and it contains the data base which the program works with that is MySQL and if you have it you must need to make sure that the button of MySQL and Apache are activate. Also I sent the compressed zip where are folders with the desings, the code I create to the logic of the program, the views,etc. You must save the carpets into the folder XAMP/htdocs, once you have it you can open the search and write localhost/WEBPAGE to see the WebPage and if you want to check the data base, write: http://localhost/phpmyadmin/ and look for the folder called "dianas_web" and then open the file "usuarios" and there is the dataBase with all the information of the user. 


