//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP21TitleModuleOptionsBar.h"

@class MarqueeLabel, UIButton, UILabel, UISwitch, UIView;

@interface _TtC4WiMP29TitleModulePlaylistOptionsBar : _TtC4WiMP21TitleModuleOptionsBar
{
    // Error parsing type: , name: playlistNameLabel
    // Error parsing type: , name: createdByLabel
    // Error parsing type: , name: offlineLabel
    // Error parsing type: , name: offlineSwitch
    // Error parsing type: , name: favoriteButton
    // Error parsing type: , name: descriptionContainer
    // Error parsing type: , name: playlistUuid
    // Error parsing type: , name: playlistName
    // Error parsing type: , name: createdBy
    // Error parsing type: , name: screenName
}

+ (id)getInstanceWithPlaylistUuid:(id)arg1 playlistName:(id)arg2 playlistType:(id)arg3;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUI;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *descriptionContainer; // @synthesize descriptionContainer;
@property(nonatomic) __weak UIButton *favoriteButton; // @synthesize favoriteButton;
@property(nonatomic) __weak UISwitch *offlineSwitch; // @synthesize offlineSwitch;
@property(nonatomic) __weak UILabel *offlineLabel; // @synthesize offlineLabel;
@property(nonatomic) __weak UILabel *createdByLabel; // @synthesize createdByLabel;
@property(nonatomic) __weak MarqueeLabel *playlistNameLabel; // @synthesize playlistNameLabel;

@end

