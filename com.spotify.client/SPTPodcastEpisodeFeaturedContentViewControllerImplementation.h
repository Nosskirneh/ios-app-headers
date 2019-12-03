//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBViewComponentDelegate-Protocol.h"
#import "SPTHubViewModelProviderDelegate-Protocol.h"
#import "SPTPodcastEpisodeFeaturedContentViewController-Protocol.h"

@class HUBView, NSMutableSet, NSString, SPTHubViewModelProvider;
@protocol GLUETheme, SPTHubImpressionLogger, SPTPodcastEpisodeFeaturedContentHubViewProvider, SPTPodcastEpisodeFeaturedContentViewControllerDelegate;

@interface SPTPodcastEpisodeFeaturedContentViewControllerImplementation : UIViewController <SPTHubViewModelProviderDelegate, HUBViewComponentDelegate, SPTPodcastEpisodeFeaturedContentViewController>
{
    _Bool _loaded;
    id <SPTPodcastEpisodeFeaturedContentViewControllerDelegate> _delegate;
    NSMutableSet *_episodeFeaturedContentComponents;
    id <SPTPodcastEpisodeFeaturedContentHubViewProvider> _hubViewProvider;
    SPTHubViewModelProvider *_hubViewModelProvider;
    id <GLUETheme> _theme;
    HUBView *_hubView;
    id <SPTHubImpressionLogger> _impressionLogger;
}

@property(readonly, nonatomic) id <SPTHubImpressionLogger> impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(retain, nonatomic) HUBView *hubView; // @synthesize hubView=_hubView;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTHubViewModelProvider *hubViewModelProvider; // @synthesize hubViewModelProvider=_hubViewModelProvider;
@property(readonly, nonatomic) id <SPTPodcastEpisodeFeaturedContentHubViewProvider> hubViewProvider; // @synthesize hubViewProvider=_hubViewProvider;
@property(retain, nonatomic) NSMutableSet *episodeFeaturedContentComponents; // @synthesize episodeFeaturedContentComponents=_episodeFeaturedContentComponents;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logImpressionIfNeccessary:(id)arg1;
- (void)superScrollViewDidAppear:(id)arg1;
- (void)superScrollViewDidScroll:(id)arg1;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupHubView;
- (id)initWithHubViewModelProvider:(id)arg1 hubViewProvider:(id)arg2 theme:(id)arg3 impressionLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

