//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol BMPlaybackIdentity;

@protocol BMPlaybackSessionMessage <NSObject>
@property(readonly, nonatomic) NSString *lastUsedSubtitle;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) NSString *exitReason;
@property(readonly, nonatomic) double averageDeviceOrientation;
@property(readonly, nonatomic) long long nDroppedFrames;
@property(readonly, nonatomic) long long nViewTransitions;
@property(readonly, nonatomic) long long kbytesDownloaded;
@property(readonly, nonatomic) NSString *encryptionType;
@property(readonly, nonatomic) long long kbpsAverageBandwidth;
@property(readonly, nonatomic) NSString *connectionTypeEnd;
@property(readonly, nonatomic) NSString *connectionTypeStart;
@property(readonly, nonatomic) long long msPlayedSubtitles;
@property(readonly, nonatomic) long long msPlayedFullscreen;
@property(readonly, nonatomic) long long msPlayedBackground;
@property(readonly, nonatomic) long long msPlayed;
@property(readonly, nonatomic) long long nSeekforward;
@property(readonly, nonatomic) long long nSeekback;
@property(readonly, nonatomic) long long nStalls;
@property(readonly, nonatomic) long long msBufferingStallLongest;
@property(readonly, nonatomic) long long msBufferingStall;
@property(readonly, nonatomic) long long msBufferingSeekLongest;
@property(readonly, nonatomic) long long msBufferingSeek;
@property(readonly, nonatomic) long long msInitialBuffering;
@property(readonly, nonatomic) long long msEncryptionLoadTime;
@property(readonly, nonatomic) long long msManifestLoadTime;
@property(readonly, nonatomic) long long msStartTime;
@property(readonly, nonatomic) long long msDuration;
@property(readonly, nonatomic) long long startBitrate;
@property(readonly, nonatomic) long long msStartPosition;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) id <BMPlaybackIdentity> identity;
@end

