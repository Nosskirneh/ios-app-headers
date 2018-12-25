//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTICommand, YTIIcon, YTIReloadContinuationData;

@protocol YTDropdownButtonOptionsViewModel <NSObject>
@property(readonly, nonatomic) YTIReloadContinuationData *dropdownOptionReloadContinuation;
@property(readonly, nonatomic) YTICommand *dropdownOptionServiceEndpoint;
@property(readonly, nonatomic) YTICommand *dropdownOptionNavigationEndpoint;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) NSString *dropdownOptionTitle;

@optional
@property(nonatomic) int int32Value;
@property(readonly, nonatomic) YTIIcon *icon;
@property(readonly, nonatomic) _Bool hasIcon;
@end

