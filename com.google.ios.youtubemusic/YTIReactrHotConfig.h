//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIChatConfig, YTIReactrHotConfigExperiments, YTISyncConfig;

@interface YTIReactrHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChatConfig *chatConfig; // @dynamic chatConfig;
@property(retain, nonatomic) YTIReactrHotConfigExperiments *experiments; // @dynamic experiments;
@property(nonatomic) _Bool hasChatConfig; // @dynamic hasChatConfig;
@property(nonatomic) _Bool hasExperiments; // @dynamic hasExperiments;
@property(nonatomic) _Bool hasSyncConfig; // @dynamic hasSyncConfig;
@property(retain, nonatomic) YTISyncConfig *syncConfig; // @dynamic syncConfig;

@end
