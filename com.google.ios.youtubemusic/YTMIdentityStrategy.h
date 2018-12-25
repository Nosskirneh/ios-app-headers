//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTIdentityStrategy-Protocol.h"

@class GIMMe, NSString, YTGaiaSignInController, YTIdentityStore, YTIdentityTransactionCoalescer, YTMFirstTimeSignInController, YTPlusPageSelectionController;
@protocol YTResponder;

@interface YTMIdentityStrategy : NSObject <YTIdentityStrategy>
{
    id <YTResponder> _eventResponder;
    YTGaiaSignInController *_gaiaSignInController;
    YTPlusPageSelectionController *_plusPageSelectionController;
    YTIdentityStore *_store;
    YTIdentityTransactionCoalescer *_coalescer;
    GIMMe *_gimme;
    YTMFirstTimeSignInController *_firstTimeSignInController;
}

@property(readonly, nonatomic) YTMFirstTimeSignInController *firstTimeSignInController; // @synthesize firstTimeSignInController=_firstTimeSignInController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)loginSuccessMessageForIdentity:(id)arg1;
- (CDUnknownBlockType)cancelBlockForTransaction:(id)arg1;
- (CDUnknownBlockType)errorBlockForTransaction:(id)arg1;
- (CDUnknownBlockType)successBlockForInitialSignInTransaction:(id)arg1;
- (CDUnknownBlockType)successBlockForSwithAccountTransaction:(id)arg1;
- (id)accountIdentityWithSSOAuthorization:(id)arg1;
- (void)maybeAutoSelectChannelWithTransaction:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)signOutWithTransaction:(id)arg1 withError:(id)arg2;
- (void)switchAccountsWithTransaction:(id)arg1;
- (void)firstTimeSignInWithTransaction:(id)arg1;
- (void)signInWithTransaction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
