
// This is the default startup handler for ESP32, does VFS and stuff
void boardctrl_startup(void);

// TODO put this in a header and get it in the include path somehow
void tildagon_usb_init(void);

void tildagon_startup(void) {
    // call the micropy default startup - does VFS init on ESP32
    boardctrl_startup();

    tildagon_usb_init();
}
