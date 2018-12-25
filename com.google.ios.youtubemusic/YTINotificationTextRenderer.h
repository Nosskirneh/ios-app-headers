//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString;

@interface YTINotificationTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSuccessResponseText; // @dynamic hasSuccessResponseText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUndoEndpoint; // @dynamic hasUndoEndpoint;
@property(nonatomic) _Bool hasUndoText; // @dynamic hasUndoText;
@property(retain, nonatomic) YTIFormattedString *successResponseText; // @dynamic successResponseText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *undoEndpoint; // @dynamic undoEndpoint;
@property(retain, nonatomic) YTIFormattedString *undoText; // @dynamic undoText;

@end

