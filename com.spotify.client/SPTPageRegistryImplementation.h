//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPageRegistry.h"

@class NSMutableArray, NSString, SPTObserverManager;

@interface SPTPageRegistryImplementation : NSObject <SPTPageRegistry>
{
    NSMutableArray *_featureRegistrations;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableArray *featureRegistrations; // @synthesize featureRegistrations=_featureRegistrations;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)unregisterFeaturePages;
- (void)unregisterPage:(id)arg1;
- (id)featureRegistrationForURI:(id)arg1;
- (CDUnknownBlockType)completionForURI:(id)arg1;
- (id)pageForURI:(id)arg1 linkDispatcher:(id)arg2 referrerIdentifier:(id)arg3;
- (id)registerPageSelector:(SEL)arg1 target:(id)arg2 predicate:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)registerPageSelector:(SEL)arg1 target:(id)arg2 predicate:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

