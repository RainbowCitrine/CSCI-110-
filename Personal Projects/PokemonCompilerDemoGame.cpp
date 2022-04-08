//This Project was made after finishing CISP 31.


#include <iostream> 
#include <string> 

class Pokemon
{
    public: 
    std::string Name; 
    int Lvl; 
    char Gen;
    int Health;  
    std::string Move1; 
    std::string Move2; 
    std::string Move3; 
    std::string Type; 

    Pokemon(std::string name3, std::string move1, std::string move2, std::string move3, std::string type, int lvl, char gen, int health)
    {
        Name = name3; 
        Move1 = move1; 
        Move2 = move2;
        Move3 = move3;  
        Lvl = lvl; 
        Gen = gen; 
        Type = type; 
        Health = health; 
    }

    void Chosen()
    {
        std::cout << "You chose " << Name << " as your pokemon!" << std::endl; 
    }
    void Rival()
    {
        std::cout << "Jake chose " << Name << " as their pokemon!" << std::endl; 
    }
    void Out()
    {
        std::cout << "You sent out " << Name << std::endl; 
    }
    void RivalOut() 
    {
        std::cout << "Jake sent out " << Name << std::endl; 
    }
    void yourMove()
    {
        std::cout << Name << " used " << Move1 << std::endl; 
    }
    void yourMove2()
    {
        std::cout << Name << " used " << Move2 << std::endl; 
    }
    void yourMove3()
    {
        std::cout << Name << " used " << Move3 << std::endl; 
    }
    void RivalMove1()
    {
        std::cout << "Jake's " <<  Name << " used " << Move1 << std::endl; 
    }
    void RivalMove2()
    {
        std::cout << "Jake's " << Name << " used " << Move2 << std::endl; 
    }
    int getRivalHealth()
    {
        return Health - 6; 
    }
    int getRivalHealth2()
    {
        return Health - 6 * 2; 
    }
    int getRivalHealth3()
    {
        return Health - 6 * 3; 
    }
    int getRivalHealth4()
    {
        return Health - 6 * (4) - 12; 
    }
    int getHealth()
    {
        return Health - 8; 
    }
    int getDenfenseLow()
    {
        return Health - 16; 
    }
    int getAttackLow()
    {
        return Health - 3; 
    }
    int getLevel()
    {
        return Lvl + 1; 
    }
    int getBattleTwo()
    {
        return Health; 
    }

    void sentOut()
    {
        std::cout << "Team Linear Grunt One sent out " << Name << std::endl; 
    }
    void sentOutTwo()
    {
        std::cout << "Team Linear Grunt Two sent out " << Name << std::endl; 
    }
    void attackOne1()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move1 << std::endl; 
    }
     void attackOne2()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move1 << std::endl; 
    }
    void attackTwo1()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move2 << std::endl; 
    }
     void attackTwo2()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move2 << std::endl; 
    }
    void attackThree1()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move3 << std::endl; 
    }
     void attackThree2()
    {
        std::cout << "Team Linear's Grunt One " << Name << " used " << Move3 << std::endl; 
    }
    int getVHealthOne()
    {
        return Health; 
    }
    int getVHealthTwo()
    {
        return Health; 
    }
};
    
    


char gender; 
std::string name; 

void welcome()
{
    std::cout << "Hello, and welcome to the world of Pokemon!" << std::endl; 
    std::cout << "My name is Rainbow Assistant to Professor Oak of the Kanto Region and I am here to guide you on your journey!" << std::endl; 
    std::cout << "Before we begin can you please tell me what your name is? " << std::endl; 
    std::cin >> name; 

    std::cout << "So your name is " << name << " corret? (y/n): "; 
    char choice; 
    std::cin >> choice; 

    int i = 0; 
    while(choice != 'y' && choice != 'Y')
    {
        std::cout << "Oh my apologies can you tell me again?" << std::endl; 
        std::cin >> name;
        std::cout << "So your name is " << name << " correct? (y/n): " ; 
        std::cin >> choice; 
        i++; 
    } 

    std::cout << "Pleasure to meet you " << name <<"!" <<std::endl; 
    std::cout << "Can you please also tell me what you identify as (Male (M), Female (F), NonBinary(N)" << std::endl; 
    std::cin >> gender; 

    std::string genderChoice; 

    if(gender == 'M')
    {
        genderChoice = "Male"; 
    }
    else if(gender == 'F')
    {
        genderChoice = "Female"; 
    }
    else if(gender == 'N')
    {
        genderChoice = "NonBinary";
    }
        int counter = 0; 
    while(gender != 'M' && gender != 'F' && gender != 'N')
    {
        std::cout << "Sorry I did not quite hear you " << std::endl; 
        std::cout << "Can you please also tell me what you identify as (Male (M), Female (F), NonBinary(N)" << std::endl; 
        std::cin >> gender; 
        counter++; 

    }

    std::cout << "Ah your " << genderChoice << " correct?(y/n): "; 
    char correctGender; 
    std::cin >> correctGender; 

    int counterTwo = 0; 

    while(correctGender != 'y' && correctGender != 'Y')
    {
        std::cout << "My apologies, but could you repeat yourself?" << std::endl; 
        std::cin >> gender; 
        std::cout << "Ah so you're " << genderChoice << " correct?" << '\n';
        std::cin >> correctGender; 
        counterTwo++; 

    }

    std::cout << "Now that I have gotten to know a lot better we can now proceed! It is time to start your journey!" << std::endl; 
    std::cout << std::endl; 

}

void HomeTown()
{

    std::cout << "***********Vanilla Town***********" << "\n"; 
    std::cout << std::endl; 
    std::cout << "\"You have just woken up from a daze\"" << "\n"; 
    std::cout << "Mom: Sweetie... are you awake?" << "\n"; 
    std::cout << "\"You hear your mom calling you from downstairs, so you decide to head down\"" << "\n"; 
    std::cout << "Mom: Good morning " << name << "!" << " I hope you rested well!" << "\n"; 
    std::cout << "Mom: Rainbow was looking for you earlier. He said he had something to share with you." << "\n"; 
    std::cout << "Mom: You should probably head out and see what he wants to show you." << "\n"; 
    std::cout << "Mom: Are you ready to head out? (y/n)? " << "\n"; 
    char choice1; 
    std::cin >> choice1; 

    std::cout << std::endl; 

    if(choice1 == 'y' && choice1 == 'Y')
    {
        std::cout << "Mom: Okay sounds good! Get home safely." << name << "\n"; 
    }
    
    int counter = 0; 
    while(choice1 != 'y' && choice1 != 'Y')
    {
        std::cout << "Mom: Aww, come on " << name << " I'm sure it wont take long.\n Will you reconsider?";
        std::cin >> choice1; 
        counter++; 
    }

   std::cout << "\"You leave your house and are now standing outside\"" << "\n"; 

   std::cout << std::endl; 

   std::cout << "Rival: " << name << "!" << " Did you get the call from Rainbow as well?" << "\n"; 
   std::cout << "Rival: I wonder what he wants to show us..." << "\n"; 
   std::cout << "Rival: Well anyways! I will see you there. " << name << "\n"; 
   
   std::cout << "\"There are three houses in your neighborhood would you like to visit them?\" (y/n)?" << "\n"; 
   char choice2; 
   std::cin >> choice2; 

   std::string arr[3] = {"1. Charmans House", "2. Rival's House", "3. Rainbows House"};

   char choice3; 

   if(choice2 == 'y' || choice2 == 'Y')
   {
       int a, b, c; 
       std::cout << "Select which house you would like to visit." << "\n";
       int x; 

       std::cout << std::endl; 

       std::cout << arr[0] << " " << arr[1] << " " << arr[2];

       std::cout << std::endl; 

       std::cin >> x;  

       switch(x)
       {
           case 1: 

           std::cout << std::endl; 
           std::cout<< "Chairman Hankins: Hi! Are you the trainer that Rainbow has summoned to the lab?" << "\n";
           std::cout << "Chairman Hankins: I thougt so! Well, you might be needing some funds I hear he has big plans for both you and your friend." << "\n";
           std::cout << "\"You recieved $500 PokeDollars!\"" << "\n"; 
           std::cout << "\"You left Chairman Hakins House\"" << "\n"; 
           std::cout << "Select a new house you would like visit" << "\n";
           std::cout << std::endl; 
           std::cout << arr[1] << " " << arr[2] << " " << "\n";
           std::cin >> a;
           std::cout << std::endl; 
           if(a == 2)
           {
               std::cout << std::endl; 
               std::cout << "Rival's Mom: Hello Rainbow! I am currently preparing something important for Rainbow do you think you could visit another time?" << "\n"; 
               std::cout << "\"You left your Rival's House\"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << arr[2] << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cin >> a; 

           }
            if(a == 3)
           {
               std::cout << std::endl; 
               std::cout << "\"You entered Rainbow's House and find a journal\"" << "\n"; 
               std::cout << "It reads \"I recently discovered a Pokemon, one that has the power to rival the legendary Mewtwo\"" << "\n"; 
               std::cout << "It was colorful, one that I have never seen before and it's arua was so peaceful and calming." << "\n"; 
               std::cout << "It was almost as if the presence of that Pokemon made all my worries go away." << "\n"; 
               std::cout << "However, when it noticed it vanished in an instant I wonder why..." << "\n"; 
               std::cout << "\"You put the journal down and left Rainbow's House\"" << "\n";
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << arr[0] << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cin >> a; 
           }
            if(a == 2)
           {
               std::cout << std::endl; 
               std::cout << "Rival's Mom: Hello Rainbow! I am currently preparing something important for Rainbow do you think you could visit another time?" << "\n"; 
               std::cout << "\" You left your Rival's House\"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cout << arr[2] << "\n";
               std::cin >> a; 

           }
            if(a == 4)
           {
               std::cout << std::endl; 
               std::cout << "You proceeded to Rainbow's Lab" << "\n"; 

           }

            

           

           break; 
           
           case 2: 
           std::cout << std::endl; 
           std::cout << "Rival's Mom: Hello Rainbow! I am currently preparing something important for Rainbow do you think you could visit another time?" << "\n"; 
           std::cout << "\"You left your Rival's House\"" << "\n"; 
           std::cout << "Select a new house you would like visit" << "\n";
           std::cout << arr[0] << " " << arr[2] << " " << "\n";
           std::cin >> a;
           std::cout << std::endl; 
           if(a == 1)
           {
               std::cout << std::endl; 
               std::cout<< "Chairman Hankins: Hi! Are you the trainer that Rainbow has summoned to the lab?" << "\n";
               std::cout << "I thougt so! Well, you might be needing some funds I hear he has big plans for both you and your friend." << "\n";
               std::cout << "\"You recieved $500 PokeDollars!\"" << "\n"; 
               std::cout << "\"You left Chairman Hakins House\"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << arr[2] << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cin >> a; 

           }
            if(a == 3)
           {
               std::cout << std::endl; 
               std::cout << "\"You entered Rainbow's House and find a journal\"" << "\n"; 
               std::cout << "It reads \"I recently discovered a Pokemon, one that has the power to rival the legendary Mewtwo\"" << "\n"; 
               std::cout << "It was colorful, one that I have never seen before and it's arua was so peaceful and calming." << "\n"; 
               std::cout << "It was almost as if the presence of that Pokemon made all my worries go away." << "\n"; 
               std::cout << "However, when it noticed it vanished in an instant I wonder why..." << "\n"; 
               std::cout << "\"You put the journal down and left Rainbow's House\"" << "\n";
               std::cout << "Select a new house you would like visit" << "\n"; 
               std::cout << arr[0] << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cin >> a; 
           }

           if(a == 1)
           {
               std::cout << std::endl; 
               std::cout<< "Chairman Hankins: Hi! Are you the trainer that Rainbow has summoned to the lab?" << "\n";
               std::cout << "I thougt so! Well, you might be needing some funds I hear he has big plans for both you and your friend." << "\n";
               std::cout << "\"You recieved $500 PokeDollars!\"" << "\n"; 
               std::cout << "\"You left Chairman Hakins House \"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << "Or if you are finished press 4." << "\n"; 
               std::cout << arr[2] << "\n";
               std::cin >> a; 
           }

             if(a == 4)
           {
               std::cout << std::endl; 
               std::cout << "You proceeded to Rainbow's Lab" << "\n"; 

           }

           break; 

            case 3: 
              std::cout << std::endl; 
              std::cout << "\" You entered Rainbow's House and find a journal \"" << "\n"; 
              std::cout << "It reads \"I recently discovered a Pokemon, one that has the power to rival the legendary Mewtwo\"" << "\n"; 
              std::cout << "It was colorful, one that I have never seen before and it's arua was so peaceful and calming." << "\n"; 
              std::cout << "It was almost as if the presence of that Pokemon made all my worries go away." << "\n"; 
              std::cout << "However, when it noticed it vanished in an instant I wonder why..." << "\n"; 
              std::cout << "\" You put the journal down and left Rainbow's House\"" << "\n";
              std::cout << "Select a new house you would like visit" << "\n";
              std::cout << arr[0] << " " << arr[1] << " " << "\n";
              std::cin >> a;
              std::cout << std::endl; 
           if(a == 1)
           {
               std::cout << std::endl; 
               std::cout<< "Chairman Hankins: Hi! Are you the trainer that Rainbow has summoned to the lab?" << "\n";
               std::cout << "I thougt so! Well, you might be needing some funds I hear he has big plans for both you and your friend." << "\n";
               std::cout << "\"You recieved $500 PokeDollars!\"" << "\n"; 
               std::cout << "\"You left Chairman Hakins House \"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << "Or if you are finished press 4." << "\n";
               std::cout << arr[1] << "\n";
               std::cin >> a; 

           }
            if(a == 2)
           {
               std::cout << std::endl; 
               std::cout << "Rival's Mom: Hello Rainbow! I am currently preparing something important for Rainbow do you think you could visit another time?" << "\n"; 
               std::cout << "\"You left your Rival's House\"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << "Or if you are finished press 4." << "\n";
               std::cout << arr[0] << "\n";
               std::cin >> a;      
           }

            if(a == 1)
           {
               std::cout << std::endl; 
               std::cout<< "Chairman Hankins: Hi! Are you the trainer that Rainbow has summoned to the lab?" << "\n";
               std::cout << "I thougt so! Well, you might be needing some funds I hear he has big plans for both you and your friend." << "\n";
               std::cout << "\"You recieved $500 PokeDollars!\"" << "\n"; 
               std::cout << "\"You left Chairman Hakins House \"" << "\n"; 
               std::cout << "Select a new house you would like visit" << "\n";
               std::cout << "Or if you are finished press 4." << "\n";
               std::cout << arr[1] << "\n";
               std::cin >> a; 

           }


            if(a == 4)
           {
               std::cout << "You proceeded to Rainbow's Lab" << "\n"; 

           }
            

           break; 
       }

       std::cout << "You proceeded to Rainbow's Lab" << "\n"; 
   }



}

void Lab()
{
    std::cout << std::endl;
    std::cout << "\"You entered Rainbow's Lab\"" << "\n"; 
    std::cout << "Rainbow: Hello! " << name << " I have been expecting you!" << "\n"; 
    std::cout << "\"You proceed to look at all the computers that Rainbow has in his lab\"" << "\n"; 
    std::cout << "Rainbow: Sorry about all the tech I really do need to clean this place up when I have the chance." << "\n"; 
    std::cout << "Rival: But, you're always writing that weird code on the computers, hence why you never clean." << "\n";
    std::cout << "Rainbow: I'll have you know Jake. That the \"weird code\" is called C++" << "\n"; 

    std::cout << std::endl; 

    std::cout << "Jake: Whatever..." << "\n"; 
    std::cout << "Rainbow: Anyways " << name << " I gathered both you and Jake here to discuss something I found while exploring out in Galar." << "\n"; 
    std::cout << "Rainbow: It was a mysterous Pokemon one that had so much power." << "\n"; 
    std::cout << "Rainbow: However, as soon as it noticed me it had immediately vanished." << "\n";
    std::cout << "Rainbow: Luckily I was quick enough to use the C++ Pokedex Program I made to capture it's data." << "\n"; 
    std::cout << "Rainbow: You may be wondering what this has to do with you two?" << "\n"; 
    std::cout << "Rainbow: I was hoping you two would help me find it!" << "\n";
    
    std::cout << std::endl;

    std::cout << "Jake: Will I be able to get my own Pokemon if I agree to help?" << "\n";
    std::cout << "Rainbow: Of course Jake! I would not send both you and " << name << " with nothing just like that..." << "\n";
    std::cout << "Rainbow: Which reminds me..." << "\n"; 

    std::cout << std::endl; 

    std::cout << "\"You see Rainbow pull out a case filled with three PokeBalls\"" << "\n"; 

    std::cout << "Rainbow: " << name << " I'll have you take the first pick." << "\n";

    std::cout << "\"You step forward and notice that the Pokemon Rainbow has are Bulbasuar, Charmander, and Squirtle\"" << "\n"; 

    std::cout << std::endl; 

    
    std::cout << "Rainbow: Select which prokemon you'd like to pick " << name << "!" << "\n";

    std::cout << std::endl;
    std::cout << "1. Bulbasaur" << std::endl;
    std::cout << "2. Charmander" << std::endl; 
    std::cout << "3. Squirtle" << std::endl;



    std::cout << "Rainbow: Choose 1 starter." << std::endl;


}

void ending()
{
    std::cout << "Jake: ... but how??" << std::endl; 
    std::cout << "Rainbow: It's normal Jake as a trainer you may have to face many defeats, but you yourself will not be defeated by those defeats." << std::endl; 
    std::cout << "Jake: I mean I guess so..." << std::endl; 
    std::cout << "Rainbow: Any how let me heal up both your Pokemon." << std::endl; 
    std::cout << "\"Rainbow Healed Your Pokemon\"" << std::endl; 
    std::cout << "Rainbow: Alirght you two, let me grab my laptop and pull up the information I have about that Pokemon" << std::endl; 
    std::cout << "\"You hear the lab door get kicked down!\"" << std::endl; 
    std::cout << "Rainbow: HEY! That's expensive! I'm already in a lot of debt in student loans as it is!" << std::endl; 
    std::cout << "Villain One: Quiet you skittle!" << std::endl; 
    std::cout << "Rainbow: UGH! Excuse me?" << std::endl; 
    std::cout << "Rainbow: Who even are you people?" << std::endl; 
    std::cout << "Villain Two: We're team Linear." << std::endl; 
    std::cout << "Villain Three: That's right!" << std::endl; 
    std::cout << "Rainbow: Is your boss a mathmatician or something?" << std::endl; 
    std::cout << "Villain One: Yep!" << std::endl; 
    std::cout << "Rainbow: I'm not surprised." << std::endl; 
    std::cout << "Villain Two: Give us that laptop!" << std::endl; 
    std::cout << "Rainbow: " <<  name << ", Jake we have to defend the information I think they're after that Pokemon as well..." << std::endl; 
    std::cout << "Villain One: Haha! A skittle and a couple of teenangers are no match for Team Linear" << std::endl; 
    std::cout << "Rainbow: Aright guys... Leave this one to me you two, take on the other two goons!" << std::endl; 
    std::cout << "Jake: Okay " << name << " are you ready? (y)?" << std::endl; 
    char checkpoint ; 
    std::cin >> checkpoint; 
    std::cout << "Jake: Alright let's do this!" << std::endl; 
}

void ending2()
{
    std::cout << "Team Linear Grunt Two: How can we lose to a couple of kids?" << std::endl; 
    std::cout << "Team Linear Grunt Three: The boss is gonna kill us." << std::endl; 
    std::cout << "Rainbow: Ha! Take that you math junkie!" << std::endl; 
    std::cout << "Team Linear Grunt One: Let's retreat you guys! We'll let the boss know what happened" << std::endl; 
    std::cout << "\"You watch as the villains storm out of the lab\"" << std::endl; 
    std::cout << "Rainbow: Are you guys alright?" << std::endl;
    std::cout << "Jake: We're fine." << std::endl;  
    std::cout << "Rainbow: Great job you two. You guys did amazing." << std::endl; 
    std::cout << "Jake: I didn't know you actually had some powerful pokemon on your team were you a trainer at some point?" << std::endl; 
    std::cout << "Rainbow: I was a long time ago back in the Sinnoh Region" << std::endl; 
    std::cout << "Rainbow: But anyways that's not the point right now." << std::endl; 
    std::cout << "Rainbow: I need to contact Professor Oak and alert him on what had happened. " << std::endl; 
    std::cout <<"Rainbow: Come one answer..." << std::endl;
    std::cout << "Great... He didn't answer." << std::endl; 
    std::cout << "Jake: What are we gonna do?" << std::endl; 
    std::cout << "Rainbow: I'm not sure Jake, but what I do know is... we need to do everthing we can to take out Team Linear" << std::endl; 
    std::cout << "Rainbow: If they get their hands on such a powerful pokemon then it means trouble for our region." << std::endl; 
    std::cout << "Rainbow: " << name << " Jake get ready because it only gets worse from here..." << std::endl;

    std::cout << std::endl; 

    std::cout << "TO BE CONTINUED" << std::endl;   
}

int pokeChoice; 

int main()
{
      welcome(); 
      HomeTown(); 
      Lab(); 
    std::cin >> pokeChoice; 
    Pokemon Bulba("Bulbasaur", "Tackle", "Leer", "Vine Whip", "Grass", 5, 'M', 45 );
    Pokemon Char("Charmander", "Scratch", "Tail Whip", "Ember", "Fire", 5, 'M', 39);
    Pokemon Squir("Squirtle", "Tackle", "Tail Whip", "Water Gun", "Water", 5, 'F', 44);
    Pokemon v("Patrat", "Tackle", "Leer", "Tail Whip", "Normal", 4, 'F', 30);
    Pokemon v2("Zubat", "Tackle", "Leer", "Tail Whip", "Flying", 4, 'M',  30); 


    int CharsHealth; 

    if(pokeChoice == 1)
    {
        Bulba.Chosen(); 
        Char.Rival(); 
        std::cout << "Jake: Hey " << name << " now that we both have Pokemon I wanna battle you!" << "\n"; 
        std::cout << "Rainbow: Jake... already?" << "\n"; 
        std::cout << "Jake: " << name <<" What do you think? (y/n)" << "\n"; 
        char battleOne; 
        std::cin >> battleOne; 
        if(battleOne != 'y' && battleOne != 'Y')
        {
            std::cout << "Jake: Too bad! Sorry, but I have been waiting too long for this!" << "\n"; 
        }
        std::cout << "Jake: Alright! Let's do this!" << std::endl; 

        std::cout << "\"You are challenged by your rival Jake\"" << "\n"; 

        Bulba.Out(); 
        Char.RivalOut(); 

        std::cout << std::endl; 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        int SelectionBattle; 
        
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Leer" << "\n";
        std::cin >> SelectionBattle; 

        bool LeerFlag = false; 
        
        int selected; 
        if(SelectionBattle == 1)
        {
            Bulba.yourMove();  
            
            std::cout << "Charmander's Health is now " << Char.getRivalHealth() << std::endl; 
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getHealth() << std::endl;
            
        }
        if(SelectionBattle == 2)
        {
            Bulba.yourMove2(); 
            std::cout << "Charmander's Attack fell" << "\n";  
            LeerFlag = true; 
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getAttackLow() << "\n"; 
        }
 
        
        int battleCounter = 0; 
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Leer" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Bulba.yourMove(); 
            std::cout << "Charmander's Health is now " << Char.getRivalHealth2() << std::endl;
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getHealth() - 12 << std::endl;
        }
        else if(SelectionBattle == 2)
        {
            Bulba.yourMove2(); 
            std::cout << "Charmander's Attack fell" << "\n";  
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getAttackLow() - 3 << std::endl;    
        }
       
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Leer" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Bulba.yourMove(); 
            std::cout << "Charmander's Health is now " << Char.getRivalHealth3() << std::endl;
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getHealth() - 18 << std::endl;
            
        }
        else if(SelectionBattle == 2)
        {
            Bulba.yourMove2(); 
            std::cout << "Charmander's Attack fell" << "\n";  
            Char.RivalMove1();
            std::cout << "Bulbsaur's Health is " << Bulba.getAttackLow() - 9 << std::endl;    
        }

        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Bulba.yourMove(); 
            std::cout << "Charmander's Health is now " << Char.getRivalHealth4() - 3 << std::endl;
        
            std::cout << "************************************************" << std::endl; 

            std::cout << "Rainbow: Jake's Charmander is unable to battle " << name << " is the winner!" << std::endl; 

        }

        while(SelectionBattle != 1 && SelectionBattle != 2)
        {
            std::cout << "Your Pokemon does not know that move" << std::endl; 
            std::cout << "1. Tackle" << "\n";
            std::cout << "2. Tail Whip" << "\n";
            std::cin >> SelectionBattle; 
            battleCounter++; 
        }

        std::cout << "\"Bulbasaur gained 100xp\"" << std::endl; 
        std::cout << "\"Bulbasaur leveled up to 6\"" << std::endl; 
        std::cout << "\"Bulbsaur learned vine whip\"" << std::endl;

         ending();  


        std::cout << "You are Challenged by Team Linear Grunt One and Team Linear Grunt Two. " << std::endl; 
        
        v.sentOut(); 
        v2.sentOut(); 

        std::cout << std::endl; 

        Bulba.Out(); 
        Char.RivalOut(); 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Leer" << "\n";
        std::cout << "3. Vine Whip" << "\n"; 
        std::cin >> SelectionBattle; 

        int targetPoke; 
        std::cout << "Select a target!" << std::endl; 
        std::cout << "1. Patrat" << std::endl; 
        std::cout << "2. Zubat" << std::endl; 
        std::cin >> targetPoke; 

        if(SelectionBattle == 1 && targetPoke == 1)
        {
             Bulba.yourMove(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
             Char.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 1)
        {
             Bulba.yourMove2(); 
             std::cout << "Grunt One's Patrat Attack Fell" << std::endl; 
             Char.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Charmanders health is now " << Char.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Bulba.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 1)
        {
             Bulba.yourMove3(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Char.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

        if(SelectionBattle == 1 && targetPoke == 2)
        {
             Bulba.yourMove(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
             Char.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
             std::cout << "Grunt Two's Zubat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v.attackOne1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                std::cout << "Grunt One's Patrat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                 std::cout << "Grunt One's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 2)
        {
             Bulba.yourMove2(); 
             std::cout << "Grunt Two's Zubat Attack Fell" << std::endl; 
             Char.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Charmanders health is now " << Char.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Bulba.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 2)
        {
             Bulba.yourMove3(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Char.RivalMove1(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Zubat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Vine Whip" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Bulba.yourMove(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt One's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Bulba.yourMove3(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Char.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

    }
    if(pokeChoice == 2)
    {
        Char.Chosen();
        Squir.Rival(); 
        std::cout << "Jake: Hey " << name << " now that we both have Pokemon I wanna battle you!" << "\n"; 
        std::cout << "Rainbow: Jake... already?" << "\n"; 
        std::cout << "Jake: " << name << " What do you think? (y/n)" << "\n"; 
        char battleOne; 
        std::cin >> battleOne; 
        if(battleOne != 'y' && battleOne != 'Y')
        {
            std::cout << "Jake: Too bad! Sorry, but I have been waiting too long for this!" << "\n"; 
        }
        std::cout << "Jake: Alright! Let's do this!" << std::endl; 

        std::cout << "\"You are challenged by your rival Jake\"" << "\n"; 

        Char.Out(); 
        Squir.RivalOut(); 

        std::cout << std::endl; 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        int SelectionBattle; 
        
        std::cout << "1. Scratch" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        bool LeerFlag = false; 
        
        int selected; 
        if(SelectionBattle == 1)
        {
            Char.yourMove();  
            
            std::cout << "Squirtle's Health is now " << Squir.getRivalHealth() << std::endl; 
            Squir.RivalMove1();
            std::cout << "Charmander's Health is " << Char.getHealth() << std::endl;
            
        }
        if(SelectionBattle == 2)
        {
            Char.yourMove2(); 
            std::cout << "Squirtle's Defense fell" << "\n";  
            LeerFlag = true;  
        }
 
        
        int battleCounter = 0; 
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Scratch" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Char.yourMove(); 
            std::cout << "Squirtle's Health is now " << Squir.getRivalHealth2() << std::endl;
            Squir.RivalMove2();
            std::cout << "Charmander's Defense fell" << std::endl;
        }
        else if(SelectionBattle == 2)
        {
            Char.yourMove2(); 
            std::cout << "Squirtle's Defense fell" << "\n";  
            Squir.RivalMove2();
                
        }
       
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Scratch" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Char.yourMove(); 
            std::cout << "Squirtle's Health is now " << Squir.getRivalHealth3() << std::endl;
            Squir.RivalMove1();
            std::cout << "Charmander's Health is " << Char.getHealth() - 15 << std::endl;
            
        }
        else if(SelectionBattle == 2)
        {
            Char.yourMove2(); 
            std::cout << "Squirtle's Defense fell" << "\n";  
            Squir.RivalMove1();
              
        }

        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Scratch" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Bulba.yourMove(); 
            std::cout << "Squirtle's Health is now " << Char.getRivalHealth4() - 3 << std::endl;
        
            std::cout << "************************************************" << std::endl; 

            std::cout << "Rainbow: Jake's Squirtle is unable to battle " << name << " is the winner!" << std::endl; 

        }

        while(SelectionBattle != 1 && SelectionBattle != 2)
        {
            std::cout << "Your Pokemon does not know that move" << std::endl; 
            std::cout << "1. Scratch" << "\n";
            std::cout << "2. Tail Whip" << "\n";
            std::cin >> SelectionBattle; 
            battleCounter++; 
        }

        std::cout << "\"Charmander gained 100xp\"" << std::endl; 
        std::cout << "\"Charmander leveled up to 6\"" << std::endl; 
        std::cout << "\"Charmander learned Ember\"" << std::endl; 


            ending(); 



        Char.Out(); 
        Squir.RivalOut(); 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        std::cout << "1. Scratch" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cout << "3. Ember" << "\n"; 
        std::cin >> SelectionBattle; 

        int targetPoke; 
        std::cout << "Select a target!" << std::endl; 
        std::cout << "1. Patrat" << std::endl; 
        std::cout << "2. Zubat" << std::endl; 
        std::cin >> targetPoke; 

        if(SelectionBattle == 1 && targetPoke == 1)
        {
             Char.yourMove(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
             Squir.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v2.attackTwo1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 1)
        {
             Char.yourMove2(); 
             std::cout << "Grunt One's Patrat Attack Fell" << std::endl; 
             Squir.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Charmanders health is now " << Char.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Squirtle's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Char.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 1)
        {
             Char.yourMove3(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Squir.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

        if(SelectionBattle == 1 && targetPoke == 2)
        {
             Char.yourMove(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
             Squir.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
             std::cout << "Grunt Two's Zubat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v.attackOne1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                std::cout << "Grunt One's Patrat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                 std::cout << "Grunt One's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 2)
        {
             Char.yourMove2(); 
             std::cout << "Grunt Two's Zubat Attack Fell" << std::endl; 
             Squir.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Charmanders health is now " << Char.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Squirtle's health is now " << Squir.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Scartch" << "\n";
             std::cout << "3. Ember" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Char.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() - 2 << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 2)
        {
             Char.yourMove3(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Squir.RivalMove1(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Zubat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Charmander's health is now " << Char.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Scratch" << "\n";
             std::cout << "3. Ember" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Char.yourMove(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Squir.RivalMove1(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt One's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Char.yourMove3(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Squir.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

 
    }

    if(pokeChoice == 3)
    {
        Squir.Chosen(); 
        Bulba.Rival(); 
         std::cout << "Jake: Hey " << name << " now that we both have Pokemon I wanna battle you!" << "\n"; 
        std::cout << "Rainbow: Jake... already?" << "\n"; 
        std::cout << "Jake: " << name << " What do you think? (y/n)" << "\n"; 
        char battleOne; 
        std::cin >> battleOne; 
        if(battleOne != 'y' && battleOne != 'Y')
        {
            std::cout << "Jake: Too bad! Sorry, but I have been waiting too long for this!" << "\n"; 
        }
        std::cout << "Jake: Alright! Let's do this!" << std::endl; 

        std::cout << "\"You are challenged by your rival Jake\"" << "\n"; 

        Squir.Out(); 
        Bulba.RivalOut(); 

        std::cout << std::endl; 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        int SelectionBattle; 
        
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        bool LeerFlag = false; 
        
        int selected; 
        if(SelectionBattle == 1)
        {
            Squir.yourMove();  
            
            std::cout << "Bulbasaur's Health is now " << Bulba.getRivalHealth() << std::endl; 
            Bulba.RivalMove1();
            std::cout << "Squirlte's Health is " << Squir.getHealth() << std::endl;
            
        }
        if(SelectionBattle == 2)
        {
            Char.yourMove2(); 
            std::cout << "Bulbasaur's Defense fell" << "\n";  
            LeerFlag = true;  
        }
 
        
        int battleCounter = 0; 
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Squir.yourMove(); 
            std::cout << "Bulbasaur's Health is now " << Bulba.getRivalHealth2() << std::endl;
            Bulba.RivalMove2();
            std::cout << "Squirtle's Defense fell" << std::endl;
        }
        else if(SelectionBattle == 2)
        {
            Squir.yourMove2(); 
            std::cout << "Bulbasaur's Defense fell" << "\n";  
            Char.RivalMove2();
            std::cout << "Squirtle's Defense fell" << std::endl;
                
        }
       
        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Squir.yourMove(); 
            std::cout << "Bulbasaur's Health is now " << Bulba.getRivalHealth3() << std::endl;
            Bulba.RivalMove1();
            std::cout << "Squirlte's Health is " << Squir.getHealth() - 15 << std::endl;
            
        }
        else if(SelectionBattle == 2)
        {
            Squir.yourMove2(); 
            std::cout << "Bulbasuar's Defense fell" << "\n";  
            Bulba.RivalMove1();
              
        }

        std::cout << "It's your turn" << std::endl; 
        std::cout << "1. Tackle" << "\n";
        std::cin >> SelectionBattle; 

        if(SelectionBattle == 1)
        {
            Squir.yourMove(); 
            std::cout << "Bulbasaur's Health is now " << Bulba.getRivalHealth4() - 9 << std::endl;
        
            std::cout << "************************************************" << std::endl; 

            std::cout << "Rainbow: Jake's Bulbasaur is unable to battle " << name << " is the winner!" << std::endl; 

        }

        while(SelectionBattle != 1 && SelectionBattle != 2)
        {
            std::cout << "Your Pokemon does not know that move" << std::endl; 
            std::cout << "1. Tackle" << "\n";
            std::cout << "2. Tail Whip" << "\n";
            std::cin >> SelectionBattle; 
            battleCounter++; 
        }

        std::cout << "\"Squirtle gained 100xp\"" << std::endl; 
        std::cout << "\"Squirtle leveled up to 6\"" << std::endl; 
        std::cout << "\"Squirtle learned Water Gun\"" << std::endl; 

        ending(); 


        Squir.Out(); 
        Bulba.RivalOut(); 

        std::cout << "Select a move you'd like to use!" << std::endl; 

        std::cout << "1. Tackle" << "\n";
        std::cout << "2. Tail Whip" << "\n";
        std::cout << "3. Water Gun" << "\n"; 
        std::cin >> SelectionBattle; 

        int targetPoke; 
        std::cout << "Select a target!" << std::endl; 
        std::cout << "1. Patrat" << std::endl; 
        std::cout << "2. Zubat" << std::endl; 
        std::cin >> targetPoke; 

        if(SelectionBattle == 1 && targetPoke == 1)
        {
             Squir.yourMove(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
             Bulba.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v2.attackTwo1(); 
             std::cout << "Squirtle's health is now " << Squir.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Bulba.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 1)
        {
             Squir.yourMove2(); 
             std::cout << "Grunt One's Patrat Attack Fell" << std::endl; 
             Bulba.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Squirtle's health is now " << Squir.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Squir.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() - 3 << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Bulba.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 1)
        {
             Squir.yourMove3(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Bulba.RivalMove1(); 
             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Patrat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() - 6 << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Bulba.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

        if(SelectionBattle == 1 && targetPoke == 2)
        {
             Squir.yourMove(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
             Bulba.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
             std::cout << "Grunt Two's Zubat Fainted" << std::endl; 
             
             std::cout << std::endl; 

             v.attackOne1(); 
             std::cout << "Squirtle's health is now " << Squir.getAttackLow() << std::endl;
             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 
             std::cout << "It's your turn" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 10 << std::endl; 
                Char.RivalMove1(); 
                std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                std::cout << "Grunt One's Patrat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
                 std::cout << "Grunt One's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl;        
             }
        
        }  
        else if(SelectionBattle == 2 && targetPoke == 2)
        {
             Squir.yourMove2(); 
             std::cout << "Grunt Two's Zubat Attack Fell" << std::endl; 
             Bulba.RivalMove1(); 
             std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl; 

             v.attackOne1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl; 
             std::cout << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Squirtle's health is now " << Squir.getAttackLow() << std::endl;

             std::cout << "It's your turn!" << std::endl; 
             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 

             std::cin >> SelectionBattle; 
             std::cout << "Select a target!" << std::endl; 
             std::cout << "1. Patrat" << std::endl; 

             std::cin >> targetPoke; 
             Squir.yourMove(); 

             std::cout << "Patrat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Patrat fainted" << std::endl;

             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() - 2 << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Bulba.RivalMove1(); 
                std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Zubat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Zubat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
        } 
        
        else if(SelectionBattle == 3 && targetPoke == 2)
        {
             Squir.yourMove3(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 20 << std::endl;
             Bulba.RivalMove1(); 
             std::cout << "Zubat's health is now " << v.getVHealthOne() - 30 << std::endl; 
             std::cout << "Grunt One's Zubat fainted" << std::endl; 
             v2.attackTwo1(); 
             std::cout << "Bulbasaur's health is now " << Bulba.getAttackLow() << std::endl;

             std::cout << "Jake: Alright " << name << "! let's finish him off!" << std::endl; 

             std::cout << "It's your turn" << std::endl; 

             std::cout << "1. Tackle" << "\n";
             std::cout << "3. Water Gun" << "\n"; 
             std::cin >> SelectionBattle; 
             if(SelectionBattle == 1)
             {
                Squir.yourMove(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 10 << std::endl; 
                Bulba.RivalMove1(); 
                std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                std::cout << "Grunt One's Zubat fainted" << std::endl; 
                std::cout << "***************************************************" << std::endl;

             }
             else if(SelectionBattle == 3)
             {
                 Squir.yourMove3(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 20 << std::endl;
                 Bulba.RivalMove1(); 
                 std::cout << "Patrat's health is now " << v2.getVHealthTwo() - 30 << std::endl; 
                 std::cout << "Grunt Two's Patrat fainted" << std::endl; 
                 std::cout << "***************************************************" << std::endl; 
             } 
             
        }  

    }
    ending2(); 
}
