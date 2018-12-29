//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdOverlayPresenter.h"

@class ImageSwappingView, UILabel;

@interface InterstitialPresenter : AdOverlayPresenter
{
    UILabel *_advertisementLabel;
    UILabel *_nowPlayingLabel;
    UILabel *_titleLabel;
    ImageSwappingView *_trackImageView;
}

@property(nonatomic) __weak ImageSwappingView *trackImageView; // @synthesize trackImageView=_trackImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *nowPlayingLabel; // @synthesize nowPlayingLabel=_nowPlayingLabel;
@property(nonatomic) __weak UILabel *advertisementLabel; // @synthesize advertisementLabel=_advertisementLabel;
- (void).cxx_destruct;
- (void)setTrackImageWithUrn:(id)arg1;
- (void)setTrackTitle:(id)arg1;
- (void)presentAdOverlay:(id)arg1 withImage:(id)arg2 onTrack:(id)arg3;

@end
