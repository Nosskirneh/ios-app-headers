//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMNativeRenderController, NSData, NSDictionary, NSString;

@protocol IMNativeRenderControllerDelegate <NSObject>
- (void)imNativeRenderControllerDidFailToLoad:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerDidFinishLoad:(IMNativeRenderController *)arg1;

@optional
- (NSString *)imNativeRenderControllerFetchAdBlobForWebView:(IMNativeRenderController *)arg1;
- (_Bool)imNativeRenderControllerSaveAdBlobFromWebView:(NSString *)arg1 renderController:(IMNativeRenderController *)arg2;
- (NSString *)imNativeRenderControllerGetRequestId;
- (long long)imNativeRenderControllerGetPlacement;
- (void)imNativeRenderController:(IMNativeRenderController *)arg1 audioStateChanged:(_Bool)arg2;
- (void)userSkippedMediaFromNativeRenderController:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerFinishedPlayingMedia:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerDidDismissScreen:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerWillDismissScreen:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerDidPresentScreen:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerWillPresentScreen:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerRewardActionComplete:(NSDictionary *)arg1;
- (void)imNativeRenderControllerUserLeaveApplication;
- (void)imNativeRenderController:(IMNativeRenderController *)arg1 VastTagFound:(NSData *)arg2;
- (void)imNativeRenderControllerAdClicked:(IMNativeRenderController *)arg1 withParams:(NSDictionary *)arg2;
- (void)imNativeRenderControllerViewabilityTracked:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerDidCloseAd:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerWillCloseAd:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerFireAdFailed:(IMNativeRenderController *)arg1;
- (void)imNativeRenderControllerFireAdReady:(IMNativeRenderController *)arg1;
- (void)fireTelemetryEventForAutoRedirectionForCommand:(NSString *)arg1;
- (_Bool)shouldAllowAutoRedirectionForUserClickedOnRenderView:(_Bool)arg1;
- (NSString *)fetchAdUnitType;
@end

