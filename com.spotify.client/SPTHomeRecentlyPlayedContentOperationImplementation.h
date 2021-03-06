//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeRecentlyPlayedContentOperation-Protocol.h"
#import "SPTRecentlyPlayedListObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTRecentlyPlayedList;

@interface SPTHomeRecentlyPlayedContentOperationImplementation : NSObject <SPTRecentlyPlayedListObserver, SPTHomeRecentlyPlayedContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTRecentlyPlayedList> _recentlyPlayedList;
}

+ (unsigned long long)indexOfComponentModelBuilder:(id)arg1 inViewModelBuilder:(id)arg2;
+ (id)recentlyPlayedInfoFromViewModelBuilder:(id)arg1;
@property(readonly, nonatomic) id <SPTRecentlyPlayedList> recentlyPlayedList; // @synthesize recentlyPlayedList=_recentlyPlayedList;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)styleForEntityURL:(id)arg1;
- (void)addItem:(id)arg1 toCarousel:(id)arg2 withSourceContentIdentifier:(id)arg3;
- (void)configureRecentlyPlayedItemComponent:(id)arg1 withItem:(id)arg2;
- (void)configureHomeComponent:(id)arg1 name:(id)arg2 title:(id)arg3 position:(unsigned long long)arg4;
- (void)removeRecentlyPlayedComponentFromViewModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)recentlyPlayedListDidReload:(id)arg1;
- (void)dealloc;
- (id)initWithRecentlyPlayedList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *itemComponentModelIdentifierPrefix;
@property(readonly) Class superclass;

@end

