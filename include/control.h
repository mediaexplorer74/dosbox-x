/*
 *  Copyright (C) 2002-2021  The DOSBox Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */


#ifndef DOSBOX_CONTROL_H
#define DOSBOX_CONTROL_H

#ifdef _MSC_VER
//#pragma warning ( disable : 4786 )
//#pragma warning ( disable : 4290 )
#endif

#include "include/programs.h"
#include "include/setup.h"

class Config{
public:
    CommandLine * cmdline;
private:
    std::list<Section*> sectionlist;
    typedef std::list<Section*>::iterator it;
    typedef std::list<Section*>::reverse_iterator reverse_it;
    typedef std::list<Section*>::const_iterator const_it;
    typedef std::list<Section*>::const_reverse_iterator const_reverse_it;
//  void (* _start_function)(void);
    bool secure_mode; //Sandbox mode
public:
    bool initialised;
    std::vector<std::string> auto_bat_additional;
    std::vector<std::string> startup_params;
    std::vector<std::string> configfiles;
    Config(CommandLine * cmd):cmdline(cmd),secure_mode(false) {
        startup_params.emplace_back(cmdline->GetFileName());
        cmdline->FillVector(startup_params);
        opt_test = false;
        opt_exit = false;
        opt_debug = false;
        opt_nogui = false;
        opt_nomenu = false;
        opt_langcp = false;
        opt_prerun = false;
        opt_showrt = false;
        opt_silent = false;
        opt_startui = false;
        initialised = false;
        opt_console = false;
        opt_log_con = false;
        opt_time_limit = -1;
        opt_display2 = false;
        opt_logint21 = false;
        opt_userconf = false;
        opt_noconfig = false;
        opt_noconsole = false;
        opt_logfileio = false;
        opt_eraseconf = false;
        opt_resetconf = false;
        opt_printconf = false;
        opt_promptfolder = -1;
        opt_noautoexec = false;
        opt_securemode = false;
        opt_fastlaunch = false;
        opt_fullscreen = false;
        opt_showcycles = false;
        opt_earlydebug = false;
        opt_break_start = false;
        opt_defaultconf = false;
        opt_erasemapper = false;
        opt_resetmapper = false;
        opt_startmapper = false;
        opt_fastbioslogo = false;
        opt_defaultmapper = false;
        opt_alt_vga_render = false;
        opt_used_defaultdir = false;
        opt_date_host_forced = false;
        opt_disable_numlock_check = false;
        opt_disable_dpi_awareness = false;
    }
    ~Config();

    Section_line * AddSection_line(char const * const _name,void (*_initfunction)(Section*));
    Section_prop * AddSection_prop(char const * const _name,void (*_initfunction)(Section*),bool canchange=false);
    
    Section* GetSection(int index);
    Section* GetSection(std::string const&_sectionname) const;
    Section* GetSectionFromProperty(char const * const prop) const;

    bool PrintConfig(char const * const configfilename,int everything=-1,bool norem=false) const;
    bool ParseConfigFile(char const * const configfilename);
    void ParseEnv(char ** envp);
    bool SecureMode() const { return secure_mode; }
    void SwitchToSecureMode() { secure_mode = true; }//can't be undone
    void ClearExtraData() { Section_prop *sec_prop; Section_line *sec_line; for (const_it tel = sectionlist.begin(); tel != sectionlist.end(); ++tel) {sec_prop = dynamic_cast<Section_prop *>(*tel); sec_line = dynamic_cast<Section_line *>(*tel); if (sec_prop) sec_prop->data = ""; else if (sec_line) sec_line->data = "";} }
public:
    std::string opt_editconf,opt_opensaves,opt_opencaptures,opt_lang;
    std::vector<std::string> config_file_list;
    std::vector<std::string> opt_o;
    std::vector<std::string> opt_c;
    std::vector<std::string> opt_set;

    double opt_time_limit;
    signed char opt_promptfolder;
    bool opt_disable_dpi_awareness;
    bool opt_disable_numlock_check;
    bool opt_date_host_forced;
    bool opt_used_defaultdir;
    bool opt_alt_vga_render;
    bool opt_defaultmapper;
    bool opt_fastbioslogo;
    bool opt_break_start;
    bool opt_erasemapper;
    bool opt_resetmapper;
    bool opt_startmapper;
    bool opt_defaultconf;
    bool opt_noautoexec;
    bool opt_securemode;
    bool opt_fullscreen;
    bool opt_fastlaunch;
    bool opt_showcycles;
    bool opt_earlydebug;
    bool opt_logfileio;
    bool opt_noconsole;
    bool opt_eraseconf;
    bool opt_resetconf;
    bool opt_printconf;
    bool opt_logint21;
    bool opt_display2;
    bool opt_userconf;
    bool opt_noconfig;
    bool opt_log_con;
    bool opt_console;
    bool opt_startui;
    bool opt_silent;
    bool opt_showrt;
    bool opt_nomenu;
    bool opt_prerun;
    bool opt_langcp;
    bool opt_debug;
    bool opt_nogui;
    bool opt_exit;
    bool opt_test;
};

#endif
