//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStorylinesTestManager, SPTStorylinesViewModel;
@protocol GLUETheme;

@interface SPTStorylinesNowPlayingViewControllerFactory : NSObject
{
    SPTStorylinesViewModel *_viewModel;
    SPTStorylinesTestManager *_testManager;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTStorylinesTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTStorylinesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)createStorylinesNowPlayingViewController;
- (id)initWithViewModel:(id)arg1 testManager:(id)arg2 theme:(id)arg3;

@end

