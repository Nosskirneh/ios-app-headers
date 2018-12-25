//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, OrchConfirmationDialog, OrchInstrumentForm, OrchLink;

@interface OrchAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSData *actionToken; // @dynamic actionToken;
@property(nonatomic) int actionType; // @dynamic actionType;
@property(retain, nonatomic) OrchConfirmationDialog *confirmationDialog; // @dynamic confirmationDialog;
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasActionToken; // @dynamic hasActionToken;
@property(nonatomic) _Bool hasActionType; // @dynamic hasActionType;
@property(nonatomic) _Bool hasConfirmationDialog; // @dynamic hasConfirmationDialog;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) _Bool hasInstrumentForm; // @dynamic hasInstrumentForm;
@property(nonatomic) _Bool hasIntegratorProvidedId; // @dynamic hasIntegratorProvidedId;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLink; // @dynamic hasLink;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchInstrumentForm *instrumentForm; // @dynamic instrumentForm;
@property(copy, nonatomic) NSString *integratorProvidedId; // @dynamic integratorProvidedId;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) OrchLink *link; // @dynamic link;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

