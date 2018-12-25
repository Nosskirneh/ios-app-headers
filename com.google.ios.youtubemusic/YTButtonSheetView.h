//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class NSMapTable, NSString, YTFormattedStringLabel;

@interface YTButtonSheetView : UIView <YTPageStyling>
{
    YTFormattedStringLabel *_titleLabel;
    NSMapTable *_iconMap;
}

@property(retain, nonatomic) NSMapTable *iconMap; // @synthesize iconMap=_iconMap;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)addButton:(id)arg1 withIcon:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
