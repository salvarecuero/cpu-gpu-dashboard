# CLAUDE.md

This file provides guidance to AI Agents when working with code in this repository.

## Project Overview

This is a Rainmeter skin suite that displays real-time CPU and GPU temperature/usage metrics from HWiNFO64 via Windows Registry.

## Architecture

```
CPUGPUDashboard/
├── @Resources/
│   ├── Variables.inc    # User settings and configuration state
│   └── Styles.inc       # Shared meter styles (fonts, colors, buttons)
├── Dashboard/
│   └── Dashboard.ini    # Main display skin
└── Setup/
    └── Setup.ini        # First-run configuration wizard
```

**Flow:** On load, Dashboard checks `IsConfigured` variable. If 0, activates Setup skin. Setup uses InputText plugin for user input, writes to Variables.inc via `!WriteKeyValue`, then activates Dashboard.

## Key Technical Details

### HWiNFO Integration

- Reads from Registry: `HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB`
- Values: `ValueRaw#N#` where N is sensor index (0, 1, 2, etc.)
- User must enable "Report value in Gadget" in HWiNFO64 sensor settings

### Rainmeter Specifics

- `.ini` files are the skin definitions (not compiled)
- `#@#` references the @Resources folder
- `DynamicVariables=1` required when using measures in meter options
- InputText plugin requires `AlwaysOnTop=1` or `0` (not 2)
- Use `!SetVariable` for immediate changes, `!WriteKeyValue` for persistence

### Color System

Temperature overlay uses formula-based color calculation:

```ini
Fill Color (Clamp(([MeasureMaxTemp]-20)*8,0,255)),(Clamp(255-([MeasureMaxTemp]-50)*5,0,255)),0,30
```

Produces green→yellow→red gradient based on temperature.

## Testing

1. Copy skin folder to `Documents\Rainmeter\Skins\CPUGPUDashboard\`
2. Right-click Rainmeter tray → Refresh All
3. Load `Dashboard\Dashboard.ini`
4. Verify with HWiNFO64 running in sensors-only mode with Gadget reporting enabled

To find sensor indexes: `reg query HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB`

## Common Modifications

- **Temperature thresholds:** Edit `TempLow`, `TempMedium`, `TempHigh` in Variables.inc
- **Colors:** Modify `Color*` variables in Variables.inc
- **Dimensions:** Adjust `SkinWidth`, `SkinHeight`, `Padding` in Variables.inc
- **New styles:** Add to Styles.inc, reference with `MeterStyle=StyleName`
