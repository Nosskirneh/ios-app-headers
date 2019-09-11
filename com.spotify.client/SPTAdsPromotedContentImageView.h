//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class SPTTheme;
@protocol GLUEImageLoader, SPTAdsPromotedContentImageViewDelegate;

@interface SPTAdsPromotedContentImageView : UIImageView
{
    id <SPTAdsPromotedContentImageViewDelegate> _delegate;
    SPTTheme *_theme;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTAdsPromotedContentImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadImageURL:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithTheme:(id)arg1 glueImageLoader:(id)arg2;

@end

