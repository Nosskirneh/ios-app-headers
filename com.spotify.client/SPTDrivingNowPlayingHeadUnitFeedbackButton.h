//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

@class UIColor;

@interface SPTDrivingNowPlayingHeadUnitFeedbackButton : SPTNowPlayingButton
{
    long long _icon;
    unsigned long long _type;
    long long _selectedIcon;
    UIColor *_selectedColor;
    struct CGSize _iconSize;
}

@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) long long selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setIcon:(long long)arg1;
- (long long)icon;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)updateForSelected;
- (void)applyIcon;
- (void)setupButton;
- (id)initWithType:(unsigned long long)arg1;

@end

