//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STKAudioPlayerDelegate-Protocol.h"

@class NSString;

@interface SaavnAdsSTKdelegate : NSObject <STKAudioPlayerDelegate>
{
}

+ (id)sharedDelegate;
- (void)audioPlayer:(id)arg1 didCancelQueuedItems:(id)arg2;
- (void)audioPlayer:(id)arg1 logInfo:(id)arg2;
- (void)audioPlayer:(id)arg1 unexpectedError:(int)arg2;
- (void)audioPlayer:(id)arg1 didFinishPlayingQueueItemId:(id)arg2 withReason:(int)arg3 andProgress:(double)arg4 andDuration:(double)arg5;
- (void)audioPlayer:(id)arg1 stateChanged:(int)arg2 previousState:(int)arg3;
- (void)audioPlayer:(id)arg1 didFinishBufferingSourceWithQueueItemId:(id)arg2;
- (void)audioPlayer:(id)arg1 didStartPlayingQueueItemId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

