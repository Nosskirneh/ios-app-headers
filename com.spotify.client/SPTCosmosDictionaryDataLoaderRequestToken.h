//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTCosmosDictionaryDataLoaderRequestToken-Protocol.h"

@class NSString, SPTRequestLifetime;

@interface SPTCosmosDictionaryDataLoaderRequestToken : NSObject <SPTCosmosDictionaryDataLoaderRequestToken>
{
    SPTRequestLifetime *_lifetime;
}

@property(readonly, nonatomic) SPTRequestLifetime *lifetime; // @synthesize lifetime=_lifetime;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithLifetime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

