//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4WiMP21TitleModuleOptionsBar.h"

@class MarqueeLabel, UIButton, UILabel, UISwitch;

@interface _TtC4WiMP26TitleModuleAlbumOptionsBar : _TtC4WiMP21TitleModuleOptionsBar
{
    // Error parsing type: , name: albumNameLabel
    // Error parsing type: , name: artistNameLabel
    // Error parsing type: , name: offlineLabel
    // Error parsing type: , name: favoriteButton
    // Error parsing type: , name: contextMenuButton
    // Error parsing type: , name: offlineSwitch
    // Error parsing type: , name: dataProvider
    // Error parsing type: , name: album
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUI;
- (void)viewDidLoad;
@property(nonatomic) __weak UISwitch *offlineSwitch; // @synthesize offlineSwitch;
@property(nonatomic) __weak UIButton *contextMenuButton; // @synthesize contextMenuButton;
@property(nonatomic) __weak UIButton *favoriteButton; // @synthesize favoriteButton;
@property(nonatomic) __weak UILabel *offlineLabel; // @synthesize offlineLabel;
@property(nonatomic) __weak UILabel *artistNameLabel; // @synthesize artistNameLabel;
@property(nonatomic) __weak MarqueeLabel *albumNameLabel; // @synthesize albumNameLabel;

@end
