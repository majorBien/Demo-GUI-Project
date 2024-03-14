/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen4_screen/Screen4ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen4ViewBase::Screen4ViewBase() :
    buttonCallback(this, &Screen4ViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &Screen4ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BACKGROUNDS_MAIN_BG_PORTRAIT_TEXTURE_240X320PX_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(7, 174, 50, 50);

    flexButton2.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setPosition(51, 174, 50, 50);

    flexButton3.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton3.setBorderSize(5);
    flexButton3.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton3.setPosition(95, 174, 50, 50);

    flexButton4.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton4.setBorderSize(5);
    flexButton4.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton4.setPosition(7, 218, 50, 50);

    flexButton5.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton5.setBorderSize(5);
    flexButton5.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton5.setPosition(51, 218, 50, 50);

    flexButton6.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton6.setBorderSize(5);
    flexButton6.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton6.setPosition(95, 218, 50, 50);

    flexButton7.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton7.setBorderSize(5);
    flexButton7.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton7.setPosition(7, 264, 50, 50);

    flexButton8.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton8.setBorderSize(5);
    flexButton8.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton8.setPosition(51, 264, 50, 50);

    flexButton9.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton9.setBorderSize(5);
    flexButton9.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton9.setPosition(95, 264, 50, 50);

    flexButton2_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton2_1.setBorderSize(5);
    flexButton2_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2_1.setPosition(140, 174, 50, 50);

    flexButton3_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton3_1.setBorderSize(5);
    flexButton3_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton3_1.setPosition(185, 174, 50, 50);

    flexButton5_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton5_1.setBorderSize(5);
    flexButton5_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton5_1.setPosition(140, 218, 50, 50);

    flexButton6_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton6_1.setBorderSize(5);
    flexButton6_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton6_1.setPosition(185, 218, 50, 50);

    flexButton8_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton8_1.setBorderSize(5);
    flexButton8_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton8_1.setPosition(140, 264, 50, 50);

    flexButton9_1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton9_1.setBorderSize(5);
    flexButton9_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton9_1.setPosition(185, 264, 50, 50);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_320X240PX_ID));
    scalableImage1.setPosition(7, 60, 227, 114);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    calculation_text_area.setPosition(18, 71, 205, 29);
    calculation_text_area.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    calculation_text_area.setLinespacing(0);
    Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID8).getText());
    calculation_text_area.setWildcard(calculation_text_areaBuffer);
    calculation_text_area.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));

    textArea2.setXY(7, 102);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));

    result_text_area.setXY(18, 131);
    result_text_area.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    result_text_area.setLinespacing(0);
    Unicode::snprintf(result_text_areaBuffer, RESULT_TEXT_AREA_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID11).getText());
    result_text_area.setWildcard(result_text_areaBuffer);
    result_text_area.resizeToCurrentText();
    result_text_area.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));

    textArea4.setXY(25, 187);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));

    textArea5.setXY(70, 187);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));

    textArea6.setXY(114, 187);
    textArea6.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea6.setLinespacing(0);
    textArea6.setTypedText(touchgfx::TypedText(T_SINGLEUSEID14));

    textArea7.setXY(25, 231);
    textArea7.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea7.setLinespacing(0);
    textArea7.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));

    textArea8.setXY(70, 231);
    textArea8.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea8.setLinespacing(0);
    textArea8.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));

    textArea9.setXY(114, 231);
    textArea9.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea9.setLinespacing(0);
    textArea9.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));

    textArea10.setXY(24, 277);
    textArea10.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea10.setLinespacing(0);
    textArea10.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));

    textArea11.setXY(70, 277);
    textArea11.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea11.setLinespacing(0);
    textArea11.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));

    textArea12.setXY(114, 277);
    textArea12.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea12.setLinespacing(0);
    textArea12.setTypedText(touchgfx::TypedText(T_SINGLEUSEID20));

    textArea13.setXY(159, 231);
    textArea13.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea13.setLinespacing(0);
    textArea13.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));

    textArea14.setXY(157, 187);
    textArea14.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea14.setLinespacing(0);
    textArea14.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    textArea15.setXY(161, 277);
    textArea15.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea15.setLinespacing(0);
    textArea15.setTypedText(touchgfx::TypedText(T_SINGLEUSEID23));

    textArea16.setXY(204, 187);
    textArea16.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea16.setLinespacing(0);
    textArea16.setTypedText(touchgfx::TypedText(T_SINGLEUSEID24));

    textArea17.setXY(204, 277);
    textArea17.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea17.setLinespacing(0);
    textArea17.setTypedText(touchgfx::TypedText(T_SINGLEUSEID25));

    textArea17_1.setXY(202, 231);
    textArea17_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea17_1.setLinespacing(0);
    textArea17_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID26));

    buttonWithIcon1.setXY(35, 0);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_GO_BACK_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_ADD_NEW_32_ID));
    buttonWithIcon1.setIconXY(70, 16);
    buttonWithIcon1.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(flexButton1);
    add(flexButton2);
    add(flexButton3);
    add(flexButton4);
    add(flexButton5);
    add(flexButton6);
    add(flexButton7);
    add(flexButton8);
    add(flexButton9);
    add(flexButton2_1);
    add(flexButton3_1);
    add(flexButton5_1);
    add(flexButton6_1);
    add(flexButton8_1);
    add(flexButton9_1);
    add(scalableImage1);
    add(calculation_text_area);
    add(textArea2);
    add(result_text_area);
    add(textArea4);
    add(textArea5);
    add(textArea6);
    add(textArea7);
    add(textArea8);
    add(textArea9);
    add(textArea10);
    add(textArea11);
    add(textArea12);
    add(textArea13);
    add(textArea14);
    add(textArea15);
    add(textArea16);
    add(textArea17);
    add(textArea17_1);
    add(buttonWithIcon1);
}

void Screen4ViewBase::setupScreen()
{

}

void Screen4ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //ChangeScreen6
        //When buttonWithIcon1 clicked change screen to Screen3
        //Go to Screen3 with no screen transition
        application().gotoScreen3ScreenNoTransition();
    }
}

void Screen4ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
}
