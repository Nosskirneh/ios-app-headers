//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTModule-Protocol.h"

@class NSString;
@protocol YTDataServicesConfig, YTInnerTubeConfig;

@interface YTInnerTubeModule : NSObject <YTModule>
{
    id <YTInnerTubeConfig> _config;
    id <YTDataServicesConfig> _dataServicesConfig;
}

- (void).cxx_destruct;
- (void)bindImageFetcherServiceWithBinder:(id)arg1;
- (void)bindInnerTubeFetcherServiceAndURLBuilderWithBinder:(id)arg1;
- (void)bindServiceWithBinder:(id)arg1;
- (void)configureWithBinder:(id)arg1;
- (id)overriddenModules;
- (id)initWithConfig:(id)arg1 dataServicesConfig:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

