## Setup

in a different directory where you want to install the adf framework
```
git clone https://github.com/espressif/esp-adf.git esp-adf-v2.5

cd esp-adf-v2.5

git checkout v2.5

git submodule update --init --recursive

cd esp-idf
.\install.bat
```

## flashing audio tones
This must be done in addition to flashing the program

(using esp idf python)

```
python $ADF_PATH\esp-idf\components\esptool_py\esptool\esptool.py --chip esp32 --port COM3 --baud 921600 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 40m --flash_size detect 0x310000 .\flash_tones\src_files\audio_tone.bin
```

### regenerating flash tones

(file names must stay the same or code will need updating)

```
cd flash_tones
python $ADF_PATH\tools\audio_tone\mk_audio_tone.py -r src_files -f generated -F 0
```