//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIOfflineAdFrequencyCapSupportedConfigs;

@interface YTIOfflineFrequencyCap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attemptedPlaybackCappedUrlsArray; // @dynamic attemptedPlaybackCappedUrlsArray;
@property(readonly, nonatomic) unsigned long long attemptedPlaybackCappedUrlsArray_Count; // @dynamic attemptedPlaybackCappedUrlsArray_Count;
@property(nonatomic) _Bool hasOfflineConfig; // @dynamic hasOfflineConfig;
@property(retain, nonatomic) YTIOfflineAdFrequencyCapSupportedConfigs *offlineConfig; // @dynamic offlineConfig;

@end
