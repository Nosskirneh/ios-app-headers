//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCKPB_AdaptiveDiscoveryResult : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int deviceConnectionErrorCode; // @dynamic deviceConnectionErrorCode;
@property(nonatomic) _Bool deviceConnectionSucceeds; // @dynamic deviceConnectionSucceeds;
@property(retain, nonatomic) NSString *deviceModelName; // @dynamic deviceModelName;
@property(retain, nonatomic) GCKPB_PBMutableArray *expectedSubtypesArray; // @dynamic expectedSubtypesArray;
@property(nonatomic) _Bool hasDeviceConnectionErrorCode; // @dynamic hasDeviceConnectionErrorCode;
@property(nonatomic) _Bool hasDeviceConnectionSucceeds; // @dynamic hasDeviceConnectionSucceeds;
@property(nonatomic) _Bool hasDeviceModelName; // @dynamic hasDeviceModelName;
@property(nonatomic) _Bool hasExpectedSubtypesArray; // @dynamic hasExpectedSubtypesArray;
@property(nonatomic) _Bool hasIsSameDevice; // @dynamic hasIsSameDevice;
@property(nonatomic) _Bool hasReceivedSubtypesArray; // @dynamic hasReceivedSubtypesArray;
@property(nonatomic) _Bool hasTriggeredReason; // @dynamic hasTriggeredReason;
@property(nonatomic) _Bool isSameDevice; // @dynamic isSameDevice;
@property(retain, nonatomic) GCKPB_PBMutableArray *receivedSubtypesArray; // @dynamic receivedSubtypesArray;
@property(nonatomic) int triggeredReason; // @dynamic triggeredReason;

@end

