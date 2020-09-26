// Copyright (c) 2016 The Slemanium Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SLEMANIUM_QT_TEST_RPC_NESTED_TESTS_H
#define SLEMANIUM_QT_TEST_RPC_NESTED_TESTS_H

#include <QObject>
#include <QTest>

#include "txdb.h"
#include "txmempool.h"

class RPCNestedTests : public QObject
{
    Q_OBJECT

    private Q_SLOTS:
    void rpcNestedTests();

private:
    CCoinsViewDB *pcoinsdbview;
};

#endif // SLEMANIUM_QT_TEST_RPC_NESTED_TESTS_H
