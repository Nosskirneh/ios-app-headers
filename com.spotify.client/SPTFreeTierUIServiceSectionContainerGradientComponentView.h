//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewObserver.h"
#import "EXP_HUBComponentViewWithChildren.h"
#import "SPTImageLoaderDelegate.h"

@class NSMutableArray, NSString, UIColor;

@interface SPTFreeTierUIServiceSectionContainerGradientComponentView : EXP_HUBComponentView <SPTImageLoaderDelegate, EXP_HUBComponentViewWithChildren, EXP_HUBComponentViewObserver>
{
    id <EXP_HUBComponentViewChildDelegate> childDelegate;
    id <GLUETheme> _theme;
    NSMutableArray *_childViews;
    id <SPTImageLoader> _imageLoader;
}

+ (double)getItemTopOffseWithModel:(id)arg1 belongingToModel:(id)arg2 withTheme:(id)arg3;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) NSMutableArray *childViews; // @synthesize childViews=_childViews;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setGradientColor:(id)arg1 model:(id)arg2;
- (void)configureGradientBackgroundWithModel:(id)arg1;
- (void)configureChildrenWithModel:(id)arg1;
- (void)removeChildSubviews;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
@property(readonly, nonatomic) UIColor *defaultGradientColor;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 imageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

