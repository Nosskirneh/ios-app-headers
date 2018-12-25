//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIMdeDetailedCommitButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *buttonText; // @dynamic buttonText;
@property(retain, nonatomic) YTICommand *commitEndpoint; // @dynamic commitEndpoint;
@property(retain, nonatomic) YTIFormattedString *confirmationAffirmative; // @dynamic confirmationAffirmative;
@property(retain, nonatomic) YTIFormattedString *confirmationNegative; // @dynamic confirmationNegative;
@property(retain, nonatomic) YTIFormattedString *confirmationText; // @dynamic confirmationText;
@property(retain, nonatomic) YTIFormattedString *confirmationTitle; // @dynamic confirmationTitle;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasCommitEndpoint; // @dynamic hasCommitEndpoint;
@property(nonatomic) _Bool hasConfirmationAffirmative; // @dynamic hasConfirmationAffirmative;
@property(nonatomic) _Bool hasConfirmationNegative; // @dynamic hasConfirmationNegative;
@property(nonatomic) _Bool hasConfirmationText; // @dynamic hasConfirmationText;
@property(nonatomic) _Bool hasConfirmationTitle; // @dynamic hasConfirmationTitle;

@end

