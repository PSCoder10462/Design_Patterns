#pragma once
#include "ISauce.hpp"
#include "IToppings.hpp"

class IIngredientsFactory {
    public:
        virtual IToppings *CreateToppings () = 0;
        virtual ISauce *CreateSauce () = 0;
        virtual ~IIngredientsFactory() = default;
};
