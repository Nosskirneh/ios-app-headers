//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIKidsOnboardingAppUnavailablePageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *body; // @dynamic body;
@property(retain, nonatomic) YTIFormattedString *buttonText; // @dynamic buttonText;
@property(copy, nonatomic) NSString *buttonURL; // @dynamic buttonURL;
@property(nonatomic) _Bool hasBody; // @dynamic hasBody;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasButtonURL; // @dynamic hasButtonURL;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

