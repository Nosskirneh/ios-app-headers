//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IMAsset, IMNativeLandingPageProcessor, NSArray, NSDictionary, NSString;

@protocol IMNativeLandingPageProcessorDelegate
- (void)imNativeLandingPageProcessorfireEvents:(NSArray *)arg1 withEvent:(NSString *)arg2 trackerType:(NSString *)arg3 showTime:(unsigned long long)arg4;
- (void)imNativeLandingPageProcessorSendTelemetryForEvent:(NSString *)arg1 withPayloadDict:(NSDictionary *)arg2;
- (void)imNativeLandingPageProcessorSendTelemetryEventForEvent:(NSString *)arg1 WithProductID:(NSString *)arg2;
- (IMAsset *)imNativeLandingPageProcessorGetRootAsset:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidDismissScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillDismissScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidLeaveApplication:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidPresentScreen:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillPresentScreen:(IMNativeLandingPageProcessor *)arg1;

@optional
- (void)imNativeLandingPageProcessorDidPresentEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillPresentEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorDidDismissEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
- (void)imNativeLandingPageProcessorWillDismissEmbeddedBrowser:(IMNativeLandingPageProcessor *)arg1;
@end

