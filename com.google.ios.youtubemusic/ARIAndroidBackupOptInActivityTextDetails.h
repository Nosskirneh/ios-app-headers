//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidAlertDialogTextDetails, ARIAndroidTextDetails;

@interface ARIAndroidBackupOptInActivityTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidAlertDialogTextDetails *confirmDisableDialogDetails; // @dynamic confirmDisableDialogDetails;
@property(retain, nonatomic) ARIAndroidTextDetails *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) ARIAndroidTextDetails *disableText; // @dynamic disableText;
@property(retain, nonatomic) ARIAndroidTextDetails *enableText; // @dynamic enableText;
@property(nonatomic) _Bool hasConfirmDisableDialogDetails; // @dynamic hasConfirmDisableDialogDetails;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasDisableText; // @dynamic hasDisableText;
@property(nonatomic) _Bool hasEnableText; // @dynamic hasEnableText;
@property(nonatomic) _Bool hasLearnMoreDialogDetails; // @dynamic hasLearnMoreDialogDetails;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) ARIAndroidAlertDialogTextDetails *learnMoreDialogDetails; // @dynamic learnMoreDialogDetails;
@property(retain, nonatomic) ARIAndroidTextDetails *titleText; // @dynamic titleText;

@end

