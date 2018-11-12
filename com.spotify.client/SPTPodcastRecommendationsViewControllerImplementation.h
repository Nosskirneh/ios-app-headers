//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EXP_HUBViewComponentDelegate-Protocol.h"
#import "EXP_SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTPodcastRecommendationsViewController-Protocol.h"

@class EXP_HUBView, EXP_SPTHubViewModelProvider, NSString;
@protocol SPTPodcastRecommendationsHubViewProvider, SPTPodcastRecommendationsViewControllerDelegate;

@interface SPTPodcastRecommendationsViewControllerImplementation : UIViewController <EXP_SPTHubViewModelProviderDelegate, EXP_HUBViewComponentDelegate, SPTPodcastRecommendationsViewController>
{
    _Bool _loaded;
    id <SPTPodcastRecommendationsViewControllerDelegate> _delegate;
    id <SPTPodcastRecommendationsHubViewProvider> _hubViewProvider;
    EXP_SPTHubViewModelProvider *_hubViewModelProvider;
    EXP_HUBView *_hubView;
}

@property(retain, nonatomic) EXP_HUBView *hubView; // @synthesize hubView=_hubView;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) EXP_SPTHubViewModelProvider *hubViewModelProvider; // @synthesize hubViewModelProvider=_hubViewModelProvider;
@property(readonly, nonatomic) id <SPTPodcastRecommendationsHubViewProvider> hubViewProvider; // @synthesize hubViewProvider=_hubViewProvider;
@property(nonatomic) __weak id <SPTPodcastRecommendationsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupHubView;
- (id)initWithHubViewModelProvider:(id)arg1 hubViewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

