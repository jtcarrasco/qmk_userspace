#pragma once

// Widen the window for pressing both combo keys. QMK's default is 50ms,
// which is too tight to trigger reliably by hand. The combos in this keymap
// are all vertical same-column pairs that don't occur during normal typing,
// so a longer term is safe.
#define COMBO_TERM 150
