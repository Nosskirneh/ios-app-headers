//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GGLInstanceIDKeyPair, GGLInstanceIDKeyPairStore;

@interface GGLInstanceIDKeyPairManager : NSObject
{
    GGLInstanceIDKeyPairStore *_keyPairStore;
    GGLInstanceIDKeyPair *_keyPair;
}

@property(retain, nonatomic) GGLInstanceIDKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(retain, nonatomic) GGLInstanceIDKeyPairStore *keyPairStore; // @synthesize keyPairStore=_keyPairStore;
- (void).cxx_destruct;
- (id)appIdentityWithError:(id *)arg1;
- (struct __SecKey *)privateKey;
- (struct __SecKey *)publicKey;
- (_Bool)hasCachedKeyPairs;
- (_Bool)deleteKeyPairCreationTimePlistWithError:(id *)arg1;
- (_Bool)deleteKeyPairWithError:(id *)arg1;
- (id)loadKeyPairWithError:(id *)arg1;
- (id)cachedKeyPairWithError:(id *)arg1;
- (id)validCachedKeyPairWithError:(id *)arg1;
- (id)generateAndSaveKeyPairWithError:(id *)arg1;
- (id)init;

@end

