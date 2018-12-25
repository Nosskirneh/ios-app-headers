//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSingleVideoCurrentTimeObserver-Protocol.h"
#import "YTSingleVideoErrorObserver-Protocol.h"
#import "YTSingleVideoLifecycleStateObserver-Protocol.h"
#import "YTSingleVideoMediaStateObserver-Protocol.h"

@class NSString;
@protocol YTAdsSingleVideoObserverDelegate;

@interface YTInstreamAdSingleVideoObserver : NSObject <YTSingleVideoCurrentTimeObserver, YTSingleVideoErrorObserver, YTSingleVideoLifecycleStateObserver, YTSingleVideoMediaStateObserver>
{
    id <YTAdsSingleVideoObserverDelegate> _adsPlaybackCoordinator;
}

- (void).cxx_destruct;
- (void)singleVideo:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)singleVideo:(id)arg1 didFailWithError:(id)arg2;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 lifecycleStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)startObservingAdSingleVideo:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

