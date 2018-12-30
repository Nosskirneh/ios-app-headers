//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ANGAsyncImageViewDelegate-Protocol.h"

@class ANGAsyncImageView, ANGSong, EX2GlowButton, MCProgressBarView, MarqueeLabel, MiniPlayerViewController, NSLayoutConstraint, NSString, NSTimer, OBSlider, UILabel;
@protocol AnghamiPlayerDelegate;

@interface MiniPlayerItem : UIView <ANGAsyncImageViewDelegate>
{
    _Bool _pauseSlider;
    float _oldPosition;
    MiniPlayerViewController *_controller;
    id <AnghamiPlayerDelegate> _playerDelegate;
    ANGSong *_mySong;
    ANGAsyncImageView *_coverArt;
    MarqueeLabel *_songLabel;
    UILabel *_artistLabel;
    NSTimer *_progressTimer;
    UIView *_controlsContainer;
    unsigned long long _byteOffset;
    OBSlider *_progressSlider;
    MCProgressBarView *_iPadProgressView;
    UILabel *_elapsedTimeLabel;
    UILabel *_remainingTimeLabel;
    EX2GlowButton *_likeButton;
    NSLayoutConstraint *_labelsTrailing;
}

+ (id)subtitleLabelText:(id)arg1 image:(id)arg2;
+ (id)itemWithSong:(id)arg1 controller:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *labelsTrailing; // @synthesize labelsTrailing=_labelsTrailing;
@property(retain, nonatomic) EX2GlowButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) MCProgressBarView *iPadProgressView; // @synthesize iPadProgressView=_iPadProgressView;
@property(retain, nonatomic) OBSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(nonatomic) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property(retain, nonatomic) UIView *controlsContainer; // @synthesize controlsContainer=_controlsContainer;
@property(nonatomic) float oldPosition; // @synthesize oldPosition=_oldPosition;
@property(nonatomic) _Bool pauseSlider; // @synthesize pauseSlider=_pauseSlider;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(retain, nonatomic) MarqueeLabel *songLabel; // @synthesize songLabel=_songLabel;
@property(retain, nonatomic) ANGAsyncImageView *coverArt; // @synthesize coverArt=_coverArt;
@property(retain, nonatomic) ANGSong *mySong; // @synthesize mySong=_mySong;
@property(retain, nonatomic) id <AnghamiPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak MiniPlayerViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)updateSlider;
- (void)updateProgress:(double)arg1;
- (void)songDownloadProgressChanged:(id)arg1;
- (void)songProgressChanged:(id)arg1;
- (void)movedSlider:(id)arg1;
- (void)touchedSlider:(id)arg1;
- (void)openActionButton:(id)arg1;
- (id)CGColorsForUIColors:(id)arg1;
- (void)asyncImageSet:(id)arg1;
- (id)titleLabelString:(id)arg1;
- (void)updateTextLabels;
- (void)SODUpdated;
- (void)showPlayeriPad:(id)arg1;
- (void)dealloc;
- (void)wasDiscarded;
- (id)playStatusChangedNotifications;
- (void)configureWithSong:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
