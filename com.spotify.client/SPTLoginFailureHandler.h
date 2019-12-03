//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginRecoverAccountDataLoaderDelegate-Protocol.h"

@class NSString, SPTLoginFailureCounter, SPTLoginMagicLinkAutosendConfirmationPresenter, SPTLoginMagicLinkRequestTracker, SPTLoginRecoverAccountDataLoader;
@protocol SPTLoginFailureHandlerDelegate;

@interface SPTLoginFailureHandler : NSObject <SPTLoginRecoverAccountDataLoaderDelegate>
{
    id <SPTLoginFailureHandlerDelegate> _delegate;
    SPTLoginMagicLinkAutosendConfirmationPresenter *_confirmationPresenter;
    SPTLoginMagicLinkRequestTracker *_requestTracker;
    SPTLoginFailureCounter *_failureCounter;
    SPTLoginRecoverAccountDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTLoginRecoverAccountDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTLoginFailureCounter *failureCounter; // @synthesize failureCounter=_failureCounter;
@property(retain, nonatomic) SPTLoginMagicLinkRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(retain, nonatomic) SPTLoginMagicLinkAutosendConfirmationPresenter *confirmationPresenter; // @synthesize confirmationPresenter=_confirmationPresenter;
@property(nonatomic) __weak id <SPTLoginFailureHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didFinishLoadingWithSuccessForEmail:(id)arg2;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2 forEmail:(id)arg3;
- (_Bool)hasFailedEnoughTimesForUser:(id)arg1;
- (void)handleLoginFailureForUser:(id)arg1;
- (id)initWithConfirmationPresenter:(id)arg1 requestTracker:(id)arg2 loginFailureCounter:(id)arg3 dataLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

