//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer;

@interface YTIMdeMonetizationGuidelinesRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *acceptGuidelinesErrorMessage; // @dynamic acceptGuidelinesErrorMessage;
@property(nonatomic) _Bool hasAcceptGuidelinesErrorMessage; // @dynamic hasAcceptGuidelinesErrorMessage;
@property(nonatomic) _Bool hasLearnMoreButton; // @dynamic hasLearnMoreButton;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIRenderer *learnMoreButton; // @dynamic learnMoreButton;
@property(retain, nonatomic) YTIFormattedString *message; // @dynamic message;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

