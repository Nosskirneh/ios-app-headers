//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightCell.h"

@class YTFormattedStringLabel, YTISearchNoResultsRenderer;

@interface YTMLightweightSearchNoResultsCell : YTLightweightCell
{
    YTISearchNoResultsRenderer *_renderer;
    YTFormattedStringLabel *_messageLabel;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

