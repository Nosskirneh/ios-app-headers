//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBannerView.h"

@class NSArray, SPTVocalRemovalFeedbackBannerContentView;
@protocol SPTBannerViewDelegate;

@interface SPTVocalRemovalFeedbackBannerView : SPTBannerView
{
    SPTVocalRemovalFeedbackBannerContentView *_contentView;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTVocalRemovalFeedbackBannerContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)closeButtonPressed;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupContentView:(id)arg1;
- (void)removeUnusedSubviews;
- (id)initWithStyle:(long long)arg1 contentView:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <SPTBannerViewDelegate> delegate; // @dynamic delegate;

@end

