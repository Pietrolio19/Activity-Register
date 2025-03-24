#ifndef FRAME_H
#define FRAME_H

#include <wx/wx.h>
#include "Register.h"

class Frame : public wxFrame {
public:
    explicit Frame(Register* main_register);

private:
    Register* reg;
    wxListBox* activityList;
};

#endif //FRAME_H
