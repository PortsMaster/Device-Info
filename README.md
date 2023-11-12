# device_info.txt

This is a simple script + binary that is to be distributed with PortMaster, this is to allow Ports to get better info about the running device. This can allow resolutions to be put into config files and other various configurations that are currently quite awkward to do.

# Example usage

```bash
# ^^^^^^^ Standard PortMaster header above ^^^^^^

source $controlfolder/device_info.txt

if [[ "${CFW_NAME}" == "JELOS" ]]; then
    # DO SOMETHING JELOS specific
fi

printf "[Resolution]\nWIDTH=${DISPLAY_WIDTH}\nHEIGHT=${DISPLAY_HEIGHT}\n" > some_config.ini

```

# Building sdl_resolution

Unfortunately the only reliable way to get the device resolution is via a simple c program, this is all it takes to compile it.

```bash
./gcc -o sdl_resolution src/scres.c -lSDL2
```

