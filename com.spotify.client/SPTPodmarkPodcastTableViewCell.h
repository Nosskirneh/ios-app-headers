//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GLUEImageView, SPTLayoutConstraintBuilder, SPTTheme, UILabel;

@interface SPTPodmarkPodcastTableViewCell : UITableViewCell
{
    id <GLUEImageLoader> _imageLoader;
    UILabel *_titleLabel;
    UILabel *_podmarkCountLabel;
    GLUEImageView *_podcastImageView;
    SPTLayoutConstraintBuilder *_layout;
    SPTTheme *_catTheme;
}

@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) GLUEImageView *podcastImageView; // @synthesize podcastImageView=_podcastImageView;
@property(retain, nonatomic) UILabel *podmarkCountLabel; // @synthesize podmarkCountLabel=_podmarkCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)configureWithPodcastTitle:(id)arg1 podmarksCount:(unsigned long long)arg2 podcastImageURL:(id)arg3;
- (void)setupLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
