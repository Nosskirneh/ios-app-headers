//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomUITableViewWideNewCell.h"

@class ANGAlbum;

@interface AlbumWideNewUITableViewCell : CustomUITableViewWideNewCell
{
    ANGAlbum *_album;
}

+ (long long)numberOfLinesEngagement;
+ (id)placeholderImage;
+ (double)heightForImageWithWidth:(double)arg1;
@property(retain, nonatomic) ANGAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)playPressed:(id)arg1;
- (_Bool)isStarred;
- (void)presentContextSheet:(id)arg1;
- (void)prepareForReuse;
- (void)layoutEnagagementLabel;
- (double)imageAspectRatio;
- (_Bool)shouldShowPlayButton;
- (void)refreshPlayingIcon;
- (_Bool)isCurrentlyPlaying;

@end

