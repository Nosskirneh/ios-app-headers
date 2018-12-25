//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchImageWithCaption, OrchInfoMessage;

@interface OrchInstrumentSelector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalOptionArray; // @dynamic additionalOptionArray;
@property(readonly, nonatomic) unsigned long long additionalOptionArray_Count; // @dynamic additionalOptionArray_Count;
@property(nonatomic) long long backupPreselectedOptionReference; // @dynamic backupPreselectedOptionReference;
@property(retain, nonatomic) OrchInfoMessage *description_p; // @dynamic description_p;
@property(nonatomic) _Bool expandByDefault; // @dynamic expandByDefault;
@property(nonatomic) _Bool hasBackupPreselectedOptionReference; // @dynamic hasBackupPreselectedOptionReference;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasExpandByDefault; // @dynamic hasExpandByDefault;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHeaderIcon; // @dynamic hasHeaderIcon;
@property(nonatomic) _Bool hasPreselectAdditionalOptionIndex; // @dynamic hasPreselectAdditionalOptionIndex;
@property(nonatomic) _Bool hasPreselectInstrumentOptionIndex; // @dynamic hasPreselectInstrumentOptionIndex;
@property(nonatomic) _Bool hasPreselectedOptionReference; // @dynamic hasPreselectedOptionReference;
@property(nonatomic) _Bool hasShouldHideSelector; // @dynamic hasShouldHideSelector;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasUnselectedUiReference; // @dynamic hasUnselectedUiReference;
@property(copy, nonatomic) NSString *header; // @dynamic header;
@property(retain, nonatomic) OrchImageWithCaption *headerIcon; // @dynamic headerIcon;
@property(retain, nonatomic) NSMutableArray *instrumentOptionArray; // @dynamic instrumentOptionArray;
@property(readonly, nonatomic) unsigned long long instrumentOptionArray_Count; // @dynamic instrumentOptionArray_Count;
@property(nonatomic) int preselectAdditionalOptionIndex; // @dynamic preselectAdditionalOptionIndex;
@property(nonatomic) int preselectInstrumentOptionIndex; // @dynamic preselectInstrumentOptionIndex;
@property(nonatomic) long long preselectedOptionReference; // @dynamic preselectedOptionReference;
@property(nonatomic) _Bool shouldHideSelector; // @dynamic shouldHideSelector;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(nonatomic) long long unselectedUiReference; // @dynamic unselectedUiReference;

@end

