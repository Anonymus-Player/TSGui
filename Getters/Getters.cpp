#include "Getters.hpp"

tgui::Layout2d TSGui::Getters::getScale(const sf::Vector2f& Left, const sf::Vector2f& ParentSize)
{
    static auto ToScale = [](float Result)
    {
        return std::to_string(Result * 100) + "%";
    };

    if(Left == sf::Vector2f())
        return {"0%", "0%"};
    return tgui::Layout2d(ToScale(Left.x / ParentSize.x), ToScale(Left.y / ParentSize.y));
}

tgui::Layout2d TSGui::Getters::getCenterScale(const sf::Vector2f& Size, const sf::Vector2f& ParentSize)
{
    sf::Vector2f CenterPos = (ParentSize - Size) / 2.f;
    return getScale(CenterPos, ParentSize);
}