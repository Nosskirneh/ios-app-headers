//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConfirmDialogConfig, YTIFormattedString, YTIFormattedStringTemplate, YTIIcon;

@interface YTIMenuItemConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConfirmDialogConfig *confirmDialog; // @dynamic confirmDialog;
@property(nonatomic) _Bool hasConfirmDialog; // @dynamic hasConfirmDialog;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTextTemplate; // @dynamic hasTextTemplate;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(retain, nonatomic) YTIFormattedStringTemplate *textTemplate; // @dynamic textTemplate;

@end

