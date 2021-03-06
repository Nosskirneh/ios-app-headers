//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMCollectionViewCell.h"

#import "YTCellActionProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, QTMButton, UILongPressGestureRecognizer, YTFormattedStringLabel, YTIMusicListRadioRenderer, YTImageView, YTMBevelView;
@protocol YTResponder;

@interface YTMMusicListRadioCell : YTMCollectionViewCell <YTCellActionProtocol, YTCollectionViewCellProtocol, YTReusableView, YTThumbnailMapping>
{
    YTIMusicListRadioRenderer *_radio;
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    QTMButton *_actionButton;
    YTMBevelView *_separatorView;
    _Bool _firstItem;
    id <YTResponder> _parentResponder;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)thumbnailMappings;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

