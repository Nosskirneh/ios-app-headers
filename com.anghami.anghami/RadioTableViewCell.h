//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomUITableViewCell.h"

@class Radio, UIImageView;

@interface RadioTableViewCell : CustomUITableViewCell
{
    UIImageView *_radioIconImageView;
    Radio *_radio;
}

@property(retain, nonatomic) Radio *radio; // @synthesize radio=_radio;
@property(retain, nonatomic) UIImageView *radioIconImageView; // @synthesize radioIconImageView=_radioIconImageView;
- (void).cxx_destruct;
- (void)refreshPlayingIcon;
- (_Bool)isCurrentlyPlaying;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

