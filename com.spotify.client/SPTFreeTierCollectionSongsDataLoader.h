//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierCollectionRangeDataLoader-Protocol.h"

@class NSString;
@protocol SPTClientSettings, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTFreeTierCollectionRangeDataLoaderDelegate, SPTFreeTierCollectionSongsDataLoaderDelegate, SPTFreeTierCollectionTestManager;

@interface SPTFreeTierCollectionSongsDataLoader : NSObject <SPTFreeTierCollectionRangeDataLoader>
{
    id <SPTFreeTierCollectionRangeDataLoaderDelegate> rangeDataLoaderDelegate;
    unsigned long long totalNumberOfItems;
    id <SPTFreeTierCollectionSongsDataLoaderDelegate> _delegate;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    id <SPTClientSettings> _clientSettings;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _subscription;
}

@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(nonatomic) __weak id <SPTFreeTierCollectionSongsDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long totalNumberOfItems; // @synthesize totalNumberOfItems;
@property(nonatomic) __weak id <SPTFreeTierCollectionRangeDataLoaderDelegate> rangeDataLoaderDelegate; // @synthesize rangeDataLoaderDelegate;
- (void).cxx_destruct;
- (void)loadItemsForRange:(struct _NSRange)arg1 sortRule:(id)arg2 filterRules:(id)arg3 textFilter:(id)arg4;
- (id)initWithCollectionDataLoader:(id)arg1 clientSettings:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

