//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIIcon, YTIRenderer;

@interface YTILocationEditRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *addButton; // @dynamic addButton;
@property(retain, nonatomic) YTIRenderer *deleteButton; // @dynamic deleteButton;
@property(nonatomic) _Bool hasAddButton; // @dynamic hasAddButton;
@property(nonatomic) _Bool hasDeleteButton; // @dynamic hasDeleteButton;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLearnMoreButton; // @dynamic hasLearnMoreButton;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasPlaceholder; // @dynamic hasPlaceholder;
@property(nonatomic) _Bool hasSearchNotice; // @dynamic hasSearchNotice;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) YTIRenderer *learnMoreButton; // @dynamic learnMoreButton;
@property(retain, nonatomic) YTIRenderer *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *placeSuggestionsArray; // @dynamic placeSuggestionsArray;
@property(readonly, nonatomic) unsigned long long placeSuggestionsArray_Count; // @dynamic placeSuggestionsArray_Count;
@property(retain, nonatomic) YTIFormattedString *placeholder; // @dynamic placeholder;
@property(retain, nonatomic) YTIFormattedString *searchNotice; // @dynamic searchNotice;

@end

