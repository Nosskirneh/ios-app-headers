//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SongUITableViewCell.h"

@class UIImageView;

@interface VideoUITableViewCell : SongUITableViewCell
{
    _Bool _showVideoThumbnail;
    UIImageView *_videoIcon;
}

+ (double)heightForRow;
+ (double)videoAspectRatio;
@property(nonatomic) _Bool showVideoThumbnail; // @synthesize showVideoThumbnail=_showVideoThumbnail;
@property(retain, nonatomic) UIImageView *videoIcon; // @synthesize videoIcon=_videoIcon;
- (void).cxx_destruct;
- (_Bool)isDownloaded;
- (struct CGSize)exclusiveViewSize;
- (void)refreshPlayingIcon;
- (_Bool)isCurrentlyPlaying;
- (double)imageAspectRatio;
- (void)layoutSubviews;
- (_Bool)shouldShowVideoButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

