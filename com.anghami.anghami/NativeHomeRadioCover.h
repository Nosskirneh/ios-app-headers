//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NativeHomeArtistCover.h"

@class Radio;

@interface NativeHomeRadioCover : NativeHomeArtistCover
{
    Radio *_radio;
}

+ (id)placeholderImage;
@property(retain, nonatomic) Radio *radio; // @synthesize radio=_radio;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addRadioIcon;
- (void)layoutSubtitleLabel;
- (_Bool)isCurrentlyPlaying;
- (void)refreshPlayingIcon;
- (void)setupSubviewConstraints;
- (void)addSubviews;

@end

