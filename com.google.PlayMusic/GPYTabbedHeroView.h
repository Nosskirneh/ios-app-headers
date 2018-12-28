//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOOTransitioningView-Protocol.h"
#import "GOOTransitioningViewCopying-Protocol.h"

@class GPYStyle, GPYTabStyle, NSString;
@protocol NSCopying;

@interface GPYTabbedHeroView : UIView <GOOTransitioningView, GOOTransitioningViewCopying>
{
    long long _headerType;
    GPYStyle *_style;
    UIView *_currentHeroView;
    UIView *_overlayView;
    GPYTabStyle *_tabStyle;
}

@property(retain, nonatomic) GPYTabStyle *tabStyle; // @synthesize tabStyle=_tabStyle;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
- (void).cxx_destruct;
- (id)generatedImageView;
- (void)unloadOverlayViewIfNeeded;
- (void)loadOverlayViewIfNeeded;
- (void)configureSubviewsForHeaderType:(long long)arg1;
- (void)updateColorsForView:(id)arg1 withTabStyle:(id)arg2;
@property(readonly, copy, nonatomic) id <NSCopying> transitioningViewKey;
- (id)transitioningCopy;
- (void)transitionToImage:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3;
- (void)transitionToImage:(id)arg1 originPoint:(struct CGPoint)arg2 duration:(double)arg3 options:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;
- (id)initWithStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

