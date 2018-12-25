//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchImageWithCaption, OrchInfoMessage, OrchLink, OrchSimpleForm, OrchTaxInfoForm, OrchTooltip;

@interface OrchTableCell : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *ariaLabel; // @dynamic ariaLabel;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @dynamic buttonArray;
@property(readonly, nonatomic) unsigned long long buttonArray_Count; // @dynamic buttonArray_Count;
@property(nonatomic) int columnSpan; // @dynamic columnSpan;
@property(retain, nonatomic) NSMutableArray *confirmationDialogArray; // @dynamic confirmationDialogArray;
@property(readonly, nonatomic) unsigned long long confirmationDialogArray_Count; // @dynamic confirmationDialogArray_Count;
@property(nonatomic) int contentType; // @dynamic contentType;
@property(nonatomic) _Bool hasAriaLabel; // @dynamic hasAriaLabel;
@property(nonatomic) _Bool hasColumnSpan; // @dynamic hasColumnSpan;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasHeaderCell; // @dynamic hasHeaderCell;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconPosition; // @dynamic hasIconPosition;
@property(nonatomic) _Bool hasLink; // @dynamic hasLink;
@property(nonatomic) _Bool hasRowSpan; // @dynamic hasRowSpan;
@property(nonatomic) _Bool hasSimpleForm; // @dynamic hasSimpleForm;
@property(nonatomic) _Bool hasTaxInfoForm; // @dynamic hasTaxInfoForm;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) _Bool headerCell; // @dynamic headerCell;
@property(retain, nonatomic) OrchImageWithCaption *icon; // @dynamic icon;
@property(nonatomic) int iconPosition; // @dynamic iconPosition;
@property(retain, nonatomic) NSMutableArray *infoMessageArray; // @dynamic infoMessageArray;
@property(readonly, nonatomic) unsigned long long infoMessageArray_Count; // @dynamic infoMessageArray_Count;
@property(retain, nonatomic) OrchLink *link; // @dynamic link;
@property(retain, nonatomic) NSMutableArray *menuArray; // @dynamic menuArray;
@property(readonly, nonatomic) unsigned long long menuArray_Count; // @dynamic menuArray_Count;
@property(nonatomic) int rowSpan; // @dynamic rowSpan;
@property(retain, nonatomic) OrchSimpleForm *simpleForm; // @dynamic simpleForm;
@property(retain, nonatomic) OrchTaxInfoForm *taxInfoForm; // @dynamic taxInfoForm;
@property(retain, nonatomic) OrchTooltip *tooltip; // @dynamic tooltip;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(retain, nonatomic) OrchInfoMessage *value; // @dynamic value;

@end
