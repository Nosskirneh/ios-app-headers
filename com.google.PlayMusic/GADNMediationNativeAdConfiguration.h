//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNMediationAdConfiguration.h"

@class NSArray;

@interface GADNMediationNativeAdConfiguration : GADNMediationAdConfiguration
{
    NSArray *_options;
}

@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)initWithAdConfiguration:(struct NSDictionary *)arg1 targeting:(id)arg2 credentials:(id)arg3 extras:(id)arg4;
- (id)init;
- (id)initWithOptions:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 targeting:(id)arg3 credentials:(id)arg4 extras:(id)arg5;

@end

