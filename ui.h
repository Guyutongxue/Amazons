/**
 * Copyright (c) 2019 Guyutongxue
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef UI_H
#define UI_H

#include <windows.h>
#include <string>
#include "amazons.h"

class UI {
public:
    UI();
    ~UI();
    void printGame();
    enum class Color {
        Black,         // ��
        Blue,          // ��
        Green,         // ��
        Cyan,          // ��
        Red,           // ��
        Magenta,       // ���
        Brown,         // ��
        LightGrey,     // ����
        DarkGrey,      // ���
        LightBlue,     // ����
        LightGreen,    // ����
        LightCyan,     // ����
        LightRed,      // ����
        LightMagenta,  // �����
        Yellow,        // ��
        White          // ��
    };
private:
    Amazons game;
    HANDLE hOut;
    CONSOLE_SCREEN_BUFFER_INFO bInfo;
    void setPos(short x, short y);
    void setColor(Color foreground,Color background);
    constexpr static const char* boardLine[17] = {
        "�����Щ��Щ��Щ��Щ��Щ��Щ��Щ���", "| | | | | | | | |", "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |",
        "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |", "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |",
        "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |", "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |",
        "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |", "�����੤�੤�੤�੤�੤�੤�੤��", "| | | | | | | | |",
        "�����ة��ة��ة��ة��ة��ة��ة���"};
};

#endif  // UI_H