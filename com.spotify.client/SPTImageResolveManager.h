//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageResolveProjectionMapProvider-Protocol.h"

@class NSDictionary, NSString, SPTImageResolveProjectionMapLoader;

@interface SPTImageResolveManager : NSObject <SPTImageResolveProjectionMapProvider>
{
    SPTImageResolveProjectionMapLoader *_loader;
    NSDictionary *_projectionMap;
}

@property(retain) NSDictionary *projectionMap; // @synthesize projectionMap=_projectionMap;
@property(readonly, nonatomic) SPTImageResolveProjectionMapLoader *loader; // @synthesize loader=_loader;
- (void).cxx_destruct;
- (id)provideProjectionMap;
- (id)createImageResolver;
- (void)loadConfiguration;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
