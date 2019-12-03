//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXSearchSourceDelegate-Protocol.h"

@class NSArray, NSManagedObjectContext, NSString, VOXSearchCollectionsSource, VOXSearchLibrarySource, VOXSearchRadioSource, VOXSearchSoundCloudSource, VOXSearchYouTubeSource;
@protocol VOXSearchManagerDelegate;

@interface VOXSearchManager : NSObject <VOXSearchSourceDelegate>
{
    _Bool _busy;
    id <VOXSearchManagerDelegate> _delegate;
    NSArray *_activeSearchSources;
    NSString *_searchTerm;
    VOXSearchLibrarySource *_librarySource;
    VOXSearchSoundCloudSource *_soundCloudSource;
    VOXSearchRadioSource *_radioSource;
    VOXSearchYouTubeSource *_youTubeSource;
    VOXSearchCollectionsSource *_collectionsSource;
    unsigned long long _currentSearchSource;
    NSArray *_searchResults;
    NSManagedObjectContext *_context;
}

@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property unsigned long long currentSearchSource; // @synthesize currentSearchSource=_currentSearchSource;
@property(retain, nonatomic) VOXSearchCollectionsSource *collectionsSource; // @synthesize collectionsSource=_collectionsSource;
@property(retain, nonatomic) VOXSearchYouTubeSource *youTubeSource; // @synthesize youTubeSource=_youTubeSource;
@property(retain, nonatomic) VOXSearchRadioSource *radioSource; // @synthesize radioSource=_radioSource;
@property(retain, nonatomic) VOXSearchSoundCloudSource *soundCloudSource; // @synthesize soundCloudSource=_soundCloudSource;
@property(retain, nonatomic) VOXSearchLibrarySource *librarySource; // @synthesize librarySource=_librarySource;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSArray *activeSearchSources; // @synthesize activeSearchSources=_activeSearchSources;
@property(nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(nonatomic) __weak id <VOXSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sourceReplenished:(id)arg1 sourceType:(unsigned long long)arg2;
- (void)sourceUpdatedWithType:(unsigned long long)arg1;
- (void)sourceDidChangeState;
- (void)setRecentSearchesStorage:(id)arg1 ForSource:(unsigned long long)arg2;
- (id)recentSearchesStorageForSource:(unsigned long long)arg1;
- (id)recentSearchStorageKeyForSource:(unsigned long long)arg1;
- (void)cancelSearching;
- (void)addSearchTermToRecents:(id)arg1 forSource:(unsigned long long)arg2;
- (id)recentSearchesForSource:(unsigned long long)arg1;
- (void)requestMoreResults;
- (void)searchWithQuery:(id)arg1 inSource:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
