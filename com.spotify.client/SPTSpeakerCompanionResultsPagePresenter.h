//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpeakerCompanionResultsPageViewModelDelegate-Protocol.h"

@class NSString, SPTSpeakerCompanionResultsPageViewModel, UIViewController;
@protocol GLUEImageLoader, GLUETheme, SPTModalPresentationController;

@interface SPTSpeakerCompanionResultsPagePresenter : NSObject <SPTSpeakerCompanionResultsPageViewModelDelegate>
{
    SPTSpeakerCompanionResultsPageViewModel *_viewModel;
    id <GLUEImageLoader> _glueImageLoader;
    id <GLUETheme> _glueTheme;
    UIViewController *_resultsPageViewController;
    id <SPTModalPresentationController> _modalPresentationController;
}

@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) UIViewController *resultsPageViewController; // @synthesize resultsPageViewController=_resultsPageViewController;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTSpeakerCompanionResultsPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)speakerCompanionResultsPageViewModel:(id)arg1 wantsToDismissWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)speakerCompanionResultsPageViewModel:(id)arg1 wantsToPresentWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)speakerCompanionResultsPageViewModelDidUpdate:(id)arg1;
- (id)initWithCompanionResultsViewModel:(id)arg1 modalPresenter:(id)arg2 glueImageLoader:(id)arg3 glueTheme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

