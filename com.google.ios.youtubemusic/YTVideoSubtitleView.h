//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"

@class NSString, UIImageView, YTBadge, YTLabel;
@protocol GA11YMixinImpl;

@interface YTVideoSubtitleView : UIView <GA11YMixinEmbedder, YTPageStyling, YTReusableView>
{
    YTLabel *_subtitleLabel1;
    YTLabel *_subtitleLabel2;
    YTLabel *_subtitleLabel3;
    YTLabel *_subtitleLabel4;
    YTLabel *_separatorLabel2;
    YTLabel *_separatorLabel3;
    YTLabel *_separatorLabel4;
    YTBadge *_adBadge;
    UIImageView *_downloadedIndicator;
    long long _pageStyle;
    id <GA11YMixinImpl> _accessibilityMixin;
    long long _numberOfLines;
    double _preferredMaxLayoutWidth;
}

@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (void).cxx_destruct;
- (void)resetLabelVisibility;
- (_Bool)isNonEmpty:(id)arg1;
- (struct CGSize)sizeForSeparator:(id)arg1;
- (id)createSeparator;
- (id)separators;
- (id)subtitles;
- (double)lineHeight;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSubtitle1:(id)arg1 subtitle2:(id)arg2 subtitle3:(id)arg3 subtitle4:(id)arg4;
@property(nonatomic) _Bool shouldShowDownloadedIndicator;
@property(nonatomic) _Bool shouldShowAdBadge;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

