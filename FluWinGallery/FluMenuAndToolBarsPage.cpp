﻿#include "FluMenuAndToolBarsPage.h"

FluMenuAndToolBarsPage::FluMenuAndToolBarsPage(QWidget* parent /*= nullptr*/) : FluATitlePage(parent)
{
    m_vMainLayout->setAlignment(Qt::AlignTop);
    m_titleLabel->setText(tr("Menus & toolbars"));

    auto appBarButtonCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/AppBarButton.png")), tr("AppBarButton"), tr("A button that's styled for use in a CommandBar."));
    appBarButtonCard->setKey("AppBarButtonPage");
    getFWScrollView()->getMainLayout()->addWidget(appBarButtonCard);
    connect(appBarButtonCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto appBarSeparatorCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/AppBarSeparator.png")), tr("AppBarSeparator"), tr("A vertical line that's used to visually separate groups of commands in an app bar."));
    appBarSeparatorCard->setKey("AppBarSeparatorPage");
    getFWScrollView()->getMainLayout()->addWidget(appBarSeparatorCard);
    connect(appBarSeparatorCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto appBarToggleButtonCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/AppBarToggleButton.png")),
                                               tr("AppBarToggleButton"),
                                               tr("A button that can be on, off, or indeterminate like a CheckBox, and is styled for use in an app bar or other specialized UI."));
    appBarToggleButtonCard->setKey("AppBarToggleButtonPage");
    getFWScrollView()->getMainLayout()->addWidget(appBarToggleButtonCard);
    connect(appBarToggleButtonCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto commandBarCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/CommandBar.png")), tr("CommandBar"), tr("A toolbar for displaying application-specific commands that hanles layout and resizing of its contents."));
    commandBarCard->setKey("CommandBarPage");
    getFWScrollView()->getMainLayout()->addWidget(commandBarCard);
    connect(commandBarCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto commandBarFlyoutCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/CommandBarFlyout.png")), tr("CommandBarFlyout"), tr("A mini-toolbar displaying proactive commands, and an optional menu of command."));
    commandBarFlyoutCard->setKey("CommandBarFlyoutPage");
    getFWScrollView()->getMainLayout()->addWidget(commandBarFlyoutCard);
    connect(commandBarFlyoutCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto menuBarCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/MenuBar.png")), tr("MenuBar"), tr("A classic menu, allowing the display of MenuItems containing MenuFlyoutItems."));
    menuBarCard->setKey("MenuBarPage");
    getFWScrollView()->getMainLayout()->addWidget(menuBarCard);
    connect(menuBarCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto menuFlyoutCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/MenuFlyout.png")), tr("MenuFlyout"), tr("Shows a contextual list of simple command or options."));
    menuFlyoutCard->setKey("MenuFlyoutPage");
    getFWScrollView()->getMainLayout()->addWidget(menuFlyoutCard);
    connect(menuFlyoutCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto standUICommandCard =
        new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/StandardUICommand.png")), tr("StandardUICommand"), tr("A StandardUICommand is a built-in 'XamlUICommand' which represents a commonly used command, e.g.'save'."));
    standUICommandCard->setKey(tr("StandardUICommandPage"));
    getFWScrollView()->getMainLayout()->addWidget(standUICommandCard);
    connect(standUICommandCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    auto swipeControlCard = new FluHCard(FluIconUtils::getPixmap(("../res/ControlImages/SwipeControl.png")), tr("SwipeControl"), tr("Touch gesture for quick menu actions on items."));
    swipeControlCard->setKey(tr("SwipeControlPage"));
    getFWScrollView()->getMainLayout()->addWidget(swipeControlCard);
    connect(swipeControlCard, &FluHCard::clicked, [=](QString key) { emit clickedHCard(key); });

    onThemeChanged();
}

void FluMenuAndToolBarsPage::onThemeChanged()
{
    FluStyleSheetUitls::setQssByFileName("FluMenuAndToolBarsPage.qss", this, FluThemeUtils::getUtils()->getTheme());
}
