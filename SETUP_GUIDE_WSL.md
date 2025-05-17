# Côté WSL

## Install Steam

```shell
wget https://gist.githubusercontent.com/thingsiplay/3a933f557277906dc6b0e03ec8df5dbd/raw/b406b32604dfb63b83d80f5bbaafd80d09f69822/proton -O proton.sh
chmod +x proton.sh
mkdir proton
sudo add-apt-repository multiverse
sudo dpkg --add-architecture i386
sudo apt update
sudo apt upgrade -y
sudo apt install steam
steam
```

## Configuration de VRChat

Installez l'application Steam sur votre WSL, ouvrez ses paramètres et activez la fonction `Steam Play` pour tous les titres.

Vous pouvez trouver cette option en naviguant vers `Steam -> Settings -> Compatibility`. Cochez la case pour `Enable Steam Play for all other titles`.

Ensuite, installez VRChat sur votre WSL et lancez-le au moins une fois.

## Placez le fichier bootstrapper

Placer le `version.dll` que vous avez créé dans le même répertoire que le fichier `VRChat.exe` fichier.

Vous trouverez le fichier exécutable de VRChat à l'adresse suivante `~/.steam/steam/steamapps/common/VRChat`.

## Modifier ~/proton.sh

Set `proton_version` au nom du dossier commençant par `Proton` situé à `~/.steam/steam/steamapps/common`.

Set `client_dir` à `"$HOME/.steam/steam"`.

Example:

```shell
proton_version="Proton Hotfix"
client_dir="$HOME/.steam/steam"
```

## Run VRChat

Run this command to launch VRChat:

```shell
WINEDLLOVERRIDES="version.dll=n,b" ~/proton.sh ~/.steam/steam/steamapps/common/VRChat/launch.exe
```

Creating a bash script, such as launchVRChat.sh, will make launching easier.

# Windows side

Simply copy the `EOSSDK-Win64-Shipping.dll` file that you built to the `VRChat\VRChat_Data\Plugins\x86_64` directory.

Then, launch `VRChat.exe` directly from File Explorer. A configuration file named `config.json` will be generated.

Please edit the `ip` property to `127.0.0.1`.

```json
{
    "ip": "127.0.0.1", // <-- Here
    "ports": {
        "http": 7778,
        "tcp": 7777
    }
}
```

And you are ready to go! 🎉

Launch “VRChat.exe” directly on Windows.

And if this project helped you, please give it a star! 👻
