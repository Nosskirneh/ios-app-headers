//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNMediationCredentials;
@protocol GADAdNetworkExtras;

@interface GADNRTBRequestParameters : NSObject
{
    GADNMediationCredentials *_credentials;
    id <GADAdNetworkExtras> _extras;
    struct GADNAdSize _adSize;
}

@property(readonly, nonatomic) struct GADNAdSize adSize; // @synthesize adSize=_adSize;
@property(readonly, nonatomic) id <GADAdNetworkExtras> extras; // @synthesize extras=_extras;
@property(readonly, nonatomic) GADNMediationCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (id)initWithTargeting:(id)arg1 RTBAdapter:(id)arg2;

@end

