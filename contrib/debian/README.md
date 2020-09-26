
Debian
====================
This directory contains files used to package slemaniumd/slemanium-qt
for Debian-based Linux systems. If you compile slemaniumd/slemanium-qt yourself, there are some useful files here.

## slemanium: URI support ##


slemanium-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install slemanium-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your slemanium-qt binary to `/usr/bin`
and the `../../share/pixmaps/slemanium128.png` to `/usr/share/pixmaps`

slemanium-qt.protocol (KDE)

