//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView, WMPProgressAnimator, WMPSortAndRangeParameters;
@protocol WMPModuleDelegate;

@protocol WMPModule <NSObject>
@property(retain, nonatomic) id itemId;

@optional
@property(nonatomic) _Bool contentLoadFinished;
@property(retain, nonatomic) UIView *noConnectionView;
@property(retain, nonatomic) WMPProgressAnimator *animator;
@property(retain, nonatomic) NSString *moduleTag;
@property(nonatomic) __weak id <WMPModuleDelegate> moduleDelegate;
@property(nonatomic) _Bool hasDetails;
@property(nonatomic) _Bool sortingEnabled;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool canCollapse;
@property(nonatomic) double heightConstraint;
@property(nonatomic) double horizontalUnits;
@property(nonatomic) double heightUnits;
@property(retain, nonatomic) NSString *header;
@property(nonatomic) _Bool isFullScreen;
@property(copy, nonatomic) NSDictionary *eventMetadata;
- (void)refreshData;
- (void)loadMoreWithSortAndRangeParameters:(WMPSortAndRangeParameters *)arg1;
- (void)fullScreen:(id)arg1;
@end
