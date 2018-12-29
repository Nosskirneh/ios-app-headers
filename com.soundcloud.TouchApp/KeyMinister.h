//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Crypto, CryptoHelper, Keychain;

@interface KeyMinister : NSObject
{
    Keychain *_keychain;
    Crypto *_crypto;
    CryptoHelper *_cryptoHelper;
}

@property(readonly, nonatomic) CryptoHelper *cryptoHelper; // @synthesize cryptoHelper=_cryptoHelper;
@property(readonly, nonatomic) Crypto *crypto; // @synthesize crypto=_crypto;
@property(readonly, nonatomic) Keychain *keychain; // @synthesize keychain=_keychain;
- (void).cxx_destruct;
- (void)ensureInAppCryptoKeyExists;
- (CDUnknownBlockType)downloadEndpointKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)downloadEndpointKey;
- (CDUnknownBlockType)inAppKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)inAppKey;
- (id)inAppKeyData;
- (id)initWithKeychain:(id)arg1 crypto:(id)arg2 cryptoHelper:(id)arg3;
- (id)initWithKeychain:(id)arg1;
- (id)init;

@end
