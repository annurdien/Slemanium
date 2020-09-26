#!/bin/sh

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
SRCDIR=${SRCDIR:-$TOPDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

SLEMANIUMD=${SLEMANIUMD:-$SRCDIR/slemaniumd}
SLEMANIUMCLI=${SLEMANIUMCLI:-$SRCDIR/slemanium-cli}
SLEMANIUMTX=${SLEMANIUMTX:-$SRCDIR/slemanium-tx}
SLEMANIUMQT=${SLEMANIUMQT:-$SRCDIR/qt/slemanium-qt}

[ ! -x $SLEMANIUMD ] && echo "$SLEMANIUMD not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
SLNVER=($($SLEMANIUMCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for slemaniumd if --version-string is not set,
# but has different outcomes for slemanium-qt and slemanium-cli.
echo "[COPYRIGHT]" > footer.h2m
$SLEMANIUMD --version | sed -n '1!p' >> footer.h2m

for cmd in $SLEMANIUMD $SLEMANIUMCLI $SLEMANIUMTX $SLEMANIUMQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${SLNVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${SLNVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
