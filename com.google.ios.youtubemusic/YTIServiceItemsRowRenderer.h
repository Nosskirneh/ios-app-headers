//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAccessibilitySupportedDatas, YTIFormattedString, YTIIcon;

@interface YTIServiceItemsRowRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIIcon *basicCheckBox; // @dynamic basicCheckBox;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *basicCheckBoxAcessibility; // @dynamic basicCheckBoxAcessibility;
@property(nonatomic) _Bool hasBasicCheckBox; // @dynamic hasBasicCheckBox;
@property(nonatomic) _Bool hasBasicCheckBoxAcessibility; // @dynamic hasBasicCheckBoxAcessibility;
@property(nonatomic) _Bool hasPremiumCheckBox; // @dynamic hasPremiumCheckBox;
@property(nonatomic) _Bool hasPremiumCheckBoxAcessibility; // @dynamic hasPremiumCheckBoxAcessibility;
@property(nonatomic) _Bool hasRemoveGridLineSeparator; // @dynamic hasRemoveGridLineSeparator;
@property(nonatomic) _Bool hasServiceDescText; // @dynamic hasServiceDescText;
@property(retain, nonatomic) YTIIcon *premiumCheckBox; // @dynamic premiumCheckBox;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *premiumCheckBoxAcessibility; // @dynamic premiumCheckBoxAcessibility;
@property(nonatomic) _Bool removeGridLineSeparator; // @dynamic removeGridLineSeparator;
@property(retain, nonatomic) YTIFormattedString *serviceDescText; // @dynamic serviceDescText;

@end

