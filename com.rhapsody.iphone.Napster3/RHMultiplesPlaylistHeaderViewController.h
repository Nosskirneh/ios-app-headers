//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class NSLayoutConstraint, RHCombinedSourcesViewModel, UILabel, _TtC7Napster19RHDeferredImageView;

@interface RHMultiplesPlaylistHeaderViewController : RHViewController
{
    UILabel *_titleLabel;
    _TtC7Napster19RHDeferredImageView *_heroImageView;
    RHCombinedSourcesViewModel *_viewModel;
    NSLayoutConstraint *_imageHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) RHCombinedSourcesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak _TtC7Napster19RHDeferredImageView *heroImageView; // @synthesize heroImageView=_heroImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateScrollPartOfTheView:(double)arg1;
- (void)setStyle;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

