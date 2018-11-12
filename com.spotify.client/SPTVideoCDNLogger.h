//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderConsumptionObserver-Protocol.h"

@class NSString, SPTDataLoaderService;
@protocol SPTLogCenter;

@interface SPTVideoCDNLogger : NSObject <SPTDataLoaderConsumptionObserver>
{
    id <SPTLogCenter> _logCenter;
    SPTDataLoaderService *_dataLoaderService;
    unsigned long long _videoCDNSampling;
}

@property(nonatomic) unsigned long long videoCDNSampling; // @synthesize videoCDNSampling=_videoCDNSampling;
@property(retain, nonatomic) SPTDataLoaderService *dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)endedRequestWithResponse:(id)arg1 bytesDownloaded:(int)arg2 bytesUploaded:(int)arg3;
- (_Bool)shouldLogRequest:(id)arg1;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 dataLoaderService:(id)arg2 videoCDNSampling:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

