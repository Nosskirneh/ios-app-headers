//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTCellActionProtocol-Protocol.h"
#import "YTCellLinkProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class GADGestureRecognizer, NSString, UIButton, UIImageView, UILongPressGestureRecognizer, YTBadge, YTFormattedStringLabel, YTIPromotedTextBannerRenderer, YTImageView;
@protocol YTCellLinkDelegate, YTCommonButton, YTResponder;

@interface YTPromotedTextBannerCell : YTCollectionViewCell <UIGestureRecognizerDelegate, YTCellActionProtocol, YTCellLinkProtocol, YTCollectionViewCellProtocol, YTResponder, YTThumbnailMapping>
{
    YTIPromotedTextBannerRenderer *_renderer;
    GADGestureRecognizer *_adGestureRecognizer;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTFormattedStringLabel *_bylineLabel;
    UIButton<YTCommonButton> *_actionButton;
    UIButton<YTCommonButton> *_icon;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    YTBadge *_badge;
    int _layoutType;
    struct CGRect _clickableArea;
    YTImageView *_thumbnailView;
    UIImageView *_horizontalSeparatorView;
    id <YTResponder> _parentResponder;
    id <YTCellLinkDelegate> _cellLinkDelegate;
}

+ (id)labelWithTypeKind:(long long)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)addIcon:(id)arg1 size:(long long)arg2;
- (void)removeIcon;
- (id)supportedLayouts;
- (id)thumbnailMappings;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (void)sizeSubviewsWithSize:(struct CGSize)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeSpamTouchTargets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
