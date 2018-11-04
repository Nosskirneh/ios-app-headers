//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTYourLibraryModel.h"
#import "SPTYourLibraryPageProviderRegistry.h"

@class NSMutableArray, NSString, SPTObserverManager;

@interface SPTYourLibraryModelImplementation : NSObject <SPTYourLibraryModel, SPTYourLibraryPageProviderRegistry>
{
    _Bool _loaded;
    NSMutableArray *_pageProviders;
    SPTObserverManager *_observers;
}

@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *pageProviders; // @synthesize pageProviders=_pageProviders;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyIfLoaded;
- (void)registerPageProvider:(id)arg1;
- (void)load;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

