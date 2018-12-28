//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMTabbedViewController.h"

#import "GPMBannerAdDisplay-Protocol.h"

@class GPMActivityIndicator, GPMArtRequestTicket, NSString, Situation, UIBarButtonItem;

@interface GPMSituationTreeViewController : GPMTabbedViewController <GPMBannerAdDisplay>
{
    Situation *_situation;
    GPMActivityIndicator *_activityIndicator;
    UIBarButtonItem *_shareButton;
    GPMArtRequestTicket *_artRequestTicket;
}

@property(readonly, nonatomic) Situation *situation; // @synthesize situation=_situation;
- (void).cxx_destruct;
- (id)shareButton;
- (void)share:(id)arg1;
- (id)navigationStyle;
- (void)refreshNavigationItems;
- (void)tabbedHeaderController:(id)arg1 heroImageWithCallback:(CDUnknownBlockType)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSituation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

