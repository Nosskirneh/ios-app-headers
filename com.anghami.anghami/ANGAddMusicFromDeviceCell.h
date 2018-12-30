//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlaylistUITableViewCell.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface ANGAddMusicFromDeviceCell : PlaylistUITableViewCell
{
    UIButton *allowButton;
    UILabel *subtitleLabel;
    NSLayoutConstraint *allowButtonWidth;
    NSString *_allowMusicSource;
}

@property(retain, nonatomic) NSString *allowMusicSource; // @synthesize allowMusicSource=_allowMusicSource;
- (void).cxx_destruct;
- (void)addAllowMusicAccessButton;
- (void)addSubtitle;
- (void)sharedInit;
- (void)updateState;
- (void)allowMusicLibraryPressed:(id)arg1;

@end
