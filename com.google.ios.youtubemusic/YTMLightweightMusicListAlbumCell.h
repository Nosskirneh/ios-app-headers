//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightSwipeableCell.h"

#import "YTMOfflinePlaylistStatusControllerObserver-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, QTMButton, YTFormattedStringLabel, YTIMusicListAlbumRenderer, YTImageView, YTMOfflinePlaylistStatusController, YTMTransferButton;

@interface YTMLightweightMusicListAlbumCell : YTLightweightSwipeableCell <YTMOfflinePlaylistStatusControllerObserver, YTThumbnailMapping>
{
    YTIMusicListAlbumRenderer *_renderer;
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_bylineLabel;
    QTMButton *_actionButton;
    YTMOfflinePlaylistStatusController *_offlinePlaylistStatusController;
    YTMTransferButton *_transferButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
- (void).cxx_destruct;
- (void)didPressActionButton:(id)arg1;
- (void)updateWithOfflinePlaylistMetadata:(id)arg1;
- (void)offlinePlaylistStatusController:(id)arg1 didDeleteOfflinePlaylistWithPlaylistID:(id)arg2;
- (void)offlinePlaylistStatusController:(id)arg1 didUpdateOfflinePlaylistMetadata:(id)arg2;
- (id)thumbnailMappings;
- (void)prepareForReuse;
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

