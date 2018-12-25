//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, YTIAudioConfig, YTIDataSaverConfig, YTIFairPlayConfig, YTIHamplayerConfig, YTIHlsProxyConfig, YTIIosAvPlayerConfig, YTILivePlayerConfig, YTIMediaCommonConfig, YTIStickyQualitySelectionConfig, YTIVrConfig;

@protocol MLPlayerConfig <NSObject>
@property(readonly, nonatomic) YTIMediaCommonConfig *mediaCommonConfig;
@property(readonly, nonatomic) YTIAudioConfig *audioConfig;
@property(readonly, nonatomic) float oversendFactor;
@property(readonly, nonatomic) YTIDataSaverConfig *dataSaverConfig;
@property(readonly, nonatomic) _Bool offlineable;
@property(readonly, nonatomic) _Bool enableQualitySelectionOnCellular;
@property(readonly, nonatomic) YTIStickyQualitySelectionConfig *stickyQualityConfig;
@property(readonly, nonatomic) double stickyCeilingDuration;
@property(readonly, nonatomic) YTIVrConfig *VRConfig;
@property(readonly, nonatomic) YTILivePlayerConfig *livePlayerConfig;
@property(readonly, nonatomic) YTIFairPlayConfig *fairPlayConfig;
@property(readonly, nonatomic) NSString *DRMSessionID;
@property(readonly, nonatomic) NSDictionary *videoToAudioItagMap;
@property(readonly, nonatomic) double initialMediaTime;
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) float relativeVolume;
@property(readonly, nonatomic) YTIHamplayerConfig *hamplayerConfig;
@property(readonly, nonatomic) YTIIosAvPlayerConfig *AVPlayerConfig;
@property(readonly, nonatomic) YTIHlsProxyConfig *HLSProxyConfig;
@end
