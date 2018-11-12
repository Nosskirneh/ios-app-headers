//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEImageView, GLUELabel, NSArray, NSString, SPTTheme, UIControl, UILabel, UIProgressView, UIView;
@protocol GLUEImageLoader;

@protocol SPTPodcastEpisodeView <NSObject>

@optional
+ (id)new;
@property(nonatomic) _Bool shouldTruncateDescription;
@property(retain, nonatomic) NSArray *secondaryActionViewsRight;
@property(retain, nonatomic) NSArray *secondaryActionViewsLeft;
@property(retain, nonatomic) UIView *mainActionView;
@property(nonatomic) double listeningProgress;
@property(readonly, nonatomic) UIProgressView *progressView;
@property(copy, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) GLUELabel *descriptionLabel;
@property(nonatomic) long long episodeOfflineSyncStatus;
@property(readonly, nonatomic) UILabel *statusLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader;
@property(readonly, nonatomic) GLUEImageView *imageView;
@property(nonatomic) _Bool editing;
@property(retain, nonatomic) UIControl *playControl;
- (id)init;
- (id)initWithTheme:(SPTTheme *)arg1;
@end

