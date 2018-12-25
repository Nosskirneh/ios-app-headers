//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTIdentityStrategy-Protocol.h"

@class GIMMe, NSString, YTFirstTimeSignInController, YTGaiaSignInController, YTIdentityStore, YTIdentityTransactionCoalescer, YTPlusPageSelectionController;
@protocol YTResponder;

@interface YTDefaultIdentityStrategy : NSObject <YTIdentityStrategy>
{
    id <YTResponder> _eventResponder;
    YTGaiaSignInController *_gaiaSignInController;
    YTPlusPageSelectionController *_plusPageSelectionController;
    YTIdentityStore *_store;
    YTIdentityTransactionCoalescer *_coalescer;
    YTFirstTimeSignInController *_firstTimeSignInController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)loginSuccessMessageForIdentity:(id)arg1;
- (CDUnknownBlockType)cancelBlockForTransaction:(id)arg1;
- (CDUnknownBlockType)errorBlockForTransaction:(id)arg1;
- (CDUnknownBlockType)successBlockForTransaction:(id)arg1;
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

