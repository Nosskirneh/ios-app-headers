//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

@class NSArray, YTFormattedStringLabel, YTIMusicNotifierShelfRenderer;

@interface YTMLightweightMusicNotifierShelfCell : YTMLightweightCell
{
    YTIMusicNotifierShelfRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    NSArray *_buttons;
    _Bool _hasSentImpressionEndpoints;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)sendImpressionEndpoints;
- (void)removeButtonTargets;
- (void)didTapButton:(id)arg1;
- (id)entry;
- (void)setRenderer:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

