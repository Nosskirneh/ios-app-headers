//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTICommand;

@interface YTISettingMenuItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateServiceEndpoint; // @dynamic hasUpdateServiceEndpoint;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *updateServiceEndpoint; // @dynamic updateServiceEndpoint;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

