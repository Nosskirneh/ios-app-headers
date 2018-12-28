//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAdSource, NSArray, NSSet, NSString, UIViewController;
@protocol GADAdLoaderDelegate, OS_dispatch_queue;

@interface GADNAdLoader : NSObject
{
    GADNAdSource *_adSource;
    _Bool _requestInProgress;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSSet *_adTypes;
    NSArray *_options;
    UIViewController *_rootViewController;
    id <GADAdLoaderDelegate> _delegate;
    NSString *_adUnitID;
}

@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak id <GADAdLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)receivePublicAd:(id)arg1;
- (void)finishLoading;
- (void)failedToReceiveAdWithError:(id)arg1;
- (id)validAdSizes;
- (id)customTemplateIDs;
- (void)updateTargeting:(id)arg1;
- (id)adSource;
- (id)publicAdFromInternalAd:(id)arg1 info:(struct NSDictionary *)arg2 error:(id *)arg3;
- (void)loadRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adTypes:(id)arg3 options:(id)arg4;

@end

