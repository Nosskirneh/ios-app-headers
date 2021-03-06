//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCrashRestoreVideoProtocol-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSDate, NSString, YTICommand, YTInteractionLoggingProxyButton, YTUserDefaults;
@protocol YTResponder;

@interface YTCrashRestoreVideoController : NSObject <YTGraftingViewController, YTResponder, YTCrashRestoreVideoProtocol>
{
    NSString *_lastVideoID;
    NSString *_lastPlaylistID;
    NSString *_lastStartTime;
    NSString *_lastCurrentUserID;
    unsigned long long _lastIndex;
    NSDate *_dateLastOpenedVideo;
    _Bool _shouldUpdateMediaTime;
    double _lastMediaTime;
    double _updateInterval;
    YTInteractionLoggingProxyButton *_restoreVideoAfterCrashButtonProxy;
    YTICommand *_navEndpoint;
    NSString *_message;
    NSString *_buttonMessage;
    double _displayDuration;
    YTUserDefaults *_userDefaults;
    _Bool _isDevBuild;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)displayMessageIfCrashedWhileWatchingVideo;
- (void)maybeShowVideoRestoreAfterCrashMessageWithCrashCount:(unsigned long long)arg1;
- (id)navEndpoint;
- (void)clearUserPlaybackParameters;
- (void)updateUserPlaybackCurrentMediaTime:(double)arg1 isVideoFinished:(_Bool)arg2;
- (void)addUserPlaybackParametersWithVideoID:(id)arg1 playlistID:(id)arg2 index:(unsigned long long)arg3 startTime:(double)arg4;
- (id)initWithMessage:(id)arg1 buttonMessage:(id)arg2 isDevBuild:(_Bool)arg3;
- (id)initWithMessage:(id)arg1 buttonMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

