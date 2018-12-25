//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTDropdownButtonOptionsViewModel-Protocol.h"

@class NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIIcon, YTIReloadContinuationData, YTIRenderer, YTISortFilterSubMenuSupportedContinuations;

@interface YTISortFilterSubMenuItem : GPBMessage <YTDropdownButtonOptionsViewModel>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) YTIReloadContinuationData *dropdownOptionReloadContinuation;
@property(readonly, nonatomic) YTICommand *dropdownOptionServiceEndpoint;
@property(readonly, nonatomic) YTICommand *dropdownOptionNavigationEndpoint;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) NSString *dropdownOptionTitle;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIRenderer *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTISortFilterSubMenuSupportedContinuations *continuation; // @dynamic continuation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disabled; // @dynamic disabled;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasDisabled; // @dynamic hasDisabled;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) int int32Value;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

