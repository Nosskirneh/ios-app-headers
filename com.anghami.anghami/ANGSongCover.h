//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSquareCover.h"

@class ANGSong, CAGradientLayer, NSArray, UIButton, UIImageView;

@interface ANGSongCover : ANGSquareCover
{
    CAGradientLayer *_gradient;
    ANGSong *_mySong;
    NSArray *_listOfSongs;
    UIButton *_videoButton;
    CDUnknownBlockType _videoButtonPressed;
    UIImageView *_playingImageView;
}

@property(retain, nonatomic) UIImageView *playingImageView; // @synthesize playingImageView=_playingImageView;
@property(copy, nonatomic) CDUnknownBlockType videoButtonPressed; // @synthesize videoButtonPressed=_videoButtonPressed;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) NSArray *listOfSongs; // @synthesize listOfSongs=_listOfSongs;
@property(retain, nonatomic) ANGSong *mySong; // @synthesize mySong=_mySong;
- (void).cxx_destruct;
- (_Bool)isDownloaded;
- (_Bool)isLiked;
- (void)videoPressed:(id)arg1;
- (void)setPlaying:(_Bool)arg1;
- (void)actionButtonAction:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)showVideoButton:(_Bool)arg1;
- (void)refreshPlayingIcon;
- (void)registerNotifications;
- (void)layoutSubviews;
- (void)setupSubviewConstraints;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

