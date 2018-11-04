//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingAuxiliaryActionsModelObserver.h"

@class NSString, SPTNowPlayingFeedbackButton, SPTNowPlayingModel, SPTTheme;

@interface SPTNowPlayingBarHeartViewController : UIViewController <SPTNowPlayingAuxiliaryActionsModelObserver>
{
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    id <SPTNowPlayingFeedbackObservable> _feedbackObservable;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTNowPlayingFeedbackButton *_heartButton;
}

@property(retain, nonatomic) SPTNowPlayingFeedbackButton *heartButton; // @synthesize heartButton=_heartButton;
@property(retain, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) id <SPTNowPlayingFeedbackObservable> feedbackObservable; // @synthesize feedbackObservable=_feedbackObservable;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)auxiliaryActionsModelDidChangeCollectionState:(id)arg1;
- (void)addToCollectionButtonTouchedUpInside;
- (void)needUpdateUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 feedbackObservable:(id)arg3 auxiliaryActionsHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
