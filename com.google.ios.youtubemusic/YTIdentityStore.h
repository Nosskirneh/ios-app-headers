//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTIdentityTransactionCommitter-Protocol.h"

@class GIMMe, NSString, YTIdentityNotifier, YTIdentityState, YTUserDefaults;

@interface YTIdentityStore : NSObject <YTIdentityTransactionCommitter>
{
    YTIdentityState *_currentIdentity;
    YTUserDefaults *_userDefaults;
    YTIdentityNotifier *_identityNotifier;
    GIMMe *_gimme;
}

@property(readonly, nonatomic) YTIdentityState *currentIdentity; // @synthesize currentIdentity=_currentIdentity;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)transitionToFutureIdentity:(id)arg1;
- (void)clearIncognito;
- (void)restoreSerializedLastSelectedIdentityFromPreIncognitoIdentity;
- (_Bool)hasIncognitoTimedOut;
- (void)setLastActiveIncognitoTime;
- (id)readIdentityFromDisk;
- (void)storeCurrentIdentityToDisk;
- (void)changeToIdentity:(id)arg1;
- (void)commitTransaction:(id)arg1;
- (id)preIncognitoIdentity;
- (id)lastSelectedIdentity;
- (void)tearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
