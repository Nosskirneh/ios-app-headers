//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTICommand, YTIFormattedString, YTIUserCompleteAvatar;

@interface YTIWideSuggestedContactRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUserCompleteAvatar *avatar; // @dynamic avatar;
@property(copy, nonatomic) NSString *contactId; // @dynamic contactId;
@property(retain, nonatomic) YTICommand *dismissEndpoint; // @dynamic dismissEndpoint;
@property(retain, nonatomic) YTIFormattedString *dismissMessage; // @dynamic dismissMessage;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;
@property(nonatomic) _Bool hasDismissEndpoint; // @dynamic hasDismissEndpoint;
@property(nonatomic) _Bool hasDismissMessage; // @dynamic hasDismissMessage;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSerializedSuggestedContact; // @dynamic hasSerializedSuggestedContact;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *name; // @dynamic name;
@property(copy, nonatomic) NSString *serializedSuggestedContact; // @dynamic serializedSuggestedContact;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

