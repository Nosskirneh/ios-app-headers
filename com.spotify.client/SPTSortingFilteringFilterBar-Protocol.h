//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStyleable-Protocol.h"

@class UIControl, UITextField;
@protocol SPTSortingFilteringFilterBarStyle;

@protocol SPTSortingFilteringFilterBar <GLUEStyleable>
@property(nonatomic) _Bool backgroundViewHidden;
@property(nonatomic) _Bool contextMenuButtonDisabled;
@property(readonly, nonatomic) double filterBarHeight;
@property(readonly, nonatomic) UIControl *contextMenuButton;
@property(readonly, nonatomic) UITextField *searchField;
- (void)glue_applyStyle:(id <SPTSortingFilteringFilterBarStyle>)arg1;
@end

