#include "Setters.hpp"

template< typename Value >
void TSGui::Setters::getEditBoxValue(tgui::EditBox::Ptr EditBox, Value& Variable)
{
    std::string Text = EditBox->getText();
    if(Text.length() == 0)
        return;

    if constexpr(std::is_floating_point< Value >::value)
    {
        Variable = static_cast< Value >(std::stof(Text));
    }
    else if constexpr(std::is_integral< Value >::value)
    {
        Variable = static_cast< Value >(std::stoi(Text));
    }
    else if constexpr(std::is_same< Value, std::string >::value)
        Variable = Text;
}

template< typename Value >
void TSGui::Setters::getComboBoxValue(tgui::ComboBox::Ptr ComboBox, Value& Variable)
{
    if constexpr(std::is_enum< Value >::value)
    {
        int Index = ComboBox->getSelectedItemIndex();
        Variable = static_cast< Value >(Index);
    }
    else if constexpr(std::is_same< Value, std::string >::value)
    {
        Variable = ComboBox->getSelectedItem(); 
    }
    else if constexpr(std::is_integral< Value >::value)
    {
        Variable = ComboBox->getSelectedItemIndex();
    }
}