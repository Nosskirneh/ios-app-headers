//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTCanvasViewControllerViewModelUIDelegate-Protocol.h"

@class NSString, SPTCanvasViewControllerViewModel, UIActivityIndicatorView, UIImageView, UIView;

@interface SPTCanvasViewController : UIViewController <SPTCanvasViewControllerViewModelUIDelegate>
{
    SPTCanvasViewControllerViewModel *_viewModel;
    UIView *_videoPlayerView;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) SPTCanvasViewControllerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)animateWithAnimations:(CDUnknownBlockType)arg1;
- (void)didLoadVideoPlayer;
- (void)willLoadVideoPlayer;
- (void)removeVideoPlayerView;
- (void)addVideoPlayerView:(id)arg1;
- (void)updateCanvasImage:(id)arg1;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

