//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

#import "SPTPodcastFollowSectionTableViewCellCommonInterface-Protocol.h"

@class GLUEContextMenuAccessoryButton, NSArray, NSString, SPTPodcastFollowButton, SPTPodcastFollowSectionViewModel, UIButton;
@protocol GLUETheme;

@interface SPTPodcastFollowSectionTableViewCell : SPTPodcastSectionTableViewCell <SPTPodcastFollowSectionTableViewCellCommonInterface>
{
    id <GLUETheme> _glueTheme;
    NSArray *_layoutConstraints;
    SPTPodcastFollowButton *_followButton;
    UIButton *_playbackButton;
    GLUEContextMenuAccessoryButton *_contextMenuButton;
    SPTPodcastFollowSectionViewModel *_followSectionViewModel;
}

@property(retain, nonatomic) SPTPodcastFollowSectionViewModel *followSectionViewModel; // @synthesize followSectionViewModel=_followSectionViewModel;
@property(retain, nonatomic) GLUEContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) UIButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(retain, nonatomic) SPTPodcastFollowButton *followButton; // @synthesize followButton=_followButton;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
- (void).cxx_destruct;
- (void)updateFollowedButtonState:(_Bool)arg1;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)playbackButtonTapped:(id)arg1;
- (void)setupConstraints;
- (void)setupUI;
- (void)setPlaybackButtonIcon;
- (void)updatewithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

