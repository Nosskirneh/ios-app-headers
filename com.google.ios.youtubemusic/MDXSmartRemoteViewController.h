//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDXScreenManagerObserver-Protocol.h"
#import "MDXScreenSessionObserver-Protocol.h"
#import "MDXSmartRemoteVoiceControllerDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class MDXScreenManager, MDXScreenSession, MDXSmartRemoteView, MDXSmartRemoteVoiceController, NSMutableArray, NSString, YTICommand, YTInteractionLoggingProxyButton;
@protocol MDXSmartRemoteViewControllerDelegate, YTPlaybackRouteButtonController, YTResponder;

@interface MDXSmartRemoteViewController : UIViewController <MDXScreenManagerObserver, MDXScreenSessionObserver, MDXSmartRemoteVoiceControllerDelegate, YTGraftingViewController, YTResponder>
{
    id <YTPlaybackRouteButtonController> _routeButtonController;
    MDXScreenManager *_screenManager;
    MDXScreenSession *_screenSession;
    MDXSmartRemoteView *_smartRemoteView;
    MDXSmartRemoteVoiceController *_voiceViewController;
    YTICommand *_navigationEndpoint;
    YTInteractionLoggingProxyButton *_headerProxy;
    YTInteractionLoggingProxyButton *_upButtonProxy;
    YTInteractionLoggingProxyButton *_downButtonProxy;
    YTInteractionLoggingProxyButton *_leftButtonProxy;
    YTInteractionLoggingProxyButton *_rightButtonProxy;
    YTInteractionLoggingProxyButton *_enterButtonProxy;
    YTInteractionLoggingProxyButton *_backButtonProxy;
    YTInteractionLoggingProxyButton *_micButtonProxy;
    NSMutableArray *_buttonsNotShown;
    NSMutableArray *_buttonsNotHidden;
    id <YTResponder> _parentResponder;
    id <MDXSmartRemoteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MDXSmartRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (CDUnknownBlockType)clientDataBlockForCheckboxState:(int)arg1;
- (int)visibilityEventTypeForView:(id)arg1;
- (void)logDpadVisibilityChanged;
- (void)logConnectingScreenVisibilityChanged;
- (void)logVoiceSearchVisibilityChanged;
- (id)interactionLoggingProxyButtonWithVEType:(unsigned int)arg1;
- (void)setUpInteractionProxies;
- (void)showConnectingScreen:(_Bool)arg1;
- (void)showVoiceSearch:(_Bool)arg1;
- (void)updateViewWithConnectionState:(long long)arg1;
- (void)didTapBack:(id)arg1;
- (void)didTapDpad:(id)arg1;
- (void)didTapHeader;
- (void)updateSmartRemoteInteractionHistory;
- (void)showDisconnectTooltipIfNeeded;
- (id)navEndpoint;
- (void)micPermissionDisabledForSmartRemoteVoiceController:(id)arg1;
- (void)smartRemoteVoiceController:(id)arg1 didReceivePartialResultWithStablePrefix:(id)arg2 unstableSuffix:(id)arg3;
- (void)smartRemoteVoiceController:(id)arg1 didReceiveResult:(id)arg2;
- (void)smartRemoteVoiceController:(id)arg1 didReceiveError:(id)arg2;
- (void)didCancelVoiceSearchForSmartRemoteVoiceController:(id)arg1;
- (void)didInitiateVoiceSearchForSmartRemoteVoiceController:(id)arg1;
- (void)screenSession:(id)arg1 connectionStateDidChange:(long long)arg2;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (void)didExpandView;
@property(readonly, nonatomic) MDXSmartRemoteView *smartRemoteView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 routeButtonController:(id)arg2 screenManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
