//  Copyright (c) 2019 breadwallet LLC.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#include <stdlib.h>
#include <assert.h>

#include "BRBIP32Sequence.h"

#include "BRCryptoJni.h"
#include "com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinMasterPubKey.h"

// TODO: Add defensive checks on inputs
// TODO: Re-write using personal coding style

JNIEXPORT jlong JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinMasterPubKey_createBitcoinMasterPubKey (
        JNIEnv * env,
        jclass thisClass,
        jbyteArray seedByteArray)
{
    jsize seedLength = (*env)->GetArrayLength (env, seedByteArray);
    jbyte *seedBytes = (*env)->GetByteArrayElements (env, seedByteArray, 0);

    // Allocate, then fill, our BRMasterPubKey result with the computed pubKey
    BRMasterPubKey *resKey = (BRMasterPubKey *) calloc (1, sizeof (BRMasterPubKey));
    *resKey = BRBIP32MasterPubKey(seedBytes, seedLength);

    return (jlong) resKey;
}