//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Launcher.h"

#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class AnalyticsEngagementEventTagger, NSString, UIActivityViewController;
@protocol ShareLauncherDelegate;

@interface ShareLauncher : Launcher <UIPopoverPresentationControllerDelegate>
{
    AnalyticsEngagementEventTagger *_analyticsEngagementEventTagger;
    id <ShareLauncherDelegate> _delegate;
    UIActivityViewController *_activityViewController;
}

+ (id)storyboardName;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) __weak id <ShareLauncherDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AnalyticsEngagementEventTagger *analyticsEngagementEventTagger; // @synthesize analyticsEngagementEventTagger=_analyticsEngagementEventTagger;
- (void).cxx_destruct;
- (void)delegateDidDismissShareLauncher;
- (void)delegateDidCompleteActivityInShareLauncher;
- (void)delegateDidCancelActivityInShareLauncher;
- (void)configurePopoverPresentationControllerForController:(id)arg1;
- (id)excludedActivityTypes;
- (id)contextFromController:(id)arg1;
- (long long)screenFromController:(id)arg1;
- (id)activityViewControllerWithItems:(id)arg1 sourceViewController:(id)arg2;
- (id)activityControllerWithItems:(id)arg1 sourceViewController:(id)arg2 screen:(long long)arg3;
- (_Bool)willLaunchAsPopoverIn:(id)arg1;
- (void)tagCompletionForScreen:(long long)arg1 destination:(id)arg2 context:(id)arg3;
- (void)tagStartForScreen:(long long)arg1 context:(id)arg2;
- (void)launchFromSourceViewController:(id)arg1 withItems:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithAnalyticsEngagementEventTagger:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

