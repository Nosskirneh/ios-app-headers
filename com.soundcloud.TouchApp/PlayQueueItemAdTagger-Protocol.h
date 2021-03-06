//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RACDisposable, RACSignal;
@protocol _TtP3Ads6AdItem_;

@protocol PlayQueueItemAdTagger <NSObject>
- (_Bool)supportedAdType:(unsigned long long)arg1;
- (void)updatePlayQueueItem:(id <_TtP3Ads6AdItem_>)arg1;
- (RACDisposable *)subscribePlayStateChange:(RACSignal *)arg1;
- (RACDisposable *)subscribeProgressChange:(RACSignal *)arg1;
- (RACDisposable *)subscribePlayQueueItemChange:(RACSignal *)arg1;

@optional
- (void)tagFullscreenForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagShrinkScreenForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagProgressForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2 position:(double)arg3 duration:(double)arg4;
- (void)tagFinishForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagResumeForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagPauseForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagSkipForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagImpressionForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
- (void)tagClickForItem:(id <_TtP3Ads6AdItem_>)arg1 onScreen:(long long)arg2;
@end

