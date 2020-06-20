#pragma once

#include <TGUI/Widgets/EditBox.hpp>
#include <TGUI/Widgets/ComboBox.hpp>


namespace TSGui
{
    namespace Setters
    {
        ///
        ///
        ///
        template< typename Value >
        static void getEditBoxValue(tgui::EditBox::Ptr EditBox, Value& Variable);
        ///
        ///
        ///
        template< typename Value >
        static void getComboBoxValue(tgui::ComboBox::Ptr ComboBox, Value& Variable);
    }
}

#include "Setters.tpp"