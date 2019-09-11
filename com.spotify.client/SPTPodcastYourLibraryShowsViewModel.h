//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastTestManagerObserver-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTCollectionLogger, SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTPodcastTestManager, SPTPodcastUIStringFormatter, SPTPodcastYourLibraryShowsViewModelDelegate;

@interface SPTPodcastYourLibraryShowsViewModel : NSObject <SPTPodcastTestManagerObserver>
{
    id <SPTPodcastYourLibraryShowsViewModelDelegate> _delegate;
    NSURL *_URL;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionRequestToken;
    id <SPTCollectionLogger> _collectionLogger;
    NSArray *_showsCollection;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
}

@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(copy, nonatomic) NSArray *showsCollection; // @synthesize showsCollection=_showsCollection;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionRequestToken; // @synthesize collectionRequestToken=_collectionRequestToken;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastYourLibraryShowsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)podcastTestManagerDidUpdate:(id)arg1;
- (id)parseResponseItems:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (unsigned long long)numberOfRows;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
- (void)dealloc;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 collectionLogger:(id)arg3 podcastTestManager:(id)arg4 stringFormatter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

