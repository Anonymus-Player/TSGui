#pragma once

#include "../Widgets/Widgets.hpp"

namespace TSGui
{
    namespace Handlers
    {
        ///
        ///
        ///
        void HandleVScrollbar(tgui::Canvas::Ptr Canvas, tgui::Scrollbar::Ptr VerticalScroll);
        ///
        ///
        ///
        void HandleHScrollbar(tgui::Canvas::Ptr Canvas, tgui::Scrollbar::Ptr HorizontalScroll);
        ///
        ///
        ///
        void ScaleScrollableCanvas(tgui::Group::Ptr BoxLayout, tgui::Canvas::Ptr Canvas, 
            tgui::Scrollbar::Ptr VerticalScroll, tgui::Scrollbar::Ptr HorizontalScroll);
        ///
        ///
        ///
        void Handle2DList(tgui::ListView::Ptr ListView);
    }
}