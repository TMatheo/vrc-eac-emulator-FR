# Emulateur EasyAntiCheat sur VRChat

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/0liteyear/vrc-eac-emulator/blob/master/LICENSE)
[![Discord](https://img.shields.io/discord/1361492536752865392)](https://discord.gg/yRUfEwBuYv)

Redirection de toutes les communications EAC requises sous Windows vers Linux

Rejoignez notre serveur communautaire : https://discord.gg/yRUfEwBuYv

> [!IMPORTANT]
> Ce projet est uniquement destiné à des fins éducatives. Je ne suis pas responsable des dommages causés par ce projet.

## Showcase

https://github.com/user-attachments/assets/860ea1d0-2d04-4218-a55c-5d34a974cd12

Le fait d'étoiler ce projet me motive à maintenir et à soutenir ce projet, donc s'il vous plaît, étoilez ✨.

## Comment cela fonctionne-t-il ?

Linux EAC fonctionne avec Wine, mais ses contrôles sont vraiment vulnérables. En chargeant latéralement des DLL, il accroche la communication avec EAC et transmet le contenu à Windows.

## Comment l'utiliser

Basic Setup: [Use VMWare (Recommended for most people)](./SETUP_GUIDE.md)  
Advanced User Setup: [Use WSL](./SETUP_GUIDE_WSL.md)  

## Bibliothèques utilisées

- [MinHook](https://github.com/TsudaKageyu/minhook) - TsudaKageyu
- [Plog](https://github.com/SergiusTheBest/plog) - Sergey Podobry
- [libhv](https://github.com/ithewei/libhv) - ithewei
- [JSON for Modern C++](https://github.com/nlohmann/json) - Niels Lohmann
- [base64](https://github.com/tobiaslocker/base64/tree/master) - Tobias Locker

## Licence

Ce projet est placé sous la licence MIT - voir la section [LICENSE](./LICENSE) pour plus de détails.
Vous pouvez utiliser ce projet dans n'importe quel but, même à des fins commerciales. 
