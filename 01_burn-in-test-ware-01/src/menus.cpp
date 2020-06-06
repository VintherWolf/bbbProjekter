

/* MENUS */
enum main_menu
{
    load_schema = 1,
    sel_method = 2,
    send_req = 3,
    quit = 'q'
};

enum sub_menu1
{
    getRelay,
    setRelay
};

#define MENU_LINES 5

void main_menu(char action, uint16_t lines)
{
    string menu[lines];
    if (action == 'init')
    {
        for (int i = 0; i < MENU_LINES; i++)
        {
            menu[i] = {" "};
        }
        menu[0] = {"Select:"};
        menu[1] = {"1 Load Schema"};
        menu[2] = {"2 Selec Method"};
        menu[3] = {"3 Send Request"};
        menu[4] = {"q quit"};
    }
    else if (action == 'show')
    {

        for (int i = 0; i < MENU_LINES; i++)
        {
            cout << menu[i] << endl;
        }
    }
    else
    {
        cout
            << "invalid use of menu!"
            << endl;
    }
}