//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _TtC7Napster12Dependencies, _TtC7Napster13AppboyService, _TtC7Napster16GiphyDataService;

@interface RHSharingService : NSObject
{
    _TtC7Napster16GiphyDataService *_giphyDataService;
}

@property(readonly, nonatomic) _TtC7Napster16GiphyDataService *giphyDataService; // @synthesize giphyDataService=_giphyDataService;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *initializedRootViewController;
@property(readonly, nonatomic) _TtC7Napster12Dependencies *dependencies;
- (id)alertPresenter;
- (id)dataController;
- (id)accountController;
- (id)permissionsController;
- (id)playerController;
@property(readonly, nonatomic) _TtC7Napster13AppboyService *appboyService;
- (void)configurePopover:(id)arg1 withAnchor:(id)arg2;
- (void)sendCompletedShareMetricForActivity:(id)arg1 andDataType:(id)arg2 metricsScreenName:(id)arg3;
- (void)sendCompletedShareMetricForActivity:(id)arg1 andDataType:(id)arg2 presentingViewController:(id)arg3;
- (id)merticsScreenNameFromViewController:(id)arg1;
- (id)addSharingParametersToURL:(id)arg1 andMainContentType:(id)arg2;
- (id)getSharingTypeFromActivityType:(id)arg1;
- (id)sharingParametersForPlaylist:(id)arg1 skipArtworkFetch:(_Bool)arg2;
- (id)ensurePublicVisibilityForPlaylist:(id)arg1;
- (void)facebookSharePlaylistWithId:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3 delegate:(id)arg4 metricsScreenName:(id)arg5;
- (void)createURLCopyWithPlaylistId:(id)arg1 presentingViewController:(id)arg2 metricsScreenName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sharePlaylist:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3 metricsScreenName:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sharePlaylist:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sharePlaylistWithId:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3 metricsScreenName:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shareAppWithAnchor:(id)arg1 presentingViewController:(id)arg2;
- (id)sharingParametersForApp;
- (void)shareEditorial:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3;
- (id)sharingParametersForEditorial:(id)arg1;
- (void)shareProfile:(id)arg1 sharingCurrentProfile:(_Bool)arg2 anchor:(id)arg3 presentingViewController:(id)arg4;
- (void)shareTrack:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3;
- (void)presentSharingUIForSharingContext:(id)arg1 data:(id)arg2 anchor:(id)arg3 presentingViewController:(id)arg4;
- (id)rh_buildSharingContextForProfile:(id)arg1 sharingCurrentProfile:(_Bool)arg2 accountController:(id)arg3;
- (id)sharingParametersForProfile:(id)arg1 sharingCurrentProfile:(_Bool)arg2 accountController:(id)arg3;
- (id)rh_buildSharingContextForTrack:(id)arg1 accountController:(id)arg2;
- (id)sharingParametersForTrack:(id)arg1 accountController:(id)arg2;
- (id)twitterArtistNameHandle:(id)arg1;
- (void)shareAlbum:(id)arg1 anchor:(id)arg2 presentingViewController:(id)arg3;
- (id)sharingParametersForAlbum:(id)arg1;
- (_Bool)isSharingAvailable;
- (id)initWithGiphyDataService:(id)arg1;

@end

