# CLAUDE.md

## Project Overview

SoundFont (.sf2) synthesizer module for Move Anything. Uses TinySoundFont library.

## Build Commands

```bash
./scripts/build.sh      # Build with Docker
./scripts/install.sh    # Deploy to Move
```

## Structure

```
src/
  module.json           # Module metadata
  ui.js                 # JavaScript UI
  instrument.sf2        # Default soundfont
  dsp/
    sf2_plugin.c        # Plugin wrapper
    third_party/tsf.h   # TinySoundFont library
```

## DSP Plugin API

Standard Move Anything plugin_api_v1:
- `on_load()`: Initialize synth, load default .sf2
- `on_midi()`: Process MIDI input
- `set_param()`: Set preset, soundfont_path
- `get_param()`: Get preset, preset_count
- `render_block()`: Render 128 frames stereo
