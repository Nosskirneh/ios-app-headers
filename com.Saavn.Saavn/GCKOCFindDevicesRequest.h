//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKOCEnvironmentScan, NSString;

@interface GCKOCFindDevicesRequest : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;

@end

