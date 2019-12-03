//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, SPTActionButton, SPTAdNowPlayingBookmarkButton, SPTTheme;

@interface SPTNowPlayingAudioAdInfoUnitView : UIView
{
    GLUEButton *_actionButton;
    SPTActionButton *_optOutButton;
    SPTAdNowPlayingBookmarkButton *_bookmarkButton;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdNowPlayingBookmarkButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
@property(readonly, nonatomic) SPTActionButton *optOutButton; // @synthesize optOutButton=_optOutButton;
@property(readonly, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)updateActionButtonWithTitle:(id)arg1 isOptOut:(_Bool)arg2;
- (void)setupConstraints;
- (id)createBookmarkButton;
- (id)createOptOutButton;
- (id)createActionButton;
- (id)initWithTheme:(id)arg1;

@end

