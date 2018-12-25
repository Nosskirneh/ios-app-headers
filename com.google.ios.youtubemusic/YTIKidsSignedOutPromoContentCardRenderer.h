//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIThumbnailDetails;

@interface YTIKidsSignedOutPromoContentCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int backgroundColorLowerActivated; // @dynamic backgroundColorLowerActivated;
@property(nonatomic) unsigned int backgroundColorLowerNormal; // @dynamic backgroundColorLowerNormal;
@property(nonatomic) unsigned int backgroundColorUpperActivated; // @dynamic backgroundColorUpperActivated;
@property(nonatomic) unsigned int backgroundColorUpperNormal; // @dynamic backgroundColorUpperNormal;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImageActivated; // @dynamic backgroundImageActivated;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImageNormal; // @dynamic backgroundImageNormal;
@property(retain, nonatomic) YTIFormattedString *body; // @dynamic body;
@property(nonatomic) _Bool hasBackgroundColorLowerActivated; // @dynamic hasBackgroundColorLowerActivated;
@property(nonatomic) _Bool hasBackgroundColorLowerNormal; // @dynamic hasBackgroundColorLowerNormal;
@property(nonatomic) _Bool hasBackgroundColorUpperActivated; // @dynamic hasBackgroundColorUpperActivated;
@property(nonatomic) _Bool hasBackgroundColorUpperNormal; // @dynamic hasBackgroundColorUpperNormal;
@property(nonatomic) _Bool hasBackgroundImageActivated; // @dynamic hasBackgroundImageActivated;
@property(nonatomic) _Bool hasBackgroundImageNormal; // @dynamic hasBackgroundImageNormal;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasSignInButtonText; // @dynamic hasSignInButtonText;
@property(nonatomic) _Bool hasSignInInstructionText; // @dynamic hasSignInInstructionText;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *signInButtonText; // @dynamic signInButtonText;
@property(retain, nonatomic) YTIFormattedString *signInInstructionText; // @dynamic signInInstructionText;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

