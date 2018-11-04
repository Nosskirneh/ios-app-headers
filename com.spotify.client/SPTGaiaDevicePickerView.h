//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableView.h"

@class NSString, SPTGaiaDevicePickerMaskView, SPTTableView;

@interface SPTGaiaDevicePickerView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTTableView *_tableView;
    UIView *_accessoryView;
    UIView *_contentView;
    UIView *_accessoryContainerView;
    SPTGaiaDevicePickerMaskView *_maskView;
}

@property(retain, nonatomic) SPTGaiaDevicePickerMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setAccessoryView:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)frameForAccessoryContainerView;
- (struct CGRect)frameForContent;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

