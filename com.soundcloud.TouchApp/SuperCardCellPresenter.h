//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ParallaxCellPresenter-Protocol.h"

@class NSNumberFormatter, NSString, PlaybackService, SuperPlaylistCellPresenter, SuperTrackCellPresenter, TrackAuthorizationHelper, _TtC10SoundCloud40SuperCardCellMetaAttributedStringFactory;
@protocol CardCellDelegate;

@interface SuperCardCellPresenter : NSObject <ParallaxCellPresenter>
{
    _Bool _shouldRenderCellAsCard;
    _Bool _shouldRenderCellAsSpotlight;
    NSNumberFormatter *_numberFormatter;
    PlaybackService *_playbackService;
    SuperTrackCellPresenter *_trackCellPresenter;
    SuperPlaylistCellPresenter *_playlistCellPresenter;
    TrackAuthorizationHelper *_trackAuthorization;
    _TtC10SoundCloud40SuperCardCellMetaAttributedStringFactory *_attributedStringFactory;
    id <CardCellDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <CardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _TtC10SoundCloud40SuperCardCellMetaAttributedStringFactory *attributedStringFactory; // @synthesize attributedStringFactory=_attributedStringFactory;
@property(readonly, nonatomic) TrackAuthorizationHelper *trackAuthorization; // @synthesize trackAuthorization=_trackAuthorization;
@property(readonly, nonatomic) SuperPlaylistCellPresenter *playlistCellPresenter; // @synthesize playlistCellPresenter=_playlistCellPresenter;
@property(readonly, nonatomic) SuperTrackCellPresenter *trackCellPresenter; // @synthesize trackCellPresenter=_trackCellPresenter;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) _Bool shouldRenderCellAsSpotlight; // @synthesize shouldRenderCellAsSpotlight=_shouldRenderCellAsSpotlight;
@property(nonatomic) _Bool shouldRenderCellAsCard; // @synthesize shouldRenderCellAsCard=_shouldRenderCellAsCard;
- (void).cxx_destruct;
- (_Bool)isCompactPromoted:(id)arg1;
- (void)setAccessibilityInCell:(id)arg1 forCardCellPresentable:(id)arg2;
- (id)promotedItemDescriptionForPresentable:(id)arg1;
- (id)itemDescriptionForPresentable:(id)arg1;
- (id)privateAttributedString;
- (void)presentNowPlayingInCell:(id)arg1;
- (void)presentTopMetaInCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentTopMetaInRepostedCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentTopMetaInPromotedCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentTimestampLabelInCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)centerButtonTextAndImage:(id)arg1;
- (void)presentRepostButtonInCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentLikeButtonInCell:(id)arg1 cardCellPresentable:(id)arg2;
- (void)presentCell:(id)arg1 cardCellPresentable:(id)arg2;
- (_Bool)cardCellPresentableIsPlaying:(id)arg1;
- (void)updateParallaxInCell:(id)arg1 collectionView:(id)arg2;
- (Class)cellClassForEntity:(id)arg1;
- (void)registerCellsInCollectionView:(id)arg1;
- (id)cellReuseIdentifierForEntity:(id)arg1;
- (void)presentCell:(id)arg1 withEntity:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithNumberFormatter:(id)arg1 playbackService:(id)arg2 trackCellPresenter:(id)arg3 playlistCellPresenter:(id)arg4 trackAuthorization:(id)arg5 attributedStringFactory:(id)arg6 delegate:(id)arg7;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

