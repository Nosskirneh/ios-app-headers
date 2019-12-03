//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol HUBContentOperation, HUBContentOperation><HUBViewContentOffsetObserver, SPTHubComponentModelURIResolver, SPTHubPagedContentOperation, SPTHubRemoteContentOperationURLResolver;

@protocol SPTHubContentOperationFactory <NSObject>
- (id <HUBContentOperation>)createHubs2MigrationContentOperation;
- (id <HUBContentOperation><HUBViewContentOffsetObserver>)createContentOperationContainerWithPagedContentOperation:(id <SPTHubPagedContentOperation>)arg1;
- (id <HUBContentOperation>)createPlaybackHighlightingContentOperationWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1;
- (id <HUBContentOperation>)createLocalJSONContentOperationWithContentURL:(NSURL *)arg1;
- (id <HUBContentOperation>)createRemoteContentOperationWithContentURL:(NSURL *)arg1 sourceIdentifier:(NSString *)arg2;
- (id <HUBContentOperation>)createRemoteContentOperationWithContentURLResolver:(id <SPTHubRemoteContentOperationURLResolver>)arg1 sourceIdentifier:(NSString *)arg2;
@end
