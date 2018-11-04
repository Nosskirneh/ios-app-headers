//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTContextMenuViewDataSource.h"
#import "SPTContextMenuViewDelegate.h"
#import "SPTPageController.h"
#import "SPTPodcastPlaybackSpeedMenuActionDelegate.h"

@class NSArray, NSString, NSURL, SPTContextMenuView, SPTContextMenuViewTransition, SPTPodcastLogger, SPTPodcastPreferences, SPTPodcastSpeedControlOptions;

@interface SPTPodcastSpeedControlViewController : UIViewController <SPTPodcastPlaybackSpeedMenuActionDelegate, SPTContextMenuViewDataSource, SPTContextMenuViewDelegate, SPTPageController>
{
    SPTPodcastSpeedControlOptions *_speedControlOptions;
    NSArray *_contextMenuActions;
    SPTPodcastPreferences *_podcastPreferences;
    SPTContextMenuView *_contextMenuView;
    SPTContextMenuViewTransition *_transition;
    SPTPodcastLogger *_podcastLogger;
}

@property(retain, nonatomic) SPTPodcastLogger *podcastLogger; // @synthesize podcastLogger=_podcastLogger;
@property(retain, nonatomic) SPTContextMenuViewTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SPTContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(retain, nonatomic) SPTPodcastPreferences *podcastPreferences; // @synthesize podcastPreferences=_podcastPreferences;
@property(retain, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(retain, nonatomic) SPTPodcastSpeedControlOptions *speedControlOptions; // @synthesize speedControlOptions=_speedControlOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)didSelectSpeedOptionWithPlaybackSpeed:(id)arg1;
- (_Bool)contextMenuView:(id)arg1 shouldBeDismissedAfterPerformingAction:(id)arg2;
- (void)dismissContextMenuView:(id)arg1 dismissalStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contextMenuView:(id)arg1 titleForHeaderInSection:(unsigned long long)arg2;
- (id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
- (void)loadView;
- (id)initWithSpeedControlOptions:(id)arg1 podcastPreferences:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
