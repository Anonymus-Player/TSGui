#pragma once

#include <TGUI/Layout.hpp>

namespace TSGui
{
    namespace Getters
    {
        ///
        ///
        ///
        static tgui::Layout2d getScale(
            const sf::Vector2f& Left, const sf::Vector2f& ParentSize = {1280, 768});
        ///
        ///
        ///
        static tgui::Layout2d getCenterScale(
            const sf::Vector2f& Size, const sf::Vector2f& ParentSize = {1280, 768});
    }
}