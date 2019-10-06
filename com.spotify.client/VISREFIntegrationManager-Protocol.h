//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentRegistry, HUBIdentifier, SPTTheme, UIViewController;
@protocol VISREFPlayButtonTestManager;

@protocol VISREFIntegrationManager <NSObject>
@property(readonly, nonatomic, getter=isVisualRefreshLeftAlignedTrackCloudEnabled) _Bool visualRefreshLeftAlignedTrackCloudEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshPlaylistTrackRowArtworkEnabled) _Bool visualRefreshPlaylistTrackRowArtworkEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshSectionHeaderEnabled) _Bool visualRefreshSectionHeaderEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshGreenButtonEnabled) _Bool visualRefreshGreenButtonEnabled;
@property(readonly, nonatomic, getter=isVisualRefreshHeaderEnabled) _Bool visualRefreshHeaderEnabled;
- (id <VISREFPlayButtonTestManager>)providePlayButtonTestManager;
- (_Bool)hasOverrideForComponentId:(HUBIdentifier *)arg1;
- (HUBComponentRegistry *)overriddenComponentRegistryFromRegistry:(HUBComponentRegistry *)arg1 sptTheme:(SPTTheme *)arg2 contextMenuButtonViewModel:(id)arg3 feedbackButtonViewModel:(id)arg4 viewController:(UIViewController *)arg5 headerType:(unsigned long long)arg6;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)configureWithViewController:(UIViewController *)arg1;
@end

