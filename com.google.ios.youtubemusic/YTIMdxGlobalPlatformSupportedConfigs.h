//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIClientMdxGlobalConfig, YTIIosMdxGlobalConfig;

@interface YTIMdxGlobalPlatformSupportedConfigs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIClientMdxGlobalConfig *clientMdxGlobalConfig; // @dynamic clientMdxGlobalConfig;
@property(nonatomic) _Bool hasClientMdxGlobalConfig; // @dynamic hasClientMdxGlobalConfig;
@property(nonatomic) _Bool hasIosMdxGlobalConfig; // @dynamic hasIosMdxGlobalConfig;
@property(retain, nonatomic) YTIIosMdxGlobalConfig *iosMdxGlobalConfig; // @dynamic iosMdxGlobalConfig;

@end

