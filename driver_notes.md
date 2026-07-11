# TODO list and notes for printer driver implimentation
## Charset
Can support 128 characters with shift modifier key. CODE exists
as an additional modifier, but I do not know if it can be used
to add additional characters

## Printing
- Need structure to contain which set of simultanious keypress
  is used at a time
    - Should be ordered in a queue?
- Need to find the minumum required delay between keystrokes

### Code todos (see repo ttls:src/utils.h):
Roadmap:
TODO: make hash table of keystrokes
TODO: make hash table of encodings
      -> use bytes for data store, allows 256 characters
TODO: Some way to decode encoding into a keystroke
TODO: Keystroke data structure, storing multiple simultanious
keystrokes
