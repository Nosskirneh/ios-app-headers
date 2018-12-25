//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIUpgradeDialogSupportedRenderers;

@interface YTIUpgradeConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool force; // @dynamic force;
@property(copy, nonatomic) NSString *forceBelowVersion; // @dynamic forceBelowVersion;
@property(nonatomic) _Bool hasForce; // @dynamic hasForce;
@property(nonatomic) _Bool hasForceBelowVersion; // @dynamic hasForceBelowVersion;
@property(nonatomic) _Bool hasPrompt; // @dynamic hasPrompt;
@property(nonatomic) _Bool hasPromptBelowVersion; // @dynamic hasPromptBelowVersion;
@property(nonatomic) _Bool hasPromptHoldoffSeconds; // @dynamic hasPromptHoldoffSeconds;
@property(nonatomic) _Bool hasUpgradeDialog; // @dynamic hasUpgradeDialog;
@property(nonatomic) _Bool prompt; // @dynamic prompt;
@property(copy, nonatomic) NSString *promptBelowVersion; // @dynamic promptBelowVersion;
@property(nonatomic) long long promptHoldoffSeconds; // @dynamic promptHoldoffSeconds;
@property(retain, nonatomic) YTIUpgradeDialogSupportedRenderers *upgradeDialog; // @dynamic upgradeDialog;

@end

