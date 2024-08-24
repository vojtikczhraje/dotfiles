//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/              /*Update Interval*/  /*Update Signal*/
    /* {"⌨", "sb-kbselect", 0, 30}, */
    {"",        "cpu_usage.sh",           5,                  0},
    {"",        "ram_usage.sh",           5,                  0},
    {"",        "time.sh",                60,                 0},
    {"",        "date.sh",                60,                 0},
};


//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
