//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIRenderer;

@interface YTIMusicDetailHeaderButtonsBylineRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasLeftButton; // @dynamic hasLeftButton;
@property(nonatomic) _Bool hasMoreButton; // @dynamic hasMoreButton;
@property(nonatomic) _Bool hasRightButton; // @dynamic hasRightButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *leftButton; // @dynamic leftButton;
@property(retain, nonatomic) YTIRenderer *moreButton; // @dynamic moreButton;
@property(retain, nonatomic) YTIRenderer *rightButton; // @dynamic rightButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

