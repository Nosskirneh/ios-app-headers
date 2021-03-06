//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIContinueListeningContentOperation-Protocol.h"
#import "SPTPodcastUnfinishedItemsProviderObserver-Protocol.h"

@class HUBIdentifier, NSArray, NSString;
@protocol HUBContentOperationDelegate, SPTPodcastUIContinueListeningDiffLogger, SPTPodcastUITestManager, SPTPodcastUnfinishedItemsProvider;

@interface SPTPodcastUIContinueListeningContentOperationImpl : NSObject <SPTPodcastUnfinishedItemsProviderObserver, SPTPodcastUIContinueListeningContentOperation>
{
    _Bool _hasBeenPerformed;
    id <HUBContentOperationDelegate> _delegate;
    NSString *_itemComponentModelIdentifierPrefix;
    id <SPTPodcastUnfinishedItemsProvider> _unfinishedItemsProvider;
    id <SPTPodcastUIContinueListeningDiffLogger> _continueListeningDiffLogger;
    NSArray *_entityList;
    NSArray *_remoteItems;
    HUBIdentifier *_itemComponentIdentifier;
    id <SPTPodcastUITestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTPodcastUITestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) _Bool hasBeenPerformed; // @synthesize hasBeenPerformed=_hasBeenPerformed;
@property(retain, nonatomic) HUBIdentifier *itemComponentIdentifier; // @synthesize itemComponentIdentifier=_itemComponentIdentifier;
@property(copy, nonatomic) NSArray *remoteItems; // @synthesize remoteItems=_remoteItems;
@property(copy, nonatomic) NSArray *entityList; // @synthesize entityList=_entityList;
@property(readonly, nonatomic) id <SPTPodcastUIContinueListeningDiffLogger> continueListeningDiffLogger; // @synthesize continueListeningDiffLogger=_continueListeningDiffLogger;
@property(readonly, nonatomic) id <SPTPodcastUnfinishedItemsProvider> unfinishedItemsProvider; // @synthesize unfinishedItemsProvider=_unfinishedItemsProvider;
@property(copy, nonatomic) NSString *itemComponentModelIdentifierPrefix; // @synthesize itemComponentModelIdentifierPrefix=_itemComponentModelIdentifierPrefix;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unfinishedItemsModelDidReload:(id)arg1;
- (void)performRemoteLogging;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithUnfinishedItemsProvider:(id)arg1 continueListeningDiffLogger:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

