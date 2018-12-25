//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString;

@interface YTIUnpluggedCurrentLocationSettingItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *acquisitionLoadingMessage; // @dynamic acquisitionLoadingMessage;
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTICommand *actionCommand; // @dynamic actionCommand;
@property(retain, nonatomic) YTIFormattedString *backButtonLabel; // @dynamic backButtonLabel;
@property(retain, nonatomic) YTIFormattedString *browserActionButtonLabel; // @dynamic browserActionButtonLabel;
@property(retain, nonatomic) YTIFormattedString *browserInstructionMessage; // @dynamic browserInstructionMessage;
@property(retain, nonatomic) YTIFormattedString *displayLocation; // @dynamic displayLocation;
@property(retain, nonatomic) YTIFormattedString *getHelpMessage; // @dynamic getHelpMessage;
@property(nonatomic) _Bool hasAcquisitionLoadingMessage; // @dynamic hasAcquisitionLoadingMessage;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasActionCommand; // @dynamic hasActionCommand;
@property(nonatomic) _Bool hasBackButtonLabel; // @dynamic hasBackButtonLabel;
@property(nonatomic) _Bool hasBrowserActionButtonLabel; // @dynamic hasBrowserActionButtonLabel;
@property(nonatomic) _Bool hasBrowserInstructionMessage; // @dynamic hasBrowserInstructionMessage;
@property(nonatomic) _Bool hasDisplayLocation; // @dynamic hasDisplayLocation;
@property(nonatomic) _Bool hasGetHelpMessage; // @dynamic hasGetHelpMessage;
@property(nonatomic) _Bool hasInformationalMessage; // @dynamic hasInformationalMessage;
@property(nonatomic) _Bool hasInstructionMessage; // @dynamic hasInstructionMessage;
@property(nonatomic) _Bool hasPrimaryButton; // @dynamic hasPrimaryButton;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTwofactorInstructionMessage; // @dynamic hasTwofactorInstructionMessage;
@property(nonatomic) _Bool hasTwofactorStartPollingButtonLabel; // @dynamic hasTwofactorStartPollingButtonLabel;
@property(nonatomic) _Bool hasTwofactorStopPollingButtonLabel; // @dynamic hasTwofactorStopPollingButtonLabel;
@property(nonatomic) _Bool hasUndetectedDeviceErrorMessage; // @dynamic hasUndetectedDeviceErrorMessage;
@property(nonatomic) _Bool hasUnresolvedLocationErrorMessage; // @dynamic hasUnresolvedLocationErrorMessage;
@property(retain, nonatomic) YTIFormattedString *informationalMessage; // @dynamic informationalMessage;
@property(retain, nonatomic) YTIFormattedString *instructionMessage; // @dynamic instructionMessage;
@property(retain, nonatomic) YTIButtonSupportedRenderers *primaryButton; // @dynamic primaryButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *twofactorInstructionMessage; // @dynamic twofactorInstructionMessage;
@property(retain, nonatomic) YTIFormattedString *twofactorStartPollingButtonLabel; // @dynamic twofactorStartPollingButtonLabel;
@property(retain, nonatomic) YTIFormattedString *twofactorStopPollingButtonLabel; // @dynamic twofactorStopPollingButtonLabel;
@property(retain, nonatomic) YTIFormattedString *undetectedDeviceErrorMessage; // @dynamic undetectedDeviceErrorMessage;
@property(retain, nonatomic) YTIFormattedString *unresolvedLocationErrorMessage; // @dynamic unresolvedLocationErrorMessage;

@end

