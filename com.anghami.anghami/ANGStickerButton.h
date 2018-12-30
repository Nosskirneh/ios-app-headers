//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ANGSong, UIActivityIndicatorView;

@interface ANGStickerButton : UIButton
{
    _Bool _didLayoutSubviews;
    ANGSong *_song;
    UIActivityIndicatorView *_activityIndicator;
}

@property _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) ANGSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (id)stickerButtonImage;
- (void)setButtonImage;
- (void)setup;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end
