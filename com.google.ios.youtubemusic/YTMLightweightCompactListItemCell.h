//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

#import "YTMOfflineVideoStatusControllerObserver-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, QTMButton, UIButton, UILabel, YTFormattedStringLabel, YTICompactListItemRenderer, YTImageView, YTMMusicPivotBadgeView, YTMOfflineVideoStatusController, YTMTransferButton;

@interface YTMLightweightCompactListItemCell : YTMLightweightCell <YTMOfflineVideoStatusControllerObserver, YTThumbnailMapping>
{
    YTICompactListItemRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    _Bool _editing;
    UIButton *_reorderButton;
    UILabel *_indexLabel;
    YTMMusicPivotBadgeView *_musicPivotBadgeView;
    YTMOfflineVideoStatusController *_offlineVideoStatusController;
    QTMButton *_actionButton;
    YTMTransferButton *_transferButton;
    YTImageView *_simpleThumbnailView;
    YTImageView *_artistThumbnailView;
    YTImageView *_croppedThumbnailView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTImageView *croppedThumbnailView; // @synthesize croppedThumbnailView=_croppedThumbnailView;
@property(retain, nonatomic) YTImageView *artistThumbnailView; // @synthesize artistThumbnailView=_artistThumbnailView;
@property(retain, nonatomic) YTImageView *simpleThumbnailView; // @synthesize simpleThumbnailView=_simpleThumbnailView;
@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
- (void).cxx_destruct;
- (void)didTapActionButton;
- (id)layoutThumbnailView;
- (void)updateWithOfflineVideoMetadata:(id)arg1;
- (void)offlineVideoStatusController:(id)arg1 didDeleteOfflineVideoWithVideoID:(id)arg2;
- (void)offlineVideoStatusController:(id)arg1 didUpdateOfflineVideoMetadata:(id)arg2;
- (id)thumbnailMappings;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)swipeButtonsView:(id)arg1 imageForIcon:(id)arg2;
- (id)navigationEndpoint;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (_Bool)canReorderFromPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

