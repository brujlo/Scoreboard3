# Scoreboard

Football scoreboard

## Getting Started

Designed with QT.
Only source files are added, they need to be downloaded and loaded, either with VS or QT.
It is also necessary to "publish" the application to get the exe.
For this examble we use ODBC x64 driver:

### What you need

[AccessDatabaseEngine_X64](https://download.microsoft.com/download/2/4/3/24375141-E08D-4803-AB0E-10F2E3A07AAA/AccessDatabaseEngine_X64.exe) - Download driver

[QT](https://www.qt.io/download-qt-installer?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5) - Download framwork

or (with QT plugin)

[VS](https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&rel=15#) - IDE Visual studio

* DB Scoreboard. mdb and Scoreboard. accdb are included

## Program description

### Goal

It is intended to manage the football match information and provide viewers with information about the game.

### User guide

* first you get control console (CC)
* in CC you must select DB file
* "Add teams" - you insert teams in DB
* "Settings" - you must set time for "halftime" and number of fouls
* "Reset/Set" - first time preset, you get all data from DB into your CC, and halftime are set from 0 to 1
* "Home" - select home team
* "Guset" - select guest team
* "Open scoreboard" - to open viewer display
* "Start timer" - when all is set, press this button to start the game
* "Pause/Resume" - to pause a game if needed
* "Reset/Set" - after first time, you have loop of two, first and second halftime. After second halftime everything is reseted to defaul values
* "+/-" - no further explanation is necessary

## Authors

* **Bruno Brckovic** - *exception*

## License

GNU General Public License - see the [GNU wiki](https://en.wikipedia.org/wiki/GNU_General_Public_License) file for details
