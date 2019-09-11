//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTModerationWebViewControllerFactory, SPTModerationWebViewURLProviderFactory;
@protocol SPTModalPresentationController, SPTOfflineModeState;

@interface SPTModerationAction : SPAction
{
    NSURL *_entityURL;
    NSURL *_sourceURL;
    SPTModerationWebViewControllerFactory *_webviewFactory;
    SPTModerationWebViewURLProviderFactory *_urlProviderFactory;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTModerationWebViewURLProviderFactory *urlProviderFactory; // @synthesize urlProviderFactory=_urlProviderFactory;
@property(readonly, nonatomic) SPTModerationWebViewControllerFactory *webviewFactory; // @synthesize webviewFactory=_webviewFactory;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithWebviewFactory:(id)arg1 urlProviderFactory:(id)arg2 modalPresentationController:(id)arg3 offlineModeState:(id)arg4 entityURL:(id)arg5 sourceURL:(id)arg6 logContext:(id)arg7;

@end

