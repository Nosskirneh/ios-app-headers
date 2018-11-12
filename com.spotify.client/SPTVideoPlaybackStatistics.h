//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SPTVideoPlaybackStatistics : NSObject
{
    long long _msPlayed;
    long long _msPlayedBackground;
    long long _msPlayedFullscreen;
    long long _msPlayedSubtitles;
    long long _msUnionPlayed;
    long long _msPlayedMaxContinous;
    long long _msStartPosition;
    long long _nSeekForward;
    long long _nSeekBackward;
    long long _msSeekForward;
    long long _msSeekBackward;
    long long _msBufferingInitial;
    long long _msBufferingSeek;
    long long _msBufferingStall;
    long long _msBufferingSeekLongest;
    long long _msBufferingStallLongest;
    long long _nStalls;
    long long _msStartTime;
    long long _msManifestLoadTime;
    long long _msEncryptionLoadTime;
    double _averageDeviceOrientation;
    double _tolerableEndPosition;
}

@property(nonatomic) double tolerableEndPosition; // @synthesize tolerableEndPosition=_tolerableEndPosition;
@property(readonly, nonatomic) double averageDeviceOrientation; // @synthesize averageDeviceOrientation=_averageDeviceOrientation;
@property(readonly, nonatomic) long long msEncryptionLoadTime; // @synthesize msEncryptionLoadTime=_msEncryptionLoadTime;
@property(readonly, nonatomic) long long msManifestLoadTime; // @synthesize msManifestLoadTime=_msManifestLoadTime;
@property(readonly, nonatomic) long long msStartTime; // @synthesize msStartTime=_msStartTime;
@property(readonly, nonatomic) long long nStalls; // @synthesize nStalls=_nStalls;
@property(readonly, nonatomic) long long msBufferingStallLongest; // @synthesize msBufferingStallLongest=_msBufferingStallLongest;
@property(readonly, nonatomic) long long msBufferingSeekLongest; // @synthesize msBufferingSeekLongest=_msBufferingSeekLongest;
@property(readonly, nonatomic) long long msBufferingStall; // @synthesize msBufferingStall=_msBufferingStall;
@property(readonly, nonatomic) long long msBufferingSeek; // @synthesize msBufferingSeek=_msBufferingSeek;
@property(readonly, nonatomic) long long msBufferingInitial; // @synthesize msBufferingInitial=_msBufferingInitial;
@property(readonly, nonatomic) long long msSeekBackward; // @synthesize msSeekBackward=_msSeekBackward;
@property(readonly, nonatomic) long long msSeekForward; // @synthesize msSeekForward=_msSeekForward;
@property(readonly, nonatomic) long long nSeekBackward; // @synthesize nSeekBackward=_nSeekBackward;
@property(readonly, nonatomic) long long nSeekForward; // @synthesize nSeekForward=_nSeekForward;
@property(readonly, nonatomic) long long msStartPosition; // @synthesize msStartPosition=_msStartPosition;
@property(readonly, nonatomic) long long msPlayedMaxContinous; // @synthesize msPlayedMaxContinous=_msPlayedMaxContinous;
@property(readonly, nonatomic) long long msUnionPlayed; // @synthesize msUnionPlayed=_msUnionPlayed;
@property(readonly, nonatomic) long long msPlayedSubtitles; // @synthesize msPlayedSubtitles=_msPlayedSubtitles;
@property(readonly, nonatomic) long long msPlayedFullscreen; // @synthesize msPlayedFullscreen=_msPlayedFullscreen;
@property(readonly, nonatomic) long long msPlayedBackground; // @synthesize msPlayedBackground=_msPlayedBackground;
@property(readonly, nonatomic) long long msPlayed; // @synthesize msPlayed=_msPlayed;
- (double)calculateMaxContinous:(id)arg1;
- (id)orderByStartPosition:(id)arg1;
- (void)calculateLoadingStatistics:(id)arg1 manifestLoadTimeRange:(id)arg2 encryptionLoadTimeRange:(id)arg3;
- (void)calculateBufferStatistics:(id)arg1;
- (void)calculateSeekStatistics:(id)arg1;
- (void)calculatePlaybackStatistics:(id)arg1;
- (id)initWithTolerableEndPosition:(double)arg1;

@end

