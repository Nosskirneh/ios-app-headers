//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBaseAnalyticsProvider.h"

@class APPromotedRequestFactory, ReliableRequestUploader;

@interface APPromotedAnalyticsProvider : APBaseAnalyticsProvider
{
    APPromotedRequestFactory *_requestFactory;
    ReliableRequestUploader *_uploader;
}

@property(readonly, nonatomic) ReliableRequestUploader *uploader; // @synthesize uploader=_uploader;
@property(readonly, nonatomic) APPromotedRequestFactory *requestFactory; // @synthesize requestFactory=_requestFactory;
- (void).cxx_destruct;
- (void)flush;
- (void)tagEvent:(id)arg1;
- (id)trackedEvents;
- (id)initWithRequestFactory:(id)arg1 uploader:(id)arg2;
- (id)initWithRequestUploader:(id)arg1;

@end

