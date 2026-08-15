# QMK Userspace

Personal keymap configs for QMK firmware, covering my keyboards:

- **Keyboardio**
- **KPRepublic**
- **Preonic**

Used as an external userspace with [QMK Firmware](https://github.com/qmk/qmk_firmware) —
build with:

```bash
qmk compile -kb <keyboard> -km <keymap> -e USER_NAME=<your-userspace-name>
```

See the [QMK external userspace docs](https://docs.qmk.fm/newbs_external_userspace) for setup.
