//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrchButton, OrchImageWithCaption, OrchInfoMessage, OrchLabel, OrchLink;

@interface OrchAlertMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchLabel *action; // @dynamic action;
@property(retain, nonatomic) OrchLink *actionLink; // @dynamic actionLink;
@property(retain, nonatomic) OrchInfoMessage *description_p; // @dynamic description_p;
@property(retain, nonatomic) OrchLabel *dismiss; // @dynamic dismiss;
@property(retain, nonatomic) OrchButton *dismissButton; // @dynamic dismissButton;
@property(nonatomic) int displayMode; // @dynamic displayMode;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasActionLink; // @dynamic hasActionLink;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDismiss; // @dynamic hasDismiss;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasDisplayMode; // @dynamic hasDisplayMode;
@property(nonatomic) _Bool hasHelp; // @dynamic hasHelp;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) OrchLabel *help; // @dynamic help;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

