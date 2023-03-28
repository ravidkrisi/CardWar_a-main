#pragma once 

namespace ariel {
    class Card
    {
        private:
            // define attributes 
            enum CardSign{SPADES=1, HEARTS=2, CLUBS=3, DIAMONDS=4};
            enum CardValue{ACE=1, TWO=2, THREE=3, FOUR=4, 
                            FIVE=5, SIX=6, SEVEN=7, EIGHT=8, 
                            NINE=9, TEN=10, PRINCE=11, QUEEN=12, KING=13};

        public:
            // declare constructor and deconstructor
            Card(int sign, int value); // constructor
            ~Card(); //deconstructor 
            // declare set get functions 
            void setSign(int sign);
            void setValue(int value);
    };

    // void Card::setSign(int sign)
    // {
    //     if(sign == 1)
    //     {
    //         CardSign(SPADES);
    //     }
    //     if(sign == 2)
    //     {
    //         CardSign(HEARTS);
    //     }
    //     if(sign == 3)
    //     {
    //         CardSign(CLUBS);
    //     }
    //     if(sign == 4)
    //     {
    //         CardSign(DIAMONDS);
    //     }
    // }
}
