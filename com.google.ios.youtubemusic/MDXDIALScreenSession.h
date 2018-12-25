//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDXScreenSession.h"

@class MDXDIALScreen, MDXPairingHandler, MDXPlaybackDescriptor, YTIDialData;
@protocol MDXConfig;

@interface MDXDIALScreenSession : MDXScreenSession
{
    id <MDXConfig> _MDXConfig;
    MDXDIALScreen *_screen;
    MDXPairingHandler *_pairingHandler;
    CDUnknownBlockType _launchCompletionBlock;
    YTIDialData *_loggingDIALDataAtLaunch;
    _Bool _attemptingSmoothPairing;
    MDXPlaybackDescriptor *_playbackDescriptorForLaunch;
}

- (id)screen;
- (void).cxx_destruct;
- (void)fetchDIALScreenSessionDataWithContext:(id)arg1;
- (void)finishLaunchWithError:(id)arg1;
- (void)finishPollingAfterTimoutWithContext:(id)arg1;
- (void)finishPollingAndUpdateScreen:(id)arg1 withContext:(id)arg2;
- (void)scheduleNextPollWithContext:(id)arg1 timeSpent:(double)arg2;
- (void)fetchScreenInfoAndFinishLaunch;
- (void)launchDIALApp;
- (id)httpArgumentsStringForDictionary:(id)arg1;
- (id)sessionDisconnectedLoggingPayload;
- (id)sessionConnectedLoggingPayload;
- (id)sessionStartedLoggingPayload;
- (void)stopScreenApp;
- (void)updateLoggingDIALData;
- (void)launchScreenAppWithPlaybackDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sessionStatus:(id)arg1;
- (_Bool)isSmartRemoteEnabled;
- (id)initWithScreen:(id)arg1 pairingHandler:(id)arg2;

@end

