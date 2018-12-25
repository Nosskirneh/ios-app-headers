//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIDismissableClingType, YTIFormattedString;

@interface YTIDismissableClingRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)ytm_titleForClingType:(long long)arg1;
+ (id)ytm_messageForClingType:(long long)arg1;
+ (id)ytm_clientClingRendererOfType:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) YTIDismissableClingType *clingType; // @dynamic clingType;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasClingType; // @dynamic hasClingType;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasMessageText; // @dynamic hasMessageText;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *messageText; // @dynamic messageText;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

