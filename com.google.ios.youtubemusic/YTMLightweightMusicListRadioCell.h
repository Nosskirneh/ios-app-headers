//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, QTMButton, UILongPressGestureRecognizer, YTFormattedStringLabel, YTIMusicListRadioRenderer, YTImageView, YTMBevelView;

@interface YTMLightweightMusicListRadioCell : YTMLightweightCell <YTReusableView, YTThumbnailMapping>
{
    YTIMusicListRadioRenderer *_renderer;
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    QTMButton *_actionButton;
    YTMBevelView *_separatorView;
    _Bool _firstItem;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)didTapActionButton;
- (void)applyLayoutAttributes:(id)arg1;
- (id)thumbnailMappings;
- (id)navigationEndpoint;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

