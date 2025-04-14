#include "Frame.h"


Frame::Frame(Register* main_register) : wxFrame(nullptr, wxID_ANY, "Activity Register"), reg(main_register) {
    Maximize(true);
    wxPanel* panel = new wxPanel(this, wxID_ANY);
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL); //BoxSizer verticale che contiene il box orizzontale e la listbox
    panel->SetSizer(mainSizer);

    wxBoxSizer* buttonSizer = new wxBoxSizer(wxHORIZONTAL); //BoxSizer Orizzontale per contenere i bottoni
    activityList = new wxListBox(panel, wxID_ANY, wxDefaultPosition, wxSize(300, 200)); //listbox che conterrà la stampa delle attività

    //aggiunta dei due elementi al box verticale
    mainSizer->Add(buttonSizer, 0, wxEXPAND | wxALL, 5);
    mainSizer->Add(activityList, 1, wxEXPAND | wxALL, 5);
    vector<Date> registeredDates = reg->getRegisteredDates();

    for (auto& d : registeredDates) {
        wxString dateStr = d.toString(); //converto la data in una wxString in modo che sia gestibile da wx e sia inseribile in un bottone
        wxButton* button = new wxButton(panel, wxID_ANY, dateStr);
        buttonSizer->Add(button, 0, wxALL, 5);

        //utilizzando una funzione lambda associo al bottone la funzione che stampa le attività
        button->Bind(wxEVT_BUTTON, [this, d](wxCommandEvent& event) {
            activityList->Clear(); //in caso siano già presenti delle attività precedentemente stampate le rimuovo

            const auto& activities = reg->getActivities(d); //ottengo le attività legate alla data d ed eseguo un ciclo per aggiungerle ad activityList
            for (auto& act : activities) {
                wxString act_str = act->getActivity();
                activityList->Append(act_str);
            }
        });//definizione dell'evento per il bottone
    }

    //modifica alla grandezza del font di stampa delle attività per renderlo più leggibile
    wxFont font = activityList->GetFont();
    font.SetPointSize(20);
    activityList->SetFont(font);

    mainSizer->Layout();
    Fit();
}


