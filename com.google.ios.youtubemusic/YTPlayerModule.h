//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTModule-Protocol.h"

@class NSString;
@protocol YTPlayerServicesConfig;

@interface YTPlayerModule : NSObject <YTModule>
{
    id <YTPlayerServicesConfig> _config;
}

- (void).cxx_destruct;
- (void)configureWithBinder:(id)arg1;
- (id)overriddenModules;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
