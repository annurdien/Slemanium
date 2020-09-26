// Copyright (c) 2011-2014 The Slemanium Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SLEMANIUM_QT_SLEMANIUMADDRESSVALIDATOR_H
#define SLEMANIUM_QT_SLEMANIUMADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SlemaniumAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SlemaniumAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Slemanium address widget validator, checks for a valid slemanium address.
 */
class SlemaniumAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SlemaniumAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SLEMANIUM_QT_SLEMANIUMADDRESSVALIDATOR_H
