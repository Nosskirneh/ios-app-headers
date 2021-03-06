//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SynchronizeSwitchButtonView, UIButton, _TtC6Deezer13RefreshButton;
@protocol DZRContentPageActionBarDelegate;

@interface DZRContentPageActionBar : UIView
{
    _Bool _synchronizeButtonVisible;
    _Bool _synchronizeButtonActivated;
    _Bool _filterButtonVisible;
    _Bool _sortButtonVisible;
    _Bool _refreshButtonVisible;
    _Bool _refreshButtonEnabled;
    _Bool _forceSwitchOff;
    id <DZRContentPageActionBarDelegate> _delegate;
    _TtC6Deezer13RefreshButton *_refreshButton;
    SynchronizeSwitchButtonView *_syncSwitchButton;
    UIButton *_filterButton;
    UIButton *_sortButton;
    UIView *_separatorView;
    NSLayoutConstraint *_filterButtonRightConstraint;
    NSLayoutConstraint *_sortButtonWidthConstraint;
    NSLayoutConstraint *_refreshButtonWidthConstraint;
    long long _layoutLinesCount;
}

@property(nonatomic) long long layoutLinesCount; // @synthesize layoutLinesCount=_layoutLinesCount;
@property(nonatomic) __weak NSLayoutConstraint *refreshButtonWidthConstraint; // @synthesize refreshButtonWidthConstraint=_refreshButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *sortButtonWidthConstraint; // @synthesize sortButtonWidthConstraint=_sortButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *filterButtonRightConstraint; // @synthesize filterButtonRightConstraint=_filterButtonRightConstraint;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) SynchronizeSwitchButtonView *syncSwitchButton; // @synthesize syncSwitchButton=_syncSwitchButton;
@property(nonatomic) _Bool forceSwitchOff; // @synthesize forceSwitchOff=_forceSwitchOff;
@property(nonatomic, getter=isRefreshButtonEnabled) _Bool refreshButtonEnabled; // @synthesize refreshButtonEnabled=_refreshButtonEnabled;
@property(nonatomic, getter=isRefreshButtonVisible) _Bool refreshButtonVisible; // @synthesize refreshButtonVisible=_refreshButtonVisible;
@property(retain, nonatomic) _TtC6Deezer13RefreshButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(nonatomic, getter=isSortButtonVisible) _Bool sortButtonVisible; // @synthesize sortButtonVisible=_sortButtonVisible;
@property(nonatomic, getter=isFilterButtonVisible) _Bool filterButtonVisible; // @synthesize filterButtonVisible=_filterButtonVisible;
@property(nonatomic, getter=isSynchronizeButtonActivated) _Bool synchronizeButtonActivated; // @synthesize synchronizeButtonActivated=_synchronizeButtonActivated;
@property(nonatomic, getter=isSynchronizeButtonVisible) _Bool synchronizeButtonVisible; // @synthesize synchronizeButtonVisible=_synchronizeButtonVisible;
@property(nonatomic) __weak id <DZRContentPageActionBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic, getter=isSynchronizeButtonOn) _Bool synchronizeButtonOn;
- (void)setSynchronizeButtonOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)onRefreshButtonTouch:(id)arg1;
- (void)onSortButtonTouch:(id)arg1;
- (void)onFilterButtonTouch:(id)arg1;
- (void)onSynchronizeButtonValueChange:(id)arg1;
- (void)updateTintColorOfSwitch:(id)arg1;
- (double)layoutLineHeight;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;

@end

