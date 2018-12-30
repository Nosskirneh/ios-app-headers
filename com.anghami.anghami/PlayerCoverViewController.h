//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DERPCachingPagingViewPage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ANGAsyncImageView, ANGSong, ContentButton, NSString, PlayerViewController, UIImageView, UIStackView, UITapGestureRecognizer, UIView;

@interface PlayerCoverViewController : UIViewController <UIGestureRecognizerDelegate, DERPCachingPagingViewPage>
{
    _Bool _justDismissedCover;
    PlayerViewController *_playerController;
    ANGSong *_mySong;
    long long _index;
    ANGAsyncImageView *_coverArtImageView;
    UIView *_lyricsShadowView;
    UITapGestureRecognizer *_singleTapRecognizer;
    UIImageView *_playSongImage;
    UIView *_coverArtShadowView;
    UIView *_rbtShadowView;
    ContentButton *_lyricsButtonContent;
    UIView *_videoShadowView;
    ContentButton *_videoButtonContent;
    ContentButton *_rbtButtonContent;
    UIStackView *_buttonsStackView;
}

+ (void)replaceTextWithLocalizedTextInSubviewsForView:(id)arg1;
+ (id)coverControllerWithSong:(id)arg1;
@property(nonatomic) __weak UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(nonatomic) __weak ContentButton *rbtButtonContent; // @synthesize rbtButtonContent=_rbtButtonContent;
@property(nonatomic) __weak ContentButton *videoButtonContent; // @synthesize videoButtonContent=_videoButtonContent;
@property(nonatomic) __weak UIView *videoShadowView; // @synthesize videoShadowView=_videoShadowView;
@property(nonatomic) __weak ContentButton *lyricsButtonContent; // @synthesize lyricsButtonContent=_lyricsButtonContent;
@property(nonatomic) __weak UIView *rbtShadowView; // @synthesize rbtShadowView=_rbtShadowView;
@property(nonatomic) __weak UIView *coverArtShadowView; // @synthesize coverArtShadowView=_coverArtShadowView;
@property(nonatomic) __weak UIImageView *playSongImage; // @synthesize playSongImage=_playSongImage;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // @synthesize singleTapRecognizer=_singleTapRecognizer;
@property(nonatomic) _Bool justDismissedCover; // @synthesize justDismissedCover=_justDismissedCover;
@property(retain, nonatomic) UIView *lyricsShadowView; // @synthesize lyricsShadowView=_lyricsShadowView;
@property(retain, nonatomic) ANGAsyncImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) ANGSong *mySong; // @synthesize mySong=_mySong;
@property(nonatomic) __weak PlayerViewController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)openContextSheet:(id)arg1;
- (void)showAndHideOverlayType:(int)arg1;
- (void)songAddedToPlaylist:(id)arg1;
- (void)singleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)removeGestureRecognizers;
- (void)addGestureRecognizers;
- (void)reloadImage;
- (void)buildExclusiveVideoView;
- (void)rbtButtonTapped:(id)arg1;
- (void)videoButtonTapped:(id)arg1;
- (void)lyricsButtonTapped:(id)arg1;
- (void)adjustButtonsFrame:(id)arg1;
- (void)pageWasDiscarded;
- (void)configureView;
- (void)viewDidLoad;
- (void)transformChanged;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithSong:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
