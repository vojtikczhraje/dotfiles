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
- Create folder in .local/src & .local/bin => will be used later
```bash
mkdir -p .local/src .local/bin
cd .local/src
```

### Installation of base
> Folder `.local/src`

- Download packages needed for the installation
```bash
sudo pacman -S nvim libxft libxinerama ttf-jetbrains-mono ttf-font-awesome noto-fonts-cjk noto-fonts-emoji firefox zsh
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

### Configure destkop for better experience
- Download packages 

```bash
sudo pacman -S xcompmgr pyton-pywal xwallpaper neofetch xdotool
```

- zsh should be already installed, confirm it by typing `zsh` in terminal and see what happens

- Open new terminal by superkey + enter, type `nvim .zshrc` and edit ZSH_THEME to `alanpeabody`. eg. `ZSH_THEME="alanpeabody"`

- Install oh-my-zsh
```bash
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

- And then run this
```bash
cd ~/.local/src
git clone https://github.com/zsh-users/zsh-syntax-highlighting.git
echo "source ${(q-)PWD}/zsh-syntax-highlighting/zsh-syntax-highlighting.zsh" >> ${ZDOTDIR:-$HOME}/.zshrc
cd
```

- Configure zsh theme by going to default directory with command `cd` and navigate to `.oh-my-zsh/themes` and edit `alanpeabody.zsh-theme` with nvim

```bash 
cd .oh-my-zsh/themes
nvim alanpeabody.zsh-theme
```

- On the first line change second magenta to red and "PROMPT" (nearly the last line) to look like this: `"PROMPT="[${user} ${pwd}]$ "`

- Create folder in home directory for better clarity
```bash
mkdir pix dox apps
```

- Go to `.local/bin` that we previously created
```bash
cd .local/bin
```

- Create file with name `wall-change` or whatever you like for changing wallpapers
```bash
touch wall-change
cat wall-change
chmod +x wall-change
```

- Go to the file with `nvim wall-change` and copy code showed bellow
```bash
#!/bin/sh

wall=$(find ~/pix/wall/ -type f -name "*.jpg" -o -name "*.png" | shuf -n 1)

# wallpapers change
xwallpaper --zoom $wall

# generate color scheme
wal -c 
wal -i $wall

xdotool key super+F5
```

- Now copy wallpapers from `.local/src` to ~/pix/
```bash
mv ~/.local/src/wall ~/pix
```

- Configure .xinitrc with nvim in default directory, remove the tha last lines of code till `fi` and add this in THIS ORDER
```bash
dwmblocks &
wall-change &
xcompmgr &
exec dwm
```

- Also in .zshrc at the end of the code you need to add this: `export PATH="$HOME/.local/bin:$PATH"`

- Now copy scipts from `.local/src/dwmblocks/scripts/*` into `.local/bin`
```bash
cd ~/.local/src/dwmblocks/scripts
cp * ~./local/bin
```










# Credits
- [Wallpapers](https://github.com/whoisYoges/lwalpapers)
- [dwm](https://dwm.suckless.org/)
- [dwmblocks](https://github.com/LukeSmithxyz/dwmblocks)

