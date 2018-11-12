//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class GLUEButton, NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionShuffleButtonContainer : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    GLUEButton *_shuffleButton;
    UIView *_backgroundViewSeparatorTop;
    UIView *_backgroundViewSeparatorBottom;
    double _separatorDefaultHeight;
    double _displayScale;
}

@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) double separatorDefaultHeight; // @synthesize separatorDefaultHeight=_separatorDefaultHeight;
@property(retain, nonatomic) UIView *backgroundViewSeparatorBottom; // @synthesize backgroundViewSeparatorBottom=_backgroundViewSeparatorBottom;
@property(retain, nonatomic) UIView *backgroundViewSeparatorTop; // @synthesize backgroundViewSeparatorTop=_backgroundViewSeparatorTop;
@property(readonly, nonatomic) GLUEButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithShuffleButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

