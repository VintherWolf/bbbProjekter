/*
 * client.cpp
 *
 *  Created on: Jun 04, 2020
 *      Author: Daniel K. Vinther Wolf
 */

#include <type_traits>
#include <iostream>
#include "client.h"


void main_menu(char action, uint16_t lines);

using namespace std;

int main(int argC, char **argV)
{
    main_menu('init', MENU_LINES);
    main_menu('show', MENU_LINES);

    char input;

    cin >> input;
    switch (input)
    {
    case (load_schema):
    case (sel_method):
        cin >> input;
        switch (input)
        {
        case (getRelay):
        case (setRelay):
        }
        break;
    case (send_req):
        break;
    case (quit):
        break;
    }

    return EXIT_SUCCESS;
}

