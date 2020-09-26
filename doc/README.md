Slemanium Core
=============

Setup
---------------------
Slemanium Core is the original Slemanium client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Slemanium transactions (which is currently more than 100 GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Slemanium Core, visit [slemaniumcore.org](https://slemaniumcore.org/en/releases/).

Running
---------------------
The following are some helpful notes on how to run Slemanium on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/slemanium-qt` (GUI) or
- `bin/slemaniumd` (headless)

### Windows

Unpack the files into a directory, and then run slemanium-qt.exe.

### OS X

Drag Slemanium-Core to your applications folder, and then run Slemanium-Core.

### Need Help?

* See the documentation at the [Slemanium Wiki](https://en.slemanium.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#slemanium](http://webchat.freenode.net?channels=slemanium) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=slemanium).
* Ask for help on the [SlemaniumTalk](https://slemaniumtalk.org/) forums, in the [Technical Support board](https://slemaniumtalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Slemanium on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Slemanium repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/slemanium/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [SlemaniumTalk](https://slemaniumtalk.org/) forums, in the [Development & Technical Discussion board](https://slemaniumtalk.org/index.php?board=6.0).
* Discuss project-specific development on #slemanium-core-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=slemanium-core-dev).
* Discuss general Slemanium development on #slemanium-dev on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=slemanium-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
