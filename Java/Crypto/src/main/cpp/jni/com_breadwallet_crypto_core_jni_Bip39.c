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

#include "BRInt.h"
#include "BRBIP39Mnemonic.h"

#include "com_breadwallet_crypto_core_jni_Bip39.h"

// TODO: Add defensive checks on inputs
// TODO: Re-write using personal coding style

JNIEXPORT jbyteArray JNICALL Java_com_breadwallet_crypto_core_jni_Bip39_deriveKey (
        JNIEnv * env,
        jclass thisClass,
        jstring seedString)
{
    UInt512 seed        = UINT512_ZERO;
    const char *status  = (*env)->GetStringUTFChars (env, seedString, 0);

    BRBIP39DeriveKey(seed.u8, status, NULL);

    jbyteArray seedData = (*env)->NewByteArray (env, sizeof(seed));
    (*env)->SetByteArrayRegion (env, seedData, 0, (jsize) sizeof(seed), (const jbyte *) seed.u8);

    return seedData;
}