//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CollectionFeature, SPTDailyMixTestManager;

@interface SPTDailyMixCollectionLibraryManager : NSObject
{
    id <SPTDailyMixTestManager> _testManager;
    id <CollectionFeature> _collection;
    NSURL *_currentlyRegisteredURI;
}

@property(retain, nonatomic) NSURL *currentlyRegisteredURI; // @synthesize currentlyRegisteredURI=_currentlyRegisteredURI;
@property(readonly, nonatomic) __weak id <CollectionFeature> collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) id <SPTDailyMixTestManager> testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)invalidate;
- (void)load;
- (id)initWithTestManager:(id)arg1 collection:(id)arg2;

@end

