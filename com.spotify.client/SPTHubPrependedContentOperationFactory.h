//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperationFactory-Protocol.h"

@class NSString, SPTHubViewLoggerCoordinator;

@interface SPTHubPrependedContentOperationFactory : NSObject <HUBContentOperationFactory>
{
    SPTHubViewLoggerCoordinator *_coordinator;
    NSString *_pageIdentifier;
}

@property(readonly, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, nonatomic) SPTHubViewLoggerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (id)createContentOperationsForViewURI:(id)arg1;
- (id)initWithCoordinator:(id)arg1 pageIdentifier:(id)arg2;

@end

