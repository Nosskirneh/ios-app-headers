//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GADMediatedAd : NSObject
{
    NSMutableArray *_clickHandlers;
    NSMutableArray *_impressionHandlers;
    NSMutableArray *_downloadedImpressionHandlers;
    NSString *_adNetworkClassName;
}

@property(copy, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
- (void).cxx_destruct;
- (void)addDownloadedImpressionHandler:(CDUnknownBlockType)arg1;
- (void)addImpressionHandler:(CDUnknownBlockType)arg1;
- (void)addClickHandler:(CDUnknownBlockType)arg1;
- (void)reportDownloadedImpression;
- (void)reportImpression;
- (void)reportClick;
- (id)loadableAdForAdLoader:(id)arg1;
- (id)init;

@end

