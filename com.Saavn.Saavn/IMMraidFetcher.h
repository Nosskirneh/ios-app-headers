//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMNetworkDelegate-Protocol.h"

@class IMAdsConfig, IMMraidFetcherDAO, IMNetworkServiceProvider, IMRequest, NSDictionary, NSString;

@interface IMMraidFetcher : NSObject <IMNetworkDelegate>
{
    _Bool _isFetching;
    int _retryCount;
    IMNetworkServiceProvider *_nsp;
    IMAdsConfig *_config;
    IMRequest *_mraidRequest;
    NSDictionary *_mraidDict;
    IMMraidFetcherDAO *_dao;
    unsigned long long _startTime;
}

+ (id)sharedFetcher;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) IMMraidFetcherDAO *dao; // @synthesize dao=_dao;
@property(retain, nonatomic) NSDictionary *mraidDict; // @synthesize mraidDict=_mraidDict;
@property(retain, nonatomic) IMRequest *mraidRequest; // @synthesize mraidRequest=_mraidRequest;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) IMNetworkServiceProvider *nsp; // @synthesize nsp=_nsp;
- (void).cxx_destruct;
- (void)networkServiceProvider:(id)arg1 request:(id)arg2 didGetResponse:(id)arg3;
- (void)fetchJSFromDB:(CDUnknownBlockType)arg1;
- (void)fetchJSFromDBOrSendRequest;
- (void)start;
- (void)stop;
- (void)tryToFetchMraid:(id)arg1;
- (void)fetchMRAID:(id)arg1;
- (id)getMRAIDFromConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

