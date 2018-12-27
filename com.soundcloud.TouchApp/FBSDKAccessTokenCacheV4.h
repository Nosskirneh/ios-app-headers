//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKAccessTokenCaching-Protocol.h"

@class FBSDKKeychainStore, NSString;

@interface FBSDKAccessTokenCacheV4 : NSObject <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStore *_keychainStore;
}

- (void).cxx_destruct;
- (void)clearCache;
- (void)cacheAccessToken:(id)arg1;
- (id)fetchAccessToken;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

