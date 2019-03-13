/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager */

#ifndef _Included_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
#define _Included_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
 * Method:    createBitcoinWalletManager
 * Signature: (Lcom/breadwallet/crypto/core/bitcoin/jni/CoreBitcoinMasterPubKey;Lcom/breadwallet/crypto/core/bitcoin/jni/CoreBitcoinChainParams;ILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager_createBitcoinWalletManager
  (JNIEnv *, jclass, jobject, jobject, jint, jstring);

/*
 * Class:     com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
 * Method:    initializeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager_initializeNative
  (JNIEnv *, jclass);

/*
 * Class:     com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
 * Method:    connect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager_connect
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
 * Method:    disconnect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager
 * Method:    disposeNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_breadwallet_crypto_core_bitcoin_jni_CoreBitcoinWalletManager_disposeNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif