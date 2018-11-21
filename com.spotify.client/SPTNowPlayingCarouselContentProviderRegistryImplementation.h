//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingCarouselContentProviderRegistry-Protocol.h"

@class NSMutableArray, NSString;
@protocol SPTNowPlayingCarouselContentProviderRegistryImplementationDelegate;

@interface SPTNowPlayingCarouselContentProviderRegistryImplementation : NSObject <SPTNowPlayingCarouselContentProviderRegistry>
{
    id <SPTNowPlayingCarouselContentProviderRegistryImplementationDelegate> _delegate;
    NSMutableArray *_providerFactories;
}

@property(retain, nonatomic) NSMutableArray *providerFactories; // @synthesize providerFactories=_providerFactories;
@property(nonatomic) __weak id <SPTNowPlayingCarouselContentProviderRegistryImplementationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)providersForAllFactories;
- (void)updateContentProvidersForFactory:(id)arg1;
- (void)unregisterContentProviderFactory:(id)arg1;
- (void)registerContentProviderFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

