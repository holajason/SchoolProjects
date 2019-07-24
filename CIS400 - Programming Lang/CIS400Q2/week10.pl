scheme(continued)
- A subset of Lisp
Example 3:
"1."(define(equal lis1 lis3)
#equal  > function name, two arguement
    "2" (cond
    "3"((not(list? lis1))(eq? lis1 lis2))
#if lis1 is a list(true), return false
    "4"((not(list? lis2)) '())
#test list 2 if its a list ['() = false]
    "5"((null? lis1) (null? lis2))
#test list2 for null list
    "6"((null? lis2) '())
#test list 2 for null
    "7"((equal(car lis1)(car lis2))
#recursive call as the 5th test condition
#(euqal(cdr lis1)(cdr lis2)))
    (else'())
#default case for return

#TEST CASE#
(equal '((a b)c) '((a b) c))
"1" lis1 = ((a b)c) lis2 = ((a b)c)
"2" ((not),(list?) ((a b) c)))
"4"(not(list? lis2))
"5"(null? ((a b) c))
"6"(null? lis2)
"7"((equal)(a b)(a b))
## | | | | | ##
## V V V V V ##
"1" lis1 = (a b) lis2 =(a b)
"3" (not(list? (a b)))
"4" (not(list? lis2))
"5" (null? (a b)) #()
"6" (null? lis2)    #()
"7" (equal a a)            #(euqla (b)(b)) -> lis1 (b) = lis2(b)
## | | | | | ##
## V V V V V ##
"1" lis1 = a lis2 = a
"3"(not(list? lis1))    (eq? lis1 lis2) #terminate
#terminate return previous step 7
######SUMMARY#####
###Function language###
#Scheme: A subset of Lisp langage
#Erlang: www.erlang.org# concurrent software
#O'caml: Function & object-oriented & imperative
#Rocket Successor of scheme
#Haskell: A pure functional languag
#F#: Microsoft version Functional Language
#ML: Meta Language




"*******************************Language Programming************************"
#Logic Program: Symbolic Logic and Logic Inferencing
"******Symbolic Logic******"
#Prodicate Calculus
    #A speical form of symbolic logic
    "*Proposition"
    # A logic Stat,emt that may be true or false
        "*Atomic*"
            #man(Jake)
            #Like(Bob, Steak)
        "*Compound*"
            #Logical connectors
            #a∩b a∪b a≡b a⊃b a⊂b
            # ∩(conjuction) ∪(disjuction) ≡(Equivalence) ⊃(Inply a implus b) ⊂(b imples a)
        "*Variable*"
            #∀x(woman(x) ⊃ human(x)
            #For all x
            #∃x(mother(Mary,x) ∩ male(x))
            #Ther exist a certain x,
        "*clausal Form*"
            #Only ∪ and ∩
            #∩ right, ∪ left
            '[B1∪B2∪B3]⊂[A1∩A2∩A3]
            #   LHS         RHS
*Horn Clause* #Prolog: The most common logic programming language
                #-NO ∪ at the left
                #B1⊂A1∩A2∩A3


"*****Prolog*****"
'Term' - Basic Element in prolog
    '*costant*'
    #An atom or number. eg. shelly, 12
    '*variable*'
    #A string of letter, digits and underscores that begins with an uppercase Eg. X,_O,x-d
    '*functor*'
    #Format-> functor(parameter list) eg. femal(Shelly)
'Statement form'
    '*Headless*'
    #A1∩A2∩A3. for facts
    '*Headed*'
    #B1⊂A1∩A2∩A3. for rules
    #B1 = head | ⊂ -> :=, | ∩ -> ,
    #Period represents the end of one sentence
    "****An intelligent database****"

'goal statment' #A fact a query, a headless Horn Clause

'Inferencing Porcess'
    '*Forward Chaining*'
    #form facts & rules -> goal(Bottom-up approach)
    '*Backward Chaining*'
    #from goal to facts(top-down approach)

'search'
    '*Depth-First*'
    #prolog choice
    '*Breath-First*'
    '*Backtracking*'
#when the system fails to prove a subgoals, it wull reconsident the previous
#subgoal to find an alternative solution



'*************  WEEK 11.1   ****************'
#Polymorphism - Third compnent of OOP
    '* Definition - A concept where a single name may denote objects of different classes that are related tby some base class'
    '* Binding - Dynamic binding: a reference to a member functuon resolved at run-time
'*** in C++***'
    '*Virtual Function: A non-static member function prefaced by viritual specifier'
    '*Abstract class: It is a class that can only ve a base class for other class.
     An abstract class has no instances. It contains at least one pure virtual function'
        #Pure virtual function: A virtual function that contains a pur-specifier, designated by the "=0"

"Abstract Class - Contain virtual function(s)"
class CPolygon{
protected:
    int width, height;
public:
    void set)values(int a, int b){
        width = a;
        height = b;
    }
    virtual int area(void) = 0; #Pure virtual function
    virtual int area2(void){ return 0; } #Regular virtual function
}

class CRectangle : public CPolygon{
public:
    int area(void){
        return (width * height);
    }
}

class CTriangle: public CPolygon{
public:
    int area(void){
        return (width * height / 2);
    }
}

int main(){
    CRectangle rect;
    CTriangle trge;
    CPolygon *P1 = &rect;   #(&rect) -> Source of P1
    CPolygon *P2 = &trge;   #Source of P2
    P1 -> set_value(4,5);
    P2 -> set_value(4,5);
    p1 -> area();       # P1 & P1 are polymorphism
    P2 ->area();
    return 0;
}


"********* JAVA **********"
"Java: Cleaner and simpler version of C++"
*Integration Development Environment: JBuilder, Eclipse, NetBeans
*Compliation: Javac filename.java -> Filename class Run: java filename

'1: Syntax Form'
public class class_name{
    public static void main(string [] args){
        class.name a = new class_name()
        a.doWhatIsNeeded()
    }
    public class_name(){
        ....
    }
    public class_name(parameter){
        ...
    }
}

'2: String Class'
string output = "table of content\m";
string fullName =  "My" + output;

'3: Constants'
final double PI = 3.1415;

'4: Specialized Libraries'
syntax form: import package_name;

'5: Arrays'
char [] answer = new char[5];
char [][] name = new char[size1][size2];
void = someFunc(int [][]table){...}

'6: Inheritance'
syntax form:
public class new_class extends(same as :) baseclass{...}

'By Default, Java use dynamic binding'

'7: Polymorphism'
class Animal{
    private int leg =4;
    public void talk(Graphics g){
        g.drawString("Animal Can't Talk!"; 10,10)
    }
    class Cow extends Animal{
        public void talk(Graphics g){
            g.drowString("Mooooo", 10, 10);
        }
    }
    class Snake extends Animal{
        private int leg = 0;
    }
    public void paint(Graphics g){
        Cow daisy = new Cow()
        Animal animal;
        animal = daisy;
        animal.talk(g); #-> moo
        Snake sod = new Snake();
        animal sid;
        animal.talk(g); #-> Animal can't talk
    }
}

'***Abstract class***'
public abstract class Shape{
    protected int x,y, width,height;
    public void setX(int newX){
        x = newX;
    }
    public abstract float getArea();
    ...
}

public class Rectanle extends Shape{
    public float getArea(){
        return width * height;
    }
}

'8: Interface: The description of a class with the bodies of the methods omiited'

public interface Balloon{
    public void changeSize(int x);
    public void move(int x, int y);
    ...
}

' -To implement an interface class, use the word "implements"'
public class Spheroid implements Balloon{
    public void changeSize(int x){...}
    public void move(int x, int y){...}
}

public interface Ball extends Balloon{
    public void setColor(color c);
}                                                               Applet
                                                                  ↑
class Game extends Applet implements InterfaceA, InterfaceB{     Game → InterfaceA
    ...                                                           ↓
}                                                              Interface


abstract class Entertainment{
    protected int values;
    private boolean on;
    private void switchOn(){
        on = true;
    }
    public abstract void changeValue(int amount);
}

interface ElectricalDevics{
    public void setTime(int x);
    public int getPower();
}

class TV extends Entertainment implements ElectricalDevics{
    private int value, channel;
    public void changeValue(int x){
        value += x;
    }
    public void setTimme(int x){
        this.time = x;
    }
    public int getPower(){
        return 100;
    }
}

class ElectricityManager{
    private int totalPower;
    public void calcPower(ElectricalDevics x){
      #ElectricalDevice: objects of any class that implements ElectricalDevice
        int power = x.getPower();
        ...
    }
}

- Exception Handling
Throwable
    '*Exception'
    '*Error'
try{
    problematic codes
}
catch(){
    exception handlers
}
finally{
    clear-up("Always executes")
}

try{
    a = 100/a;
    if(a<10){
        return 10;
    }
}
catch(ArithmeticException e){
    System.out.println(e.getMessage());
}
finally{
    System.out.println("Try is done");
    return a;
}

'*************  WEEK 11.2  ****************'
  '****Java Exception continued****'
try{...}
catach(exception){...} #for all exception

void buildDist() throws IOException{...}
  '*Throws- It specifies the exception that are not handled in the
  current routine
  *Thoes exceptuons will be propagates to the method caller
  *If no handler is found (all the way to main) the program will terminated'

  'C#'
  int main(){
    char Myarray[10];
    try{
      for(int i =0; i <= 10; i++){
        if (i > 9) throw "out of range"
        Myarray[i] = '2'
      }throw to
    }
    catach(char *x){...}
    catch(int x){...}
    catach(...){...}
  }

'-Combination of C# & Java '

-Simple program
using System
class name welcome{
  public static void main(string [] args(a)){
    console.writeline()
  }
}

-Simple data types
int byte float chat
var *= new Statement()

var Foo = "bar";
--Switch Statement
string x
switch(x){
  case "continue do something"
  break;
  case "quit"
  ...
  Default:
}

control statements
-while do while for
foreach statements
  string[] name = [charge,"john"]
  foreach(string x in names){
    console.writeline("{03,x")
  }

-parameter passing
class address{
  public string name;
  public string address;
}
class methodParameters{
  void makDescision(string myChoic){
    address x = new Address();
    switch(myChoice){
      case "A":
      x.names = "Joe", x.Address = 'c$'
      this.addAddress(ref x) #pass by reference
      break;
      case "D"
      x.names = "Rober";
      this.deleteAddress(x.names) #pass by value bu Default
      break;

      case  "M"
      x.names = "Matt";
      this.modifyAddress(out x) #pass by result
      break;
    }
  }
}

void addAddress(ref Address x){console...}

void deleteAddress(string x){...}

void modifyAddress(out Address x){
  x = new Address();
  x.names = "Joe";
  x.addAddress = "C#";
}

void view Address(params string[]x){
  foreach(string y in x){
    console....
  }
}

'***namespace in C#***'
-namespace
namesacpe cSharp{
  namespace thtaral{
    ....
  }
}

'***Inheritance***'
support single inheritance

using System
  public class parentClass{
    string parent string
    public parent class{
      console.writeline(parent constructor)
      public parent Class(string x){
        parent String x console.writeline("Parent string");
      }
      public void parent(){...}
    }
  }

  public class childClass: parentClass{
    public childClass():base("From dooper"){
      console...
    }
    public static void main(){
      childClass x = new childClass();
      x.print();
      ((parentClass)x).print()
    }
  }

public new void print() #new: prevent the Polymorphism
