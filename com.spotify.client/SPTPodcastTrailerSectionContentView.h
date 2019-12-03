//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulView.h"

@class GLUEImageView, NSURL, SPTPodcastTrailerAccessoryLabel, SPTTheme, UILabel, UIStackView;
@protocol GLUEImageLoader;

@interface SPTPodcastTrailerSectionContentView : GLUEStatefulView
{
    id <GLUEImageLoader> _imageLoader;
    SPTTheme *_catTheme;
    NSURL *_imageURL;
    GLUEImageView *_imageView;
    UILabel *_titleLabel;
    SPTPodcastTrailerAccessoryLabel *_trailerLabel;
    UILabel *_durationLabel;
    UIStackView *_metadataContainerStackView;
    UIStackView *_metadataSubContainerStackView;
}

@property(retain, nonatomic) UIStackView *metadataSubContainerStackView; // @synthesize metadataSubContainerStackView=_metadataSubContainerStackView;
@property(retain, nonatomic) UIStackView *metadataContainerStackView; // @synthesize metadataContainerStackView=_metadataContainerStackView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) SPTPodcastTrailerAccessoryLabel *trailerLabel; // @synthesize trailerLabel=_trailerLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) SPTTheme *catTheme; // @synthesize catTheme=_catTheme;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (id)providePlaceholderImage;
- (void)updateWithViewModel:(id)arg1;
- (void)configureLayout;
- (void)configureAppearance;
- (id)initWithTheme:(id)arg1;

@end

