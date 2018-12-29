//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSUserDefaults;

@interface WMPSettingsService : NSObject
{
    _Bool _isUsingLoudnessNormalization;
    _Bool _isUsingShuffle;
    _Bool _hasEnabledLastFMScrobbling;
    _Bool _allowsCellularDownload;
    _Bool _allowsAdaptiveStreaming;
    NSNumber *_preAmp;
    long long _repeatType;
    NSNumber *_crossfade;
    long long _wifiStreamingQuality;
    long long _mobileStreamingQuality;
    long long _audioDownloadQuality;
    long long _videoDownloadQuality;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedSettings;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) long long videoDownloadQuality; // @synthesize videoDownloadQuality=_videoDownloadQuality;
@property(nonatomic) long long audioDownloadQuality; // @synthesize audioDownloadQuality=_audioDownloadQuality;
@property(nonatomic) long long mobileStreamingQuality; // @synthesize mobileStreamingQuality=_mobileStreamingQuality;
@property(nonatomic) long long wifiStreamingQuality; // @synthesize wifiStreamingQuality=_wifiStreamingQuality;
@property(retain, nonatomic) NSNumber *crossfade; // @synthesize crossfade=_crossfade;
@property(nonatomic) _Bool allowsAdaptiveStreaming; // @synthesize allowsAdaptiveStreaming=_allowsAdaptiveStreaming;
@property(nonatomic) _Bool allowsCellularDownload; // @synthesize allowsCellularDownload=_allowsCellularDownload;
@property(nonatomic) _Bool hasEnabledLastFMScrobbling; // @synthesize hasEnabledLastFMScrobbling=_hasEnabledLastFMScrobbling;
@property(nonatomic, setter=setRepeatType:) long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic, setter=setUseShuffle:) _Bool isUsingShuffle; // @synthesize isUsingShuffle=_isUsingShuffle;
@property(retain, nonatomic) NSNumber *preAmp; // @synthesize preAmp=_preAmp;
@property(nonatomic) _Bool isUsingLoudnessNormalization; // @synthesize isUsingLoudnessNormalization=_isUsingLoudnessNormalization;
- (void).cxx_destruct;
- (void)resetDefaults;
- (void)readDefaults;
- (_Bool)isUsingRepeatAll;
- (_Bool)isUsingRepeat;
- (id)videoQualityToString:(long long)arg1;
- (id)soundQualityToString:(long long)arg1;
- (long long)soundQualityFromString:(id)arg1;
- (long long)currentWifiQuality;
- (long long)currentStreamingQuality;
- (id)init;

@end

