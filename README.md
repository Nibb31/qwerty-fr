# ⌨ [QWERTY-fr](https://qwerty-fr.org/)
Keyboard layout based on the QWERTY layout with extra symbols and diacritics so that typing both in French and English is easy and fast. It is also easy to learn!

[![Keyboard layout screenshot](qwerty-fr-keymap.png)](https://qwerty-fr.org)

👉 This is a fork of the [qwerty-fr](https://qwerty-fr.org) that is designed to be better suited to French and is easier to learn because the Alt-Gr key corresponds to the most popular diacritic in French instead of systematically mapping to grave accents when those are not used in French (on ì or ò). Therefore, compared to the original [qwerty-fr](https://qwerty-fr.org), this version implements the following major changes:

- AltGr+E is é, AltGr+D is è
- AltGr+I is ï
- AltGr+O is œ
- AltGr+u is ù
- Circumflex are all AltGr+the key above the vowel (example: â is AltGr+Q)
- Trema (only ë and ü in French) are the character to the left of the vowel (ë is on AltGr+W). ï is on AltGr+I.
- All of the above are capitalized with Shift.

In addition, this forked layout is better suited to scientific and academic units as well as Spanish and German.
- The ß character is moved to the S key (as it corresponds to a double S in German).
- The µ character is added to the M key.
- The ³ character has been added as Shift+AltGr+2.
- The ° is added to the 0 key.
- The Å character (as in ångström) can be made with a the AltGr+Shift+0 dead key.
- The € is AltGr+4, the £ is Shift+AltGr+4
- The ‰ is AltGr+5.
- The § character (paragraph) is on AltGr+P.

## 💭 Why?

The official and widely spread keyboard layout in France is [AZERTY](https://upload.wikimedia.org/wikipedia/commons/b/b9/KB_France.svg). Compared to QWERTY, it adds extra letters such as « é » and « ç ». Unfortunately a lot of characters are missing, for example it's impossible to type « É » or « Ç ». It's also impossible to type the French quotation marks (« »), and other special characters such as « œ » and « æ ». French users usually rely on autocorrect to fix the shortcomings of [AZERTY](https://upload.wikimedia.org/wikipedia/commons/b/b9/KB_France.svg), which is unacceptable.

Additionally, [AZERTY](https://upload.wikimedia.org/wikipedia/commons/b/b9/KB_France.svg) swaps letters around for no good reason compared to QWERTY — « A » and « Q » are swapped, « W » and « Z » are swapped as well. Almost all symbols are shuffled around as well, and for some reason « ² » has an entire key exclusively dedicated to it (?!).

In turn, a lot of software has incompatible shortcuts and sometimes require to remap everything, which is extremely inconvenient.

In order to fix these issues, QWERTY-fr is a new keyboard layout that is entirely based on QWERTY and brings the best of both worlds — typing English is as fast as before, and extra characters are added so that one can effortlessly type in French (as well German, Spanish, Italian, etc.)


## 💡 Philosophy overview

This layout is a strict superset of the QWERTY layout. This means that **all the keys** of the QWERTY layout are kept in the same location. Anyone using a QWERTY layout can type on the QWERTY-fr layout without even knowing that they are not typing on a QWERTY layout.

In order to type special characters with diacritics, there are a few simple rules to know. <kbd>AltGr</kbd> corresponds to <kbd>Option ⌥</kbd> on macOS, and <kbd>Ctrl</kbd> <kbd>Alt</kbd> on Windows (useful if you don't have the <kbd>AltGr</kbd> key):

**Note**: Unlike AZERTY, you can combine all the accentuated letters with <kbd>Shift ⇧</kbd> and <kbd>Caps Lock</kbd>. So for example:
- <kbd>AltGr</kbd> <kbd>Shift ⇧</kbd> <kbd>C</kbd> outputs `Ç`.
- <kbd>AltGr</kbd> <kbd>Shift ⇧</kbd> <kbd>W</kbd> outputs `É`.

These two letters are impossible to type with an AZERTY layout. But with QWERTY-fr they are easy to type!

**Note 2**: You can type a [non-breaking space](https://en.wikipedia.org/wiki/Non-breaking_space) by pressing <kbd>AltGr</kbd> <kbd>Space</kbd>. And a [narrow non-breaking space (fr)](https://fr.wikipedia.org/wiki/Espace_fine_ins%C3%A9cable) by pressing <kbd>AltGr</kbd> <kbd>Shift ⇧</kbd> <kbd>Space</kbd>. Learn about when you should use them when typing French [here (fr)](https://typographisme.net/post/Les-espaces-typographiques-et-le-web).

## 📦 Installation

This keyboard layout is available Windows, Mac, and Linux.

### Windows

Download the [QWERTY-fr layout](https://github.com/qwerty-fr/qwerty-fr/releases/latest), extract it, and run **setup.exe**.

### Mac

**Using Homebrew (package manager)**

If [homebrew]([url](https://brew.sh/)) is installed on your Mac, you can simply run the following command in the terminal:
```
brew install qwerty-fr
```
Then to `System Preferences` → `Keyboard`, click `+`, scroll down to `Others` and add `qwerty-fr`. Then restart macOS.

**Automatic install**:

- Download the [QWERTY-fr layout](https://github.com/qwerty-fr/qwerty-fr/releases/latest) PKG.
- Do a right click on it and then click on `Open`. Follow the installation process.
- Go to `System Preferences` → `Keyboard`, click `+`, scroll down to `Others` and add `qwerty-fr`.
- Restart macOS (if you don't some characters won't work).

**Manual install**:

- Download the [QWERTY-fr layout](https://github.com/qwerty-fr/qwerty-fr/releases/latest) ZIP file and extract **qwerty-fr.bundle** to:
  - `/Library/Keyboard Layouts/` to install for all users.
  - `~/Library/Keyboard Layouts/` for user-local installation.
- Go to `System Preferences` → `Keyboard`, click `+`, scroll down to `Others` and add `qwerty-fr`.
- Restart macOS (if you don't some characters won't work).

**✅ Protip**: On Apple keyboards the right <kbd>Option ⌥</kbd> key is often hard to access. You can use [Karabiner-Elements](https://pqrs.org/osx/karabiner/) to swap the right <kbd>Option ⌥</kbd> key with the right <kbd>Command ⌘</kbd> key. [Here is the rule](https://ke-complex-modifications.pqrs.org/#swap_right_cmd_with_right_option) you'll need to import in Karabiner-Elements. This makes it easier to type characters!

### Linux

#### Ubuntu / Debian

Download the [Linux DEB file](https://github.com/qwerty-fr/qwerty-fr/releases/latest) and install it.

**Note**: On Ubuntu and other GNOME-based distributions, you need to [disable the Compose key functionality](https://askubuntu.com/a/1028964) or typing characters with <kbd>AltGr</kbd> won't work at all.

#### Archlinux

There is a user package for this: https://aur.archlinux.org/packages/xkb-qwerty-fr/
Use your favorite AUR helper to install it. Or in the directory containing the `PKGBUILD` file, run `makepkg -si`.

#### Other distros

You can download the [Linux ZIP file](https://github.com/qwerty-fr/qwerty-fr/releases/latest) and then extract it at the root of your filesystem.

## 📣 Frequently asked questions

### The math dead key doesn't do anything on Windows

If you have **Nvidia GeForce Experience** installed, then you need to change the shortcut that it uses for the `Toggle microphone on/off` feature:
- Open Nvidia's GeForce Experience's overlay (the default shortcut is <kbd>Alt</kbd> <kbd>z</kbd>.
- Click the settings cog ⚙, then click on `keyboard shortcuts`.
- Locate the `Toggle microphone on/off` entry (it should display the default shortcut `Ctrl+Alt+M` or `AltGr+M`).
- Double-click on the shortcut and remove it (or change it to another key combination).

Alternatively, you can also access the math mode with <kbd>AltGr</kbd> <kbd>Shift</kbd> <kbd>m</kbd> which doesn't conflict with Nvidia GeForce Experience.

### Some dead keys (e.g. math) don't work on Linux

This is a known limitation. See https://github.com/qwerty-fr/qwerty-fr/issues/17

## 🤝 Contributing

The easiest way to contribute to this project is to spread the word and the website [qwerty-fr.org](https://qwerty-fr.org).

If you want to contribute by fixing issues with the layout, adding new keys, etc. we use the following software to edit the layouts:
- **Windows**: [Microsoft Keyboard Layout Creator](https://www.microsoft.com/en-us/download/details.aspx?id=102134) ([mirror](https://web.archive.org/web/20200802184038/https://download.microsoft.com/download/1/1/8/118aedd2-152c-453f-bac9-5dd8fb310870/MSKLC.exe)).
- **Mac**: [Ukelele](https://software.sil.org/ukelele/).
- **Linux**: manually editing files.
