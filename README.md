# Dotfiles

## Installation:

### Basic Configuration
- Look for Arch Linux updates and update if any
```bash
sudo pacman -Sy
```
- Download git

``` bash
sudo pacman -S git
```
- Create folder in .local/src
```bash
mkdir -p .local/src 
cd .local/src
```

### Actuall installation
> Folder `.local/src`

- Download packages needed for the installation
```bash
sudo pacman -S nvim libxft libxinerama ttf-jetbrains-mono ttf-font-awesome noto-fonts-cjk noto-fonts-emoji firefox
```


- Download the rice
```bash
git clone https://github.com/vojtikczhraje/dotfiles.git
cd dotfiles
```

- Move everything to .local/src
```bash
mv * ../
cd ../
```

- Start installing
    - dwm
    ```bash
    cd dwm
    sudo make clean install
    cd ..
    ```

    - st
    ```bash
    cd st
    sudo make clean install
    cd ..
    ```

    - dmenu
    ```bash
    cd dmenu
    sudo make clean install
    cd ..
    ```

    - dwmblocks
    ```bash
    cd dwmblocks
    sudo make clean install
    cd ..
    ```

    - Start dwm
    ```bash
    startx
    ```










# Credits
- [Wallpapers](https://github.com/whoisYoges/lwalpapers)
- [dwm](https://dwm.suckless.org/)
- [dwmblocks](https://github.com/LukeSmithxyz/dwmblocks)

