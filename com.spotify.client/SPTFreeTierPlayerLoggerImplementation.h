//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlayerLogger-Protocol.h"
#import "SPTNowPlayingFeedbackObserver-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTNowPlayingFeedbackObservable;

@interface SPTFreeTierPlayerLoggerImplementation : NSObject <SPTNowPlayingFeedbackObserver, SPTFreeTierPlayerLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTNowPlayingFeedbackObservable> _feedbackObservable;
}

@property(retain, nonatomic) id <SPTNowPlayingFeedbackObservable> feedbackObservable; // @synthesize feedbackObservable=_feedbackObservable;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)didRemoveBanFromCollection:(id)arg1 source:(long long)arg2;
- (void)didBanFromCollection:(id)arg1 source:(long long)arg2;
- (void)didRemoveFromCollection:(id)arg1 source:(long long)arg2;
- (void)didAddToCollection:(id)arg1 source:(long long)arg2;
- (void)logNowPlayingEvent:(id)arg1 section:(id)arg2 userIntent:(id)arg3 targetURI:(id)arg4 pageURI:(id)arg5;
- (void)logNowPlayingRemoveBanEvent:(id)arg1 pageURI:(id)arg2 source:(long long)arg3;
- (void)logNowPlayingBanEvent:(id)arg1 pageURI:(id)arg2 source:(long long)arg3;
- (void)logNowPlayingRemoveFromCollectionEvent:(id)arg1 pageURI:(id)arg2 source:(long long)arg3;
- (void)logNowPlayingAddToCollectionEvent:(id)arg1 pageURI:(id)arg2 source:(long long)arg3;
- (void)stopObservingNowPlayingFeedback;
- (id)nowPlayingSource:(long long)arg1;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 feedbackObservable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

