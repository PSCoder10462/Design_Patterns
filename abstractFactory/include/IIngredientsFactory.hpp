#pragma once
#include "ISauce.hpp"
#include "IToppings.hpp"
#include <memory>

class IIngredientsFactory {
    public:
        virtual std::unique_ptr<IToppings>CreateToppings () = 0;
        virtual std::unique_ptr<ISauce>CreateSauce () = 0;
        virtual ~IIngredientsFactory() = default;
};
