//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIShareTargetRenderer, YTIShareTargetServiceUpdateRenderer;

@interface YTIShareTargetSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasShareTargetRenderer; // @dynamic hasShareTargetRenderer;
@property(nonatomic) _Bool hasShareTargetServiceUpdateRenderer; // @dynamic hasShareTargetServiceUpdateRenderer;
@property(retain, nonatomic) YTIShareTargetRenderer *shareTargetRenderer; // @dynamic shareTargetRenderer;
@property(retain, nonatomic) YTIShareTargetServiceUpdateRenderer *shareTargetServiceUpdateRenderer; // @dynamic shareTargetServiceUpdateRenderer;

@end
