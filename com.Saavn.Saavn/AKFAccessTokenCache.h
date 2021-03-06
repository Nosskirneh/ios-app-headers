//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKFKeychainStore;
@protocol AKFAccessToken;

@interface AKFAccessTokenCache : NSObject
{
    NSObject<AKFAccessToken> *_accessToken;
    _Bool _didLoadFromKeychain;
    AKFKeychainStore *_keychainStore;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_persistAccessToken;
- (id)_loadAccessToken;
- (void)_clearAccessToken;
@property(copy, nonatomic) NSObject<AKFAccessToken> *accessToken;
- (id)init;

@end

