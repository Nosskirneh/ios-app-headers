//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SPTMySPINInfoView;

@interface SPTMySPINInfoViewController : UIViewController
{
    id <SPTMySPINInfoViewModel> _viewModel;
    struct CGSize _remoteScreenSize;
}

@property(readonly, nonatomic) struct CGSize remoteScreenSize; // @synthesize remoteScreenSize=_remoteScreenSize;
@property(readonly, nonatomic) id <SPTMySPINInfoViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didChangeThemeSettings:(id)arg1;
@property(readonly, nonatomic) SPTMySPINInfoView *infoView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 remoteScreenSize:(struct CGSize)arg2;

@end
