//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GGLInstanceIDAuthKeychain;

@interface GGLInstanceIDTokenStore : NSObject
{
    GGLInstanceIDAuthKeychain *_keychain;
}

+ (long long)cacheTimeForCachedToken:(id)arg1;
+ (id)actualTokenFromCachedToken:(id)arg1;
+ (id)cacheValueForToken:(id)arg1;
+ (id)cacheKeyForAuthorizedEntity:(id)arg1 scope:(id)arg2;
+ (id)defaultStore;
@property(retain, nonatomic) GGLInstanceIDAuthKeychain *keychain; // @synthesize keychain=_keychain;
- (void).cxx_destruct;
- (_Bool)removeAllTokensWithError:(id *)arg1;
- (_Bool)removeGCMTokensWithError:(id *)arg1;
- (_Bool)removeTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (_Bool)saveToken:(id)arg1 withAuthorizedEntity:(id)arg2 scope:(id)arg3;
- (long long)cacheTimeForTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (id)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (id)initWithKeychain:(id)arg1;
- (id)init;

@end

