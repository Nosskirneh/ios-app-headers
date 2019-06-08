//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDAuthKeychain;

@interface FIRInstanceIDTokenStore : NSObject
{
    FIRInstanceIDAuthKeychain *_keychain;
}

+ (id)tokenInfoFromKeychainItem:(id)arg1;
+ (id)serviceKeyForAuthorizedEntity:(id)arg1 scope:(id)arg2;
+ (id)defaultStore;
@property(retain, nonatomic) FIRInstanceIDAuthKeychain *keychain; // @synthesize keychain=_keychain;
- (void).cxx_destruct;
- (void)removeAllTokensWithHandler:(CDUnknownBlockType)arg1;
- (void)removeTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (void)saveTokenInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)cachedTokenInfos;
- (id)tokenInfoWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (id)initWithKeychain:(id)arg1;

@end

