#include <exception>

#include "CanvasUpdater.hpp"

void TSGui::CanvasUpdater::add(const CanvasInfo& Item)
{
    if(Item.first == nullptr)
        throw std::runtime_error("Bad shared pointer");
    Items.emplace_back(Item);
}

TSGui::CanvasUpdater::CanvasUpdater(std::function< bool() > Handler)
    :IsOpenFunc(Handler)
{}

void TSGui::CanvasUpdater::RemoveOrphans()
{
    for(auto Item = Items.begin(); Item != Items.end();)
    {
        if(Item->first.use_count() == 1)
        {
            std::puts("Destroy");
            Item = Items.erase(Item);
        }
        else
            Item++;
    }
}

void TSGui::CanvasUpdater::Update()
{
    if(IsOpenFunc() == false)
        return;
    for(CanvasInfo& Item : Items)
        if(Item.second)
            Item.second();
}