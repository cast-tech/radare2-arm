<a href="https://radare.org/"><img border=0 src="doc/images/r2emoji.png" alt="screenshot" align="left" width="128px"></a>

## Radare2: Libre Reversing Framework for Unix Geeks

This is an ARM architecture specialized without GPL version of Radare2 `5.8.9`.

### Description

r2 is a complete rewrite of radare. It provides a set of libraries, tools and
plugins to ease reverse engineering tasks. Distributed mostly under LGPLv3,
each plugin can have different licenses (see r2 -L, rasm2 -L, ...).

The radare project started as a simple command-line hexadecimal editor focused
on forensics. Today, r2 is a featureful low-level command-line tool with
support for scripting with the embedded Javascript interpreter or via r2pipe.

r2 can edit files on local hard drives, view kernel memory, and debug programs
locally or via a remote gdb server. r2's wide architecture support allows you
to analyze, emulate, debug, modify, and disassemble any binary.

Project was modified to contain all its external dependencies
and not to contain files with GPL license. This project is used for
analyzing ARM binaries, so support for analyzing other binary architectures
was mostly removed.

<p align="center">
<a href="https://www.radare.org/"><img src="doc/images/shot.png" alt="screenshot" align="center" border=0 width="600px"></a>
</p>

## Installation

The recommended way to install radare2 is via Git using acr/make or meson:

```sh
git clone https://github.com/radareorg/radare2
radare2/sys/install.sh
```

On Windows you may want to use the precompiled builds or the .bat files to compile if you have msvc:

```bat
preconfigure.bat       REM setup python, meson, ninja
configure.bat          REM run meson b + vs project
make.bat               REM run ninja -C b
prefix\bin\radare2.exe
```

* r2 can be installed from `git` or via `pip` using `r2env`.
* Run `sys/install.sh` for the default acr+make+symlink installation
* meson/ninja (muon/samu also works) and make builds are supported.
* Windows builds require meson and msvc or mingw as compilers
* To uninstall the current build of r2 run `make uninstall`
* To uninstall ALL the system installations of r2 do: `sudo make purge`

## Usage

These are the first steps to use r2, read the book or find tutorials for more details

```sh
$ r2 /bin/ls   # open file in read-only
> aaa          # analyse the program (r2 -A)
> afl          # list all functions (try aflt, aflm)
> px 32        # print 32 byte hexdump current block
> s sym.main   # seek to main (using flag name)
> f~foo        # filter flags matching 'foo' (internal |grep)
> iS;is        # list sections and symbols (rabin2 -Ss)
> pdf; agf     # disassembly and ascii-art function graph
> oo+;w hello  # reopen in read-write and write a string
> ?*~...       # interactive filter in all command help
> q            # quit
```

Many plugins are included in r2 by default. But you can extend its capabilities
by using the [r2pm](https://github.com/radareorg/radare2-pm) package manager.

```sh
r2pm -s <word>  # search packages matching a word
r2pm -Uci <pkg> # update database and clean install a package
r2pm -u <pkg>   # uninstall the given package
r2pm -l <pkg>   # list installed packages
```

Alternatively you can use r2env to switch between different versions.

```sh
pip install -U r2env
r2env init
r2env add radare2@git
```

## Resources

* [Official Book](https://book.rada.re): Read about r2 usage
* [COMMUNITY.md](COMMUNITY.md): Community engagement and loose guidelines
* [CONTRIBUTING.md](CONTRIBUTING.md): Information about reporting issues and
  contributing. See also [Contributing](#contributing)
* [DEVELOPERS.md](DEVELOPERS.md): Development guidelines for r2
* [SECURITY.md](SECURITY.md): Instructions for reporting vulnerabilities
* [USAGE.md](USAGE.md): Some example commands
* [INSTALL.md](INSTALL.md): Installation instructions using make or meson

# Contributing

There are many ways to contribute to the project. Contact the
[community](#community), check out the github issues, or grep for
TODO/FIXME/XXX comments in the source.

To contribute code, push your changes to a branch on your fork of the
repository. Please ensure that you follow the coding and style guidelines and
that your changes pass the testing suite, which you can run with the `r2r`
tool. If you are adding significant code, it may be necessary to modify or add
additional tests in the `test/` directory.

For more details, see [CONTRIBUTING.md](CONTRIBUTING.md) and
[DEVELOPERS.md](DEVELOPERS.md).

## Documentation

To learn more about r2 we encourage you to watch [youtube
talks](https://www.youtube.com/c/r2con) from [r2con](https://rada.re/con). In
addition to reading blogposts, slides or the [official radare2
book](https://book.rada.re), here are some methods to contact us:

## Community

* [irc.libera.chat](https://libera.chat): `#radare`, `#radare_side`
* [Matrix](https://matrix.to/#/#radare:matrix.org): `#radare:matrix.org`
* Telegram: [Main Channel](https://t.me/radare) and [Side Channel](https://t.me/radare_side)
* [Discord server](https://discord.gg/YBey7CR9jf)

* Mastodon: [@radareorg](https://infosec.exchange/@radareorg)
* Website: [https://www.radare.org/](https://www.radare.org/)
